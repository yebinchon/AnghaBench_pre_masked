
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {TYPE_1__* ceq_ops; } ;
struct i40iw_sc_cq {scalar_t__ cq_type; } ;
struct i40iw_sc_ceq {int dummy; } ;
struct i40iw_device {struct i40iw_sc_dev sc_dev; } ;
struct i40iw_ceq {struct i40iw_sc_ceq sc_ceq; } ;
struct TYPE_2__ {struct i40iw_sc_cq* (* process_ceq ) (struct i40iw_sc_dev*,struct i40iw_sc_ceq*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i40iw_device*,struct i40iw_sc_cq*,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_sc_cq*) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_sc_cq*) ;
 struct i40iw_sc_cq* FUNC_3 (struct i40iw_sc_dev*,struct i40iw_sc_ceq*) ;

void FUNC_4(struct i40iw_device *VAR_4, struct i40iw_ceq *VAR_5)
{
 struct i40iw_sc_dev *VAR_6 = &VAR_4->sc_dev;
 struct i40iw_sc_ceq *VAR_7;
 struct i40iw_sc_cq *VAR_8;
 bool VAR_9 = 1;

 VAR_7 = &VAR_5->sc_ceq;
 do {
  VAR_8 = VAR_6->ceq_ops->process_ceq(VAR_6, VAR_7);
  if (!VAR_8)
   break;

  if (VAR_8->cq_type == VAR_0)
   FUNC_0(VAR_4, VAR_8, VAR_9);
  else if (VAR_8->cq_type == VAR_3)
   FUNC_1(VAR_4, VAR_8);
  else if ((VAR_8->cq_type == VAR_2) ||
    (VAR_8->cq_type == VAR_1))
   FUNC_2(VAR_4, VAR_8);
 } while (1);
}
