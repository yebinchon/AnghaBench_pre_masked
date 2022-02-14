
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct i40iw_sc_dev {int hw; int back_dev; int is_pf; } ;
struct i40iw_manage_vf_pble_info {size_t first_pd_index; int inv_pd_ent; int sd_index; int pd_pl_pba; int pd_entry_cnt; } ;
struct TYPE_5__ {int pa; } ;
struct TYPE_6__ {TYPE_1__ pd_page_addr; struct i40iw_hmc_pd_entry* pd_entry; } ;
struct TYPE_7__ {TYPE_2__ pd_table; } ;
struct i40iw_hmc_sd_entry {TYPE_3__ u; } ;
struct i40iw_hmc_pd_entry {int valid; } ;
struct i40iw_hmc_pble_rsrc {int next_fpm_addr; } ;
struct i40iw_hmc_info {int dummy; } ;
struct i40iw_dma_mem {void* va; int size; int pa; } ;
struct i40iw_chunk {int fpm_addr; int * dmaaddrs; int * vaddr; } ;
struct TYPE_8__ {size_t rel_pd_idx; size_t pd_idx; int sd_idx; } ;
struct i40iw_add_page_info {int pages; TYPE_4__ idx; struct i40iw_chunk* chunk; struct i40iw_hmc_info* hmc_info; struct i40iw_hmc_sd_entry* sd_entry; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i40iw_hmc_pble_rsrc*,int ) ;
 int FUNC_1 (int ,struct i40iw_hmc_info*,int ,struct i40iw_dma_mem*) ;
 int FUNC_2 (int ,struct i40iw_hmc_info*,int ,int ,int ) ;
 int FUNC_3 (int ,struct i40iw_chunk*) ;
 int FUNC_4 (int ,struct i40iw_chunk*,int) ;
 int FUNC_5 (int ,struct i40iw_manage_vf_pble_info*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct i40iw_sc_dev*,int ,int ,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_8(struct i40iw_sc_dev *VAR_7,
        struct i40iw_hmc_pble_rsrc *VAR_8,
        struct i40iw_add_page_info *VAR_9)
{
 u8 *VAR_10;
 struct i40iw_dma_mem VAR_11;
 struct i40iw_hmc_pd_entry *VAR_12;
 struct i40iw_hmc_sd_entry *VAR_13 = VAR_9->sd_entry;
 struct i40iw_hmc_info *VAR_14 = VAR_9->hmc_info;
 struct i40iw_chunk *VAR_15 = VAR_9->chunk;
 struct i40iw_manage_vf_pble_info VAR_16;
 enum i40iw_status_code VAR_17 = 0;
 u32 VAR_18 = VAR_9->idx.rel_pd_idx;
 u32 VAR_19 = VAR_9->idx.pd_idx;
 u32 VAR_20;

 VAR_17 = FUNC_4(VAR_7->hw, VAR_15, VAR_9->pages);
 if (VAR_17)
  return VAR_0;
 VAR_17 = FUNC_2(VAR_7->hw, VAR_14,
       VAR_9->idx.sd_idx, VAR_3,
       VAR_1);
 if (VAR_17)
  goto error;
 if (!VAR_7->is_pf) {
  VAR_17 = FUNC_7(VAR_7, VAR_2,
           FUNC_0(VAR_8,
        VAR_8->next_fpm_addr),
           (VAR_9->pages << VAR_5));
  if (VAR_17) {
   FUNC_6("allocate PBLEs in the PF.  Error %i\n", VAR_17);
   goto error;
  }
 }
 VAR_10 = VAR_15->vaddr;
 for (VAR_20 = 0; VAR_20 < VAR_9->pages; VAR_20++) {
  VAR_11.pa = VAR_15->dmaaddrs[VAR_20];
  VAR_11.size = VAR_4;
  VAR_11.va = (void *)(VAR_10);
  VAR_12 = &VAR_13->u.pd_table.pd_entry[VAR_18++];
  if (!VAR_12->valid) {
   VAR_17 = FUNC_1(VAR_7->hw, VAR_14, VAR_19++, &VAR_11);
   if (VAR_17)
    goto error;
   VAR_10 += VAR_4;
  } else {
   FUNC_6("pd entry is valid expecting to be invalid\n");
  }
 }
 if (!VAR_7->is_pf) {
  VAR_16.first_pd_index = VAR_9->idx.rel_pd_idx;
  VAR_16.inv_pd_ent = 0;
  VAR_16.pd_entry_cnt = VAR_6;
  VAR_16.pd_pl_pba = VAR_13->u.pd_table.pd_page_addr.pa;
  VAR_16.sd_index = VAR_9->idx.sd_idx;
  VAR_17 = FUNC_5(VAR_7->back_dev,
          &VAR_16, 1);
  if (VAR_17) {
   FUNC_6("CQP manage VF PBLE BP failed.  %i\n", VAR_17);
   goto error;
  }
 }
 VAR_15->fpm_addr = VAR_8->next_fpm_addr;
 return 0;
error:
 FUNC_3(VAR_7->hw, VAR_15);
 return VAR_17;
}
