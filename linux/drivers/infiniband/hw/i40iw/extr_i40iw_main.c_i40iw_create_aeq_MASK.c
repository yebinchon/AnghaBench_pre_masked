
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct i40iw_sc_dev {int hw; TYPE_3__* aeq_ops; TYPE_2__* hmc_info; } ;
struct i40iw_sc_aeqe {int dummy; } ;
struct TYPE_9__ {int size; int pa; int va; } ;
struct i40iw_aeq {TYPE_4__ mem; int sc_aeq; } ;
struct i40iw_device {struct i40iw_sc_dev sc_dev; struct i40iw_aeq aeq; } ;
struct i40iw_aeq_init_info {int elem_cnt; struct i40iw_sc_dev* dev; int aeq_elem_pa; int aeqe_base; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_8__ {int (* aeq_init ) (int *,struct i40iw_aeq_init_info*) ;int (* aeq_create ) (int *,int ,int) ;int (* aeq_create_done ) (int *) ;} ;
struct TYPE_7__ {TYPE_1__* hmc_obj; } ;
struct TYPE_6__ {int cnt; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int,int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (struct i40iw_aeq_init_info*,int ,int) ;
 int FUNC_3 (int *,struct i40iw_aeq_init_info*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_device *VAR_3)
{
 enum i40iw_status_code VAR_4;
 struct i40iw_aeq_init_info VAR_5;
 struct i40iw_sc_dev *VAR_6 = &VAR_3->sc_dev;
 struct i40iw_aeq *VAR_7 = &VAR_3->aeq;
 u64 VAR_8 = 0;
 u32 VAR_9;

 VAR_9 = 2 * VAR_3->sc_dev.hmc_info->hmc_obj[VAR_2].cnt +
  VAR_3->sc_dev.hmc_info->hmc_obj[VAR_1].cnt;
 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_7->mem.size = sizeof(struct i40iw_sc_aeqe) * VAR_9;
 VAR_4 = FUNC_0(VAR_6->hw, &VAR_7->mem, VAR_7->mem.size,
     VAR_0);
 if (VAR_4)
  goto exit;

 VAR_5.aeqe_base = VAR_7->mem.va;
 VAR_5.aeq_elem_pa = VAR_7->mem.pa;
 VAR_5.elem_cnt = VAR_9;
 VAR_5.dev = VAR_6;
 VAR_4 = VAR_6->aeq_ops->aeq_init(&VAR_7->sc_aeq, &VAR_5);
 if (VAR_4)
  goto exit;
 VAR_4 = VAR_6->aeq_ops->aeq_create(&VAR_7->sc_aeq, VAR_8, 1);
 if (!VAR_4)
  VAR_4 = VAR_6->aeq_ops->aeq_create_done(&VAR_7->sc_aeq);
exit:
 if (VAR_4)
  FUNC_1(VAR_6->hw, &VAR_7->mem);
 return VAR_4;
}
