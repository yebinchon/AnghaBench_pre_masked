
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sd_pd_idx {int rel_pd_idx; int sd_idx; } ;
struct i40iw_sc_dev {int hw; scalar_t__ is_pf; } ;
struct TYPE_4__ {scalar_t__ va; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {TYPE_2__ bp; } ;
struct i40iw_hmc_sd_entry {TYPE_3__ u; int valid; } ;
struct i40iw_hmc_pble_rsrc {int next_fpm_addr; } ;
struct i40iw_hmc_info {int dummy; } ;
struct i40iw_chunk {int size; int fpm_addr; int * vaddr; int type; } ;
struct i40iw_add_page_info {int pages; struct sd_pd_idx idx; struct i40iw_hmc_sd_entry* sd_entry; struct i40iw_hmc_info* hmc_info; struct i40iw_chunk* chunk; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct i40iw_hmc_info*,int ,int ,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int,int,int *,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_2(struct i40iw_sc_dev *VAR_5,
         struct i40iw_hmc_pble_rsrc *VAR_6,
         struct i40iw_add_page_info *VAR_7)
{
 enum i40iw_status_code VAR_8 = 0;
 struct sd_pd_idx *VAR_9 = &VAR_7->idx;
 struct i40iw_chunk *VAR_10 = VAR_7->chunk;
 struct i40iw_hmc_info *VAR_11 = VAR_7->hmc_info;
 struct i40iw_hmc_sd_entry *VAR_12 = VAR_7->sd_entry;
 u32 VAR_13 = 0;

 if (!VAR_12->valid) {
  if (VAR_5->is_pf) {
   VAR_8 = FUNC_0(VAR_5->hw, VAR_11,
           VAR_7->idx.sd_idx,
           VAR_4,
           VAR_2);
   if (VAR_8)
    return VAR_8;
   VAR_10->type = VAR_1;
  }
 }
 VAR_13 = VAR_9->rel_pd_idx << VAR_3;
 VAR_10->size = VAR_7->pages << VAR_3;
 VAR_10->vaddr = ((u8 *)VAR_12->u.bp.addr.va + VAR_13);
 VAR_10->fpm_addr = VAR_6->next_fpm_addr;
 FUNC_1(VAR_5, VAR_0, "chunk_size[%d] = 0x%x vaddr=%p fpm_addr = %llx\n",
      VAR_10->size, VAR_10->size, VAR_10->vaddr, VAR_10->fpm_addr);
 return 0;
}
