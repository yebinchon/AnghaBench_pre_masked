
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {scalar_t__ cq_size; int polarity; int * cqe_alloc_reg; int avoid_mem_cflct; scalar_t__ cq_id; int cq_ring; int shadow_area; int cq_base; } ;
struct i40iw_sc_cq {scalar_t__ ceq_id; scalar_t__ first_pm_pbl_idx; TYPE_3__ cq_uk; int pbl_chunk_size; scalar_t__ virtual_map; int pbl_list; int tph_val; int tph_en; int ceq_id_valid; int ceqe_mask; int cq_type; TYPE_4__* dev; int shadow_read_threshold; int shadow_area_pa; int cq_pa; } ;
struct i40iw_ccq_init_info {scalar_t__ num_elem; scalar_t__ ceq_id; scalar_t__ first_pm_pbl_idx; TYPE_4__* dev; int pbl_chunk_size; scalar_t__ virtual_map; int pbl_list; int avoid_mem_cflct; int tph_val; int tph_en; int ceq_id_valid; int ceqe_mask; int shadow_read_threshold; int shadow_area; int shadow_area_pa; int cq_base; int cq_pa; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_8__ {struct i40iw_sc_cq* ccq; TYPE_2__* hmc_info; } ;
struct TYPE_6__ {TYPE_1__* hmc_obj; } ;
struct TYPE_5__ {scalar_t__ cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_cq *VAR_8,
      struct i40iw_ccq_init_info *VAR_9)
{
 u32 VAR_10;

 if (VAR_9->num_elem < VAR_7 || VAR_9->num_elem > VAR_6)
  return VAR_3;

 if (VAR_9->ceq_id > VAR_5)
  return VAR_1;

 VAR_10 = VAR_9->dev->hmc_info->hmc_obj[VAR_4].cnt;

 if (VAR_9->virtual_map && (VAR_9->first_pm_pbl_idx >= VAR_10))
  return VAR_2;

 VAR_8->cq_pa = VAR_9->cq_pa;
 VAR_8->cq_uk.cq_base = VAR_9->cq_base;
 VAR_8->shadow_area_pa = VAR_9->shadow_area_pa;
 VAR_8->cq_uk.shadow_area = VAR_9->shadow_area;
 VAR_8->shadow_read_threshold = VAR_9->shadow_read_threshold;
 VAR_8->dev = VAR_9->dev;
 VAR_8->ceq_id = VAR_9->ceq_id;
 VAR_8->cq_uk.cq_size = VAR_9->num_elem;
 VAR_8->cq_type = VAR_0;
 VAR_8->ceqe_mask = VAR_9->ceqe_mask;
 FUNC_0(VAR_8->cq_uk.cq_ring, VAR_9->num_elem);

 VAR_8->cq_uk.cq_id = 0;
 VAR_8->ceq_id_valid = VAR_9->ceq_id_valid;
 VAR_8->tph_en = VAR_9->tph_en;
 VAR_8->tph_val = VAR_9->tph_val;
 VAR_8->cq_uk.avoid_mem_cflct = VAR_9->avoid_mem_cflct;

 VAR_8->pbl_list = VAR_9->pbl_list;
 VAR_8->virtual_map = VAR_9->virtual_map;
 VAR_8->pbl_chunk_size = VAR_9->pbl_chunk_size;
 VAR_8->first_pm_pbl_idx = VAR_9->first_pm_pbl_idx;
 VAR_8->cq_uk.polarity = 1;


 VAR_8->cq_uk.cqe_alloc_reg = ((void*)0);
 VAR_9->dev->ccq = VAR_8;
 return 0;
}
