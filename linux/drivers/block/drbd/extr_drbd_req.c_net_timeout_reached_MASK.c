
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_request {int rq_state; scalar_t__ epoch; scalar_t__ pre_send_jif; struct drbd_device* device; } ;
struct drbd_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ current_epoch_nr; int last_sent_barrier_jif; } ;
struct drbd_connection {TYPE_1__ send; scalar_t__ last_reconnect_jif; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,char*,int ,unsigned long,unsigned int,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct drbd_request *VAR_1,
  struct drbd_connection *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  unsigned int VAR_5, unsigned int VAR_6)
{
 struct drbd_device *VAR_7 = VAR_1->device;

 if (!FUNC_2(VAR_3, VAR_1->pre_send_jif + VAR_4))
  return 0;

 if (FUNC_3(VAR_3, VAR_2->last_reconnect_jif, VAR_2->last_reconnect_jif + VAR_4))
  return 0;

 if (VAR_1->rq_state & VAR_0) {
  FUNC_0(VAR_7, "Remote failed to finish a request within %ums > ko-count (%u) * timeout (%u * 0.1s)\n",
   FUNC_1(VAR_3 - VAR_1->pre_send_jif), VAR_5, VAR_6);
  return 1;
 }





 if (VAR_1->epoch == VAR_2->send.current_epoch_nr) {
  FUNC_0(VAR_7,
   "We did not send a P_BARRIER for %ums > ko-count (%u) * timeout (%u * 0.1s); drbd kernel thread blocked?\n",
   FUNC_1(VAR_3 - VAR_1->pre_send_jif), VAR_5, VAR_6);
  return 0;
 }
 if (FUNC_2(VAR_3, VAR_2->send.last_sent_barrier_jif + VAR_4)) {
  FUNC_0(VAR_7, "Remote failed to answer a P_BARRIER (sent at %lu jif; now=%lu jif) within %ums > ko-count (%u) * timeout (%u * 0.1s)\n",
   VAR_2->send.last_sent_barrier_jif, VAR_3,
   FUNC_1(VAR_3 - VAR_2->send.last_sent_barrier_jif), VAR_5, VAR_6);
  return 1;
 }
 return 0;
}
