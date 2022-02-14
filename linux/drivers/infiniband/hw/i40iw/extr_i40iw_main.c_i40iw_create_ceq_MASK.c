
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef uintptr_t u64 ;
typedef void* u32 ;
struct i40iw_sc_dev {int hw; TYPE_4__* ceq_ops; TYPE_2__* hmc_info; } ;
struct TYPE_11__ {int sc_cqp; } ;
struct i40iw_device {TYPE_3__ cqp; struct i40iw_sc_dev sc_dev; } ;
struct i40iw_ceqe {int dummy; } ;
struct i40iw_ceq_init_info {int elem_cnt; struct i40iw_sc_dev* dev; int ceqe_pa; int ceqe_base; void* ceq_id; } ;
struct TYPE_14__ {int size; int pa; int va; } ;
struct TYPE_13__ {void* ceq_id; } ;
struct i40iw_ceq {TYPE_7__ mem; TYPE_5__ sc_ceq; struct i40iw_device* iwdev; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_12__ {int (* ceq_init ) (TYPE_5__*,struct i40iw_ceq_init_info*) ;int (* cceq_create ) (TYPE_5__*,uintptr_t) ;} ;
struct TYPE_10__ {TYPE_1__* hmc_obj; } ;
struct TYPE_9__ {int cnt; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,TYPE_7__*,int,int ) ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int FUNC_2 (struct i40iw_ceq_init_info*,int ,int) ;
 int FUNC_3 (TYPE_5__*,struct i40iw_ceq_init_info*) ;
 int FUNC_4 (TYPE_5__*,uintptr_t) ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(struct i40iw_device *VAR_2,
            struct i40iw_ceq *VAR_3,
            u32 VAR_4)
{
 enum i40iw_status_code VAR_5;
 struct i40iw_ceq_init_info VAR_6;
 struct i40iw_sc_dev *VAR_7 = &VAR_2->sc_dev;
 u64 VAR_8;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ceq_id = VAR_4;
 VAR_3->iwdev = VAR_2;
 VAR_3->mem.size = sizeof(struct i40iw_ceqe) *
  VAR_2->sc_dev.hmc_info->hmc_obj[VAR_1].cnt;
 VAR_5 = FUNC_0(VAR_7->hw, &VAR_3->mem, VAR_3->mem.size,
     VAR_0);
 if (VAR_5)
  goto exit;
 VAR_6.ceq_id = VAR_4;
 VAR_6.ceqe_base = VAR_3->mem.va;
 VAR_6.ceqe_pa = VAR_3->mem.pa;

 VAR_6.elem_cnt = VAR_2->sc_dev.hmc_info->hmc_obj[VAR_1].cnt;
 VAR_3->sc_ceq.ceq_id = VAR_4;
 VAR_6.dev = VAR_7;
 VAR_8 = (uintptr_t)&VAR_2->cqp.sc_cqp;
 VAR_5 = VAR_7->ceq_ops->ceq_init(&VAR_3->sc_ceq, &VAR_6);
 if (!VAR_5)
  VAR_5 = VAR_7->ceq_ops->cceq_create(&VAR_3->sc_ceq, VAR_8);

exit:
 if (VAR_5)
  FUNC_1(VAR_7->hw, &VAR_3->mem);
 return VAR_5;
}
