
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40iw_sc_ceq {int size; size_t ceq_id; scalar_t__ elem_cnt; scalar_t__ first_pm_pbl_idx; int polarity; TYPE_3__* dev; int ceq_ring; int tph_val; int tph_en; scalar_t__ virtual_map; int * pbl_list; int pbl_chunk_size; int ceq_elem_pa; struct i40iw_ceqe* ceqe_base; } ;
struct i40iw_ceqe {int dummy; } ;
struct i40iw_ceq_init_info {scalar_t__ elem_cnt; size_t ceq_id; scalar_t__ first_pm_pbl_idx; int tph_val; int tph_en; int * pbl_list; int pbl_chunk_size; scalar_t__ virtual_map; int ceqe_pa; TYPE_3__* dev; scalar_t__ ceqe_base; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_6__ {struct i40iw_sc_ceq** ceq; TYPE_2__* hmc_info; } ;
struct TYPE_5__ {TYPE_1__* hmc_obj; } ;
struct TYPE_4__ {scalar_t__ cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_ceq *VAR_7,
      struct i40iw_ceq_init_info *VAR_8)
{
 u32 VAR_9;

 if ((VAR_8->elem_cnt < VAR_6) ||
     (VAR_8->elem_cnt > VAR_5))
  return VAR_2;

 if (VAR_8->ceq_id >= VAR_4)
  return VAR_0;

 VAR_9 = VAR_8->dev->hmc_info->hmc_obj[VAR_3].cnt;

 if (VAR_8->virtual_map && (VAR_8->first_pm_pbl_idx >= VAR_9))
  return VAR_1;

 VAR_7->size = sizeof(*VAR_7);
 VAR_7->ceqe_base = (struct i40iw_ceqe *)VAR_8->ceqe_base;
 VAR_7->ceq_id = VAR_8->ceq_id;
 VAR_7->dev = VAR_8->dev;
 VAR_7->elem_cnt = VAR_8->elem_cnt;
 VAR_7->ceq_elem_pa = VAR_8->ceqe_pa;
 VAR_7->virtual_map = VAR_8->virtual_map;

 VAR_7->pbl_chunk_size = (VAR_7->virtual_map ? VAR_8->pbl_chunk_size : 0);
 VAR_7->first_pm_pbl_idx = (VAR_7->virtual_map ? VAR_8->first_pm_pbl_idx : 0);
 VAR_7->pbl_list = (VAR_7->virtual_map ? VAR_8->pbl_list : ((void*)0));

 VAR_7->tph_en = VAR_8->tph_en;
 VAR_7->tph_val = VAR_8->tph_val;
 VAR_7->polarity = 1;
 FUNC_0(VAR_7->ceq_ring, VAR_7->elem_cnt);
 VAR_7->dev->ceq[VAR_8->ceq_id] = VAR_7;

 return 0;
}
