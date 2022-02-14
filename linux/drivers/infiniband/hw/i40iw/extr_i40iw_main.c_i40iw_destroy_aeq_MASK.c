
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {int hw; TYPE_1__* aeq_ops; } ;
struct i40iw_aeq {int mem; int sc_aeq; } ;
struct i40iw_device {scalar_t__ reset; int iw_msixtbl; int msix_shared; struct i40iw_aeq aeq; struct i40iw_sc_dev sc_dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* aeq_destroy_done ) (int *) ;int (* aeq_destroy ) (int *,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct i40iw_sc_dev*,int ,void*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct i40iw_device *VAR_1)
{
 enum i40iw_status_code VAR_2 = VAR_0;
 struct i40iw_sc_dev *VAR_3 = &VAR_1->sc_dev;
 struct i40iw_aeq *VAR_4 = &VAR_1->aeq;

 if (!VAR_1->msix_shared)
  FUNC_0(VAR_3, VAR_1->iw_msixtbl, (void *)VAR_1);
 if (VAR_1->reset)
  goto exit;

 if (!VAR_3->aeq_ops->aeq_destroy(&VAR_4->sc_aeq, 0, 1))
  VAR_2 = VAR_3->aeq_ops->aeq_destroy_done(&VAR_4->sc_aeq);
 if (VAR_2)
  FUNC_2("destroy aeq failed %d\n", VAR_2);

exit:
 FUNC_1(VAR_3->hw, &VAR_4->mem);
}
