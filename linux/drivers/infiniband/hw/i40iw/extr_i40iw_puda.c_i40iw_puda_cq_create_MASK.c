
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40iw_sc_dev {int hw; scalar_t__ ceq_valid; TYPE_1__* iw_priv_cq_ops; } ;
struct i40iw_sc_cq {int vsi; } ;
struct i40iw_dma_mem {scalar_t__ va; scalar_t__ pa; } ;
struct i40iw_puda_rsrc {int cq_size; scalar_t__ type; struct i40iw_dma_mem cqmem; struct i40iw_sc_dev* dev; int cq_id; int vsi; struct i40iw_sc_cq cq; } ;
struct i40iw_cqe {int dummy; } ;
struct i40iw_cq_uk_init_info {int cq_size; int cq_id; int * shadow_area; scalar_t__ cq_base; } ;
struct i40iw_cq_shadow_area {int dummy; } ;
struct i40iw_cq_init_info {int shadow_read_threshold; int ceq_id_valid; int ceqe_mask; scalar_t__ shadow_area_pa; scalar_t__ cq_base_pa; int type; struct i40iw_sc_dev* dev; struct i40iw_cq_uk_init_info cq_uk_init_info; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* cq_init ) (struct i40iw_sc_cq*,struct i40iw_cq_init_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct i40iw_dma_mem*,int,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,struct i40iw_sc_cq*) ;
 int FUNC_2 (int ,struct i40iw_dma_mem*) ;
 int FUNC_3 (struct i40iw_sc_dev*,struct i40iw_sc_cq*) ;
 int FUNC_4 (struct i40iw_cq_init_info*,int ,int) ;
 int FUNC_5 (struct i40iw_sc_cq*,struct i40iw_cq_init_info*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_puda_rsrc *VAR_4)
{
 struct i40iw_sc_dev *VAR_5 = VAR_4->dev;
 struct i40iw_sc_cq *VAR_6 = &VAR_4->cq;
 enum i40iw_status_code VAR_7 = 0;
 u32 VAR_8, VAR_9;
 struct i40iw_dma_mem *VAR_10;
 struct i40iw_cq_init_info VAR_11;
 struct i40iw_cq_uk_init_info *VAR_12 = &VAR_11.cq_uk_init_info;

 VAR_6->vsi = VAR_4->vsi;
 VAR_9 = VAR_4->cq_size * (sizeof(struct i40iw_cqe));
 VAR_8 = VAR_9 + sizeof(struct i40iw_cq_shadow_area);
 VAR_7 = FUNC_0(VAR_5->hw, &VAR_4->cqmem, VAR_8,
         VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_10 = &VAR_4->cqmem;
 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.dev = VAR_5;
 VAR_11.type = (VAR_4->type == VAR_3) ?
    VAR_2 : VAR_1;
 VAR_11.shadow_read_threshold = VAR_4->cq_size >> 2;
 VAR_11.ceq_id_valid = 1;
 VAR_11.cq_base_pa = VAR_10->pa;
 VAR_11.shadow_area_pa = VAR_10->pa + VAR_9;
 VAR_12->cq_base = VAR_10->va;
 VAR_12->shadow_area = (u64 *)((u8 *)VAR_10->va + VAR_9);
 VAR_12->cq_size = VAR_4->cq_size;
 VAR_12->cq_id = VAR_4->cq_id;
 VAR_11.ceqe_mask = 1;
 VAR_11.ceq_id_valid = 1;
 VAR_7 = VAR_5->iw_priv_cq_ops->cq_init(VAR_6, &VAR_11);
 if (VAR_7)
  goto error;
 if (VAR_4->dev->ceq_valid)
  VAR_7 = FUNC_1(VAR_5, VAR_6);
 else
  VAR_7 = FUNC_3(VAR_5, VAR_6);
error:
 if (VAR_7)
  FUNC_2(VAR_5->hw, &VAR_4->cqmem);
 return VAR_7;
}
