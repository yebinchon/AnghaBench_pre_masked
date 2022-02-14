
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {int hw; int ccq; TYPE_1__* ccq_ops; } ;
struct i40iw_ccq {int mem_cq; } ;
struct i40iw_device {int reset; struct i40iw_ccq ccq; struct i40iw_sc_dev sc_dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* ccq_destroy ) (int ,int ,int) ;} ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i40iw_device *VAR_0)
{
 struct i40iw_sc_dev *VAR_1 = &VAR_0->sc_dev;
 struct i40iw_ccq *VAR_2 = &VAR_0->ccq;
 enum i40iw_status_code VAR_3 = 0;

 if (!VAR_0->reset)
  VAR_3 = VAR_1->ccq_ops->ccq_destroy(VAR_1->ccq, 0, 1);
 if (VAR_3)
  FUNC_1("ccq destroy failed %d\n", VAR_3);
 FUNC_0(VAR_1->hw, &VAR_2->mem_cq);
}
