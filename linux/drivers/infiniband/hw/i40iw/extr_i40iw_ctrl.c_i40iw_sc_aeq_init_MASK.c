
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40iw_sc_aeqe {int dummy; } ;
struct i40iw_sc_aeq {int size; int polarity; scalar_t__ elem_cnt; scalar_t__ first_pm_pbl_idx; scalar_t__ virtual_map; int pbl_chunk_size; int * pbl_list; int aeq_ring; int aeq_elem_pa; TYPE_3__* dev; struct i40iw_sc_aeqe* aeqe_base; } ;
struct i40iw_aeq_init_info {scalar_t__ elem_cnt; scalar_t__ first_pm_pbl_idx; TYPE_3__* dev; int pbl_chunk_size; int * pbl_list; scalar_t__ virtual_map; int aeq_elem_pa; scalar_t__ aeqe_base; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_6__ {struct i40iw_sc_aeq* aeq; TYPE_2__* hmc_info; } ;
struct TYPE_5__ {TYPE_1__* hmc_obj; } ;
struct TYPE_4__ {scalar_t__ cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static enum i40iw_status_code FUNC_1(struct i40iw_sc_aeq *VAR_5,
      struct i40iw_aeq_init_info *VAR_6)
{
 u32 VAR_7;

 if ((VAR_6->elem_cnt < VAR_4) ||
     (VAR_6->elem_cnt > VAR_3))
  return VAR_1;
 VAR_7 = VAR_6->dev->hmc_info->hmc_obj[VAR_2].cnt;

 if (VAR_6->virtual_map && (VAR_6->first_pm_pbl_idx >= VAR_7))
  return VAR_0;

 VAR_5->size = sizeof(*VAR_5);
 VAR_5->polarity = 1;
 VAR_5->aeqe_base = (struct i40iw_sc_aeqe *)VAR_6->aeqe_base;
 VAR_5->dev = VAR_6->dev;
 VAR_5->elem_cnt = VAR_6->elem_cnt;

 VAR_5->aeq_elem_pa = VAR_6->aeq_elem_pa;
 FUNC_0(VAR_5->aeq_ring, VAR_5->elem_cnt);
 VAR_6->dev->aeq = VAR_5;

 VAR_5->virtual_map = VAR_6->virtual_map;
 VAR_5->pbl_list = (VAR_5->virtual_map ? VAR_6->pbl_list : ((void*)0));
 VAR_5->pbl_chunk_size = (VAR_5->virtual_map ? VAR_6->pbl_chunk_size : 0);
 VAR_5->first_pm_pbl_idx = (VAR_5->virtual_map ? VAR_6->first_pm_pbl_idx : 0);
 VAR_6->dev->aeq = VAR_5;
 return 0;
}
