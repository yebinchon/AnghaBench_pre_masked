
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_dev {int dummy; } ;
struct qedr_cq {scalar_t__ cq_type; int cq_lock; int arm_flags; scalar_t__ cq_cons; int icid; scalar_t__ destroyed; } ;
struct ib_cq {int device; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;


 int FUNC_0 (struct qedr_dev*,char*,struct qedr_cq*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct qedr_cq*,scalar_t__,int ) ;
 struct qedr_cq* FUNC_2 (struct ib_cq*) ;
 struct qedr_dev* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct ib_cq *VAR_6, enum ib_cq_notify_flags VAR_7)
{
 struct qedr_cq *VAR_8 = FUNC_2(VAR_6);
 unsigned long VAR_9;
 struct qedr_dev *VAR_10;

 VAR_10 = FUNC_3(VAR_6->device);

 if (VAR_8->destroyed) {
  FUNC_0(VAR_10,
         "warning: arm was invoked after destroy for cq %p (icid=%d)\n",
         VAR_8, VAR_8->icid);
  return -VAR_2;
 }


 if (VAR_8->cq_type == VAR_5)
  return 0;

 FUNC_4(&VAR_8->cq_lock, VAR_9);

 VAR_8->arm_flags = 0;

 if (VAR_7 & VAR_4)
  VAR_8->arm_flags |= VAR_1;

 if (VAR_7 & VAR_3)
  VAR_8->arm_flags |= VAR_0;

 FUNC_1(VAR_8, VAR_8->cq_cons - 1, VAR_8->arm_flags);

 FUNC_5(&VAR_8->cq_lock, VAR_9);

 return 0;
}
