
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct ib_qp {int device; } ;
struct rvt_qp {int timeout_jiffies; TYPE_1__ s_timer; int s_flags; int s_lock; struct ib_qp ibqp; } ;
struct rvt_dev_info {scalar_t__ busy_jiffies; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct rvt_dev_info* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rvt_qp *VAR_2, u8 VAR_3)
{
 struct ib_qp *VAR_4 = &VAR_2->ibqp;
 struct rvt_dev_info *VAR_5 = FUNC_1(VAR_4->device);

 FUNC_2(&VAR_2->s_lock);
 VAR_2->s_flags |= VAR_0;

 VAR_2->s_timer.expires = VAR_1 + VAR_5->busy_jiffies +
         (VAR_2->timeout_jiffies << VAR_3);
 FUNC_0(&VAR_2->s_timer);
}
