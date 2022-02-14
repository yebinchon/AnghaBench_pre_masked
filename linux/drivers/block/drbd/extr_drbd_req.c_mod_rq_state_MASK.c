
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; scalar_t__ waiting; } ;
struct drbd_request {unsigned int rq_state; int kref; TYPE_1__ i; void* net_done_jif; void* acked_jif; int req_pending_local; int completion_ref; struct drbd_device* device; } ;
struct drbd_peer_device {int dummy; } ;
struct drbd_device {int misc_wait; int ap_in_flight; } ;
struct bio_and_error {int dummy; } ;


 int FUNC_0 (struct drbd_device*,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (struct drbd_peer_device*,struct drbd_request*) ;
 int FUNC_2 (struct drbd_peer_device*,struct drbd_request*) ;
 int FUNC_3 (struct drbd_peer_device*,struct drbd_request*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct drbd_device*) ;
 int VAR_8 ;
 int FUNC_8 (struct drbd_request*,struct bio_and_error*,int) ;
 scalar_t__ FUNC_9 (struct drbd_device*) ;
 struct drbd_peer_device* FUNC_10 (struct drbd_device*) ;
 int FUNC_11 (struct drbd_device*) ;
 void* VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct drbd_peer_device*,struct drbd_request*) ;
 int FUNC_16 (struct drbd_peer_device*,struct drbd_request*) ;
 int FUNC_17 (struct drbd_peer_device*,struct drbd_request*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct drbd_request *VAR_10, struct bio_and_error *VAR_11,
  int VAR_12, int VAR_13)
{
 struct drbd_device *VAR_14 = VAR_10->device;
 struct drbd_peer_device *VAR_15 = FUNC_10(VAR_14);
 unsigned VAR_16 = VAR_10->rq_state;
 int VAR_17 = 0;

 if (FUNC_9(VAR_14) && !((VAR_16 | VAR_12) & VAR_0))
  VAR_13 |= VAR_0;



 VAR_10->rq_state &= ~VAR_12;
 VAR_10->rq_state |= VAR_13;


 if (VAR_10->rq_state == VAR_16)
  return;



 FUNC_12(&VAR_10->kref);

 if (!(VAR_16 & VAR_3) && (VAR_13 & VAR_3))
  FUNC_5(&VAR_10->completion_ref);

 if (!(VAR_16 & VAR_5) && (VAR_13 & VAR_5)) {
  FUNC_11(VAR_14);
  FUNC_5(&VAR_10->completion_ref);
 }

 if (!(VAR_16 & VAR_6) && (VAR_13 & VAR_6)) {
  FUNC_5(&VAR_10->completion_ref);
  FUNC_16(VAR_15, VAR_10);
 }

 if (!(VAR_16 & VAR_1) && (VAR_13 & VAR_1))
  FUNC_12(&VAR_10->kref);

 if (!(VAR_16 & VAR_7) && (VAR_13 & VAR_7)) {

  if (!(VAR_16 & VAR_4)) {
   FUNC_4(VAR_10->i.size >> 9, &VAR_14->ap_in_flight);
   FUNC_17(VAR_15, VAR_10);
  }
  if (VAR_10->rq_state & VAR_5)
   FUNC_15(VAR_15, VAR_10);
 }

 if (!(VAR_16 & VAR_0) && (VAR_13 & VAR_0))
  FUNC_5(&VAR_10->completion_ref);



 if ((VAR_16 & VAR_0) && (VAR_12 & VAR_0))
  ++VAR_17;

 if (!(VAR_16 & VAR_2) && (VAR_13 & VAR_2)) {
  FUNC_0(VAR_14, VAR_10->rq_state & VAR_3);
  ++VAR_17;
 }

 if ((VAR_16 & VAR_3) && (VAR_12 & VAR_3)) {
  if (VAR_10->rq_state & VAR_2)
   FUNC_13(&VAR_10->kref, VAR_8);
  else
   ++VAR_17;
  FUNC_14(&VAR_10->req_pending_local);
 }

 if ((VAR_16 & VAR_5) && (VAR_12 & VAR_5)) {
  FUNC_7(VAR_14);
  ++VAR_17;
  VAR_10->acked_jif = VAR_9;
  FUNC_1(VAR_15, VAR_10);
 }

 if ((VAR_16 & VAR_6) && (VAR_12 & VAR_6)) {
  ++VAR_17;
  FUNC_2(VAR_15, VAR_10);
 }

 if (!(VAR_16 & VAR_4) && (VAR_13 & VAR_4)) {
  if (VAR_16 & VAR_7)
   FUNC_6(VAR_10->i.size >> 9, &VAR_14->ap_in_flight);
  if (VAR_16 & VAR_1)
   FUNC_13(&VAR_10->kref, VAR_8);
  VAR_10->net_done_jif = VAR_9;




  FUNC_2(VAR_15, VAR_10);
  FUNC_1(VAR_15, VAR_10);
  FUNC_3(VAR_15, VAR_10);
 }




 if (VAR_10->i.waiting)
  FUNC_18(&VAR_14->misc_wait);

 FUNC_8(VAR_10, VAR_11, VAR_17);
 FUNC_13(&VAR_10->kref, VAR_8);
}
