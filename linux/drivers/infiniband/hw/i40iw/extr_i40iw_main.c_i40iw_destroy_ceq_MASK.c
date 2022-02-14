
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {int hw; TYPE_1__* ceq_ops; } ;
struct i40iw_device {scalar_t__ reset; struct i40iw_sc_dev sc_dev; } ;
struct i40iw_ceq {int mem; int sc_ceq; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* ceq_destroy ) (int *,int ,int) ;int (* cceq_destroy_done ) (int *) ;} ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i40iw_device *VAR_0,
         struct i40iw_ceq *VAR_1)
{
 enum i40iw_status_code VAR_2;
 struct i40iw_sc_dev *VAR_3 = &VAR_0->sc_dev;

 if (VAR_0->reset)
  goto exit;

 VAR_2 = VAR_3->ceq_ops->ceq_destroy(&VAR_1->sc_ceq, 0, 1);
 if (VAR_2) {
  FUNC_1("ceq destroy command failed %d\n", VAR_2);
  goto exit;
 }

 VAR_2 = VAR_3->ceq_ops->cceq_destroy_done(&VAR_1->sc_ceq);
 if (VAR_2)
  FUNC_1("ceq destroy completion failed %d\n", VAR_2);
exit:
 FUNC_0(VAR_3->hw, &VAR_1->mem);
}
