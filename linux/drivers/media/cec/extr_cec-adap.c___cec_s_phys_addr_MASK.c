
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ num_log_addrs; } ;
struct TYPE_5__ {int lock; int fhs; scalar_t__ unregistered; } ;
struct cec_adapter {scalar_t__ phys_addr; int transmit_in_progress; int last_initiator; TYPE_3__ log_addrs; TYPE_2__ devnode; TYPE_1__* ops; scalar_t__ needs_hpd; scalar_t__ monitor_all_cnt; int kthread_waitq; } ;
struct TYPE_4__ {scalar_t__ (* adap_enable ) (struct cec_adapter*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct cec_adapter*,int ,int) ;
 int FUNC_2 (struct cec_adapter*) ;
 int FUNC_3 (struct cec_adapter*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct cec_adapter*) ;
 int FUNC_6 (int,char*,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct cec_adapter*,int) ;
 scalar_t__ FUNC_11 (struct cec_adapter*,int) ;
 scalar_t__ FUNC_12 (struct cec_adapter*,int) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct cec_adapter *VAR_2, u16 VAR_3, bool VAR_4)
{
 if (VAR_3 == VAR_2->phys_addr)
  return;
 if (VAR_3 != VAR_0 && VAR_2->devnode.unregistered)
  return;

 FUNC_6(1, "new physical address %x.%x.%x.%x\n",
  FUNC_4(VAR_3));
 if (VAR_3 == VAR_0 ||
     VAR_2->phys_addr != VAR_0) {
  VAR_2->phys_addr = VAR_0;
  FUNC_5(VAR_2);
  FUNC_2(VAR_2);

  if (VAR_2->monitor_all_cnt)
   FUNC_0(FUNC_1(VAR_2, VAR_1, 0));
  FUNC_8(&VAR_2->devnode.lock);
  if (VAR_2->needs_hpd || FUNC_7(&VAR_2->devnode.fhs)) {
   FUNC_0(VAR_2->ops->adap_enable(VAR_2, 0));
   VAR_2->transmit_in_progress = 0;
   FUNC_13(&VAR_2->kthread_waitq);
  }
  FUNC_9(&VAR_2->devnode.lock);
  if (VAR_3 == VAR_0)
   return;
 }

 FUNC_8(&VAR_2->devnode.lock);
 VAR_2->last_initiator = 0xff;
 VAR_2->transmit_in_progress = 0;

 if ((VAR_2->needs_hpd || FUNC_7(&VAR_2->devnode.fhs)) &&
     VAR_2->ops->adap_enable(VAR_2, 1)) {
  FUNC_9(&VAR_2->devnode.lock);
  return;
 }

 if (VAR_2->monitor_all_cnt &&
     FUNC_1(VAR_2, VAR_1, 1)) {
  if (VAR_2->needs_hpd || FUNC_7(&VAR_2->devnode.fhs))
   FUNC_0(VAR_2->ops->adap_enable(VAR_2, 0));
  FUNC_9(&VAR_2->devnode.lock);
  return;
 }
 FUNC_9(&VAR_2->devnode.lock);

 VAR_2->phys_addr = VAR_3;
 FUNC_5(VAR_2);
 if (VAR_2->log_addrs.num_log_addrs)
  FUNC_3(VAR_2, VAR_4);
}
