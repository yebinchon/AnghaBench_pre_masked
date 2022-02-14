
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct i40iw_sc_dev {int hw; TYPE_3__* ccq; TYPE_2__* ccq_ops; } ;
struct i40iw_dma_mem {int pa; int va; } ;
struct TYPE_10__ {int size; int pa; int va; } ;
struct TYPE_9__ {void* back_cq; struct i40iw_sc_dev* dev; } ;
struct TYPE_7__ {int size; } ;
struct i40iw_ccq {TYPE_5__ mem_cq; TYPE_3__ sc_cq; TYPE_1__ shadow_area; } ;
struct i40iw_device {struct i40iw_ccq ccq; struct i40iw_sc_dev sc_dev; } ;
struct i40iw_cqe {int dummy; } ;
struct i40iw_cq_shadow_area {int dummy; } ;
struct i40iw_ccq_init_info {int num_elem; int ceqe_mask; int ceq_id_valid; int shadow_read_threshold; int shadow_area_pa; int shadow_area; int cq_pa; int cq_base; struct i40iw_sc_dev* dev; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_8__ {int (* ccq_init ) (TYPE_3__*,struct i40iw_ccq_init_info*) ;int (* ccq_create ) (TYPE_3__*,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_5__*,int,int ) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (struct i40iw_device*,struct i40iw_dma_mem*,int,int ) ;
 int FUNC_3 (struct i40iw_ccq_init_info*,int ,int) ;
 int FUNC_4 (TYPE_3__*,struct i40iw_ccq_init_info*) ;
 int FUNC_5 (TYPE_3__*,int ,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_device *VAR_3)
{
 struct i40iw_sc_dev *VAR_4 = &VAR_3->sc_dev;
 struct i40iw_dma_mem VAR_5;
 enum i40iw_status_code VAR_6;
 struct i40iw_ccq_init_info VAR_7;
 struct i40iw_ccq *VAR_8 = &VAR_3->ccq;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_4->ccq = &VAR_8->sc_cq;
 VAR_4->ccq->dev = VAR_4;
 VAR_7.dev = VAR_4;
 VAR_8->shadow_area.size = sizeof(struct i40iw_cq_shadow_area);
 VAR_8->mem_cq.size = sizeof(struct i40iw_cqe) * VAR_2;
 VAR_6 = FUNC_0(VAR_4->hw, &VAR_8->mem_cq,
     VAR_8->mem_cq.size, VAR_0);
 if (VAR_6)
  goto exit;
 VAR_6 = FUNC_2(VAR_3, &VAR_5, VAR_8->shadow_area.size,
           VAR_1);
 if (VAR_6)
  goto exit;
 VAR_8->sc_cq.back_cq = (void *)VAR_8;

 VAR_7.cq_base = VAR_8->mem_cq.va;
 VAR_7.cq_pa = VAR_8->mem_cq.pa;
 VAR_7.num_elem = VAR_2;
 VAR_7.shadow_area = VAR_5.va;
 VAR_7.shadow_area_pa = VAR_5.pa;
 VAR_7.ceqe_mask = 0;
 VAR_7.ceq_id_valid = 1;
 VAR_7.shadow_read_threshold = 16;
 VAR_6 = VAR_4->ccq_ops->ccq_init(VAR_4->ccq, &VAR_7);
 if (!VAR_6)
  VAR_6 = VAR_4->ccq_ops->ccq_create(VAR_4->ccq, 0, 1, 1);
exit:
 if (VAR_6)
  FUNC_1(VAR_4->hw, &VAR_8->mem_cq);
 return VAR_6;
}
