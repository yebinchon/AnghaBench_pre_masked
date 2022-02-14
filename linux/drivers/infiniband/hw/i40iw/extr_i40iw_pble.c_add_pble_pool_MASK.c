
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct sd_pd_idx {size_t sd_idx; scalar_t__ rel_pd_idx; } ;
struct i40iw_sc_dev {scalar_t__ is_pf; struct i40iw_hmc_info* hmc_info; } ;
struct TYPE_12__ {int pa; } ;
struct TYPE_13__ {TYPE_5__ addr; } ;
struct TYPE_10__ {int pa; } ;
struct TYPE_11__ {TYPE_3__ pd_page_addr; } ;
struct TYPE_14__ {TYPE_6__ bp; TYPE_4__ pd_table; } ;
struct i40iw_hmc_sd_entry {int valid; int entry_type; TYPE_7__ u; } ;
struct TYPE_9__ {int clist; int pool; } ;
struct i40iw_hmc_pble_rsrc {int unallocated_pble; int next_fpm_addr; TYPE_2__ pinfo; int stats_paged_sds; int stats_direct_sds; } ;
struct TYPE_8__ {struct i40iw_hmc_sd_entry* sd_entry; } ;
struct i40iw_hmc_info {int hmc_fn_id; TYPE_1__ sd_table; } ;
struct i40iw_chunk {int fpm_addr; int size; int list; scalar_t__ vaddr; } ;
struct i40iw_add_page_info {struct i40iw_hmc_sd_entry* sd_entry; scalar_t__ pages; struct i40iw_hmc_info* hmc_info; struct i40iw_chunk* chunk; struct sd_pd_idx idx; } ;
typedef int phys_addr_t ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
typedef enum i40iw_sd_entry_type { ____Placeholder_i40iw_sd_entry_type } i40iw_sd_entry_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i40iw_sc_dev*,struct i40iw_hmc_pble_rsrc*,struct i40iw_add_page_info*) ;
 int FUNC_1 (struct i40iw_sc_dev*,struct i40iw_hmc_pble_rsrc*,struct i40iw_add_page_info*) ;
 scalar_t__ FUNC_2 (int ,unsigned long,int ,int,int) ;
 int FUNC_3 (struct i40iw_hmc_pble_rsrc*,struct sd_pd_idx*) ;
 int FUNC_4 (struct i40iw_sc_dev*,int ,char*,scalar_t__,int,...) ;
 int FUNC_5 (struct i40iw_sc_dev*,int ,int ,size_t,int,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct i40iw_chunk*) ;
 struct i40iw_chunk* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_11(struct i40iw_sc_dev *VAR_9,
         struct i40iw_hmc_pble_rsrc *VAR_10)
{
 struct i40iw_hmc_sd_entry *VAR_11;
 struct i40iw_hmc_info *VAR_12;
 struct i40iw_chunk *VAR_13;
 struct i40iw_add_page_info VAR_14;
 struct sd_pd_idx *VAR_15 = &VAR_14.idx;
 enum i40iw_status_code VAR_16 = 0;
 enum i40iw_sd_entry_type VAR_17;
 u64 VAR_18 = 0;
 u32 VAR_19;

 if (VAR_10->unallocated_pble < VAR_8)
  return VAR_3;
 if (VAR_10->next_fpm_addr & 0xfff) {
  FUNC_6("next fpm_addr %llx\n", VAR_10->next_fpm_addr);
  return VAR_2;
 }
 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_0);
 if (!VAR_13)
  return VAR_3;
 VAR_12 = VAR_9->hmc_info;
 VAR_13->fpm_addr = VAR_10->next_fpm_addr;
 FUNC_3(VAR_10, VAR_15);
 VAR_11 = &VAR_12->sd_table.sd_entry[VAR_15->sd_idx];
 VAR_19 = (VAR_15->rel_pd_idx) ? (VAR_4 -
   VAR_15->rel_pd_idx) : VAR_4;
 VAR_19 = FUNC_10(VAR_19, VAR_10->unallocated_pble >> VAR_7);
 VAR_14.chunk = VAR_13;
 VAR_14.hmc_info = VAR_12;
 VAR_14.pages = VAR_19;
 VAR_14.sd_entry = VAR_11;
 if (!VAR_11->valid) {
  VAR_17 = (!VAR_15->rel_pd_idx &&
     (VAR_19 == VAR_4) &&
     VAR_9->is_pf) ? VAR_5 : VAR_6;
 } else {
  VAR_17 = VAR_11->entry_type;
 }
 FUNC_4(VAR_9, VAR_1,
      "pages = %d, unallocated_pble[%u] current_fpm_addr = %llx\n",
      VAR_19, VAR_10->unallocated_pble, VAR_10->next_fpm_addr);
 FUNC_4(VAR_9, VAR_1, "sd_entry_type = %d sd_entry valid = %d\n",
      VAR_17, VAR_11->valid);

 if (VAR_17 == VAR_5)
  VAR_16 = FUNC_1(VAR_9, VAR_10, &VAR_14);
 if (VAR_16)
  VAR_17 = VAR_6;
 else
  VAR_10->stats_direct_sds++;

 if (VAR_17 == VAR_6) {
  VAR_16 = FUNC_0(VAR_9, VAR_10, &VAR_14);
  if (VAR_16)
   goto error;
  else
   VAR_10->stats_paged_sds++;
 }

 if (FUNC_2(VAR_10->pinfo.pool, (unsigned long)VAR_13->vaddr,
         (phys_addr_t)VAR_13->fpm_addr, VAR_13->size, -1)) {
  FUNC_6("could not allocate memory by gen_pool_addr_virt()\n");
  VAR_16 = VAR_3;
  goto error;
 }
 VAR_10->next_fpm_addr += VAR_13->size;
 FUNC_4(VAR_9, VAR_1, "next_fpm_addr = %llx chunk_size[%u] = 0x%x\n",
      VAR_10->next_fpm_addr, VAR_13->size, VAR_13->size);
 VAR_10->unallocated_pble -= (VAR_13->size >> 3);
 FUNC_9(&VAR_13->list, &VAR_10->pinfo.clist);
 VAR_18 = (VAR_17 == VAR_6) ?
   VAR_11->u.pd_table.pd_page_addr.pa : VAR_11->u.bp.addr.pa;
 if (VAR_11->valid)
  return 0;
 if (VAR_9->is_pf) {
  VAR_16 = FUNC_5(VAR_9, VAR_12->hmc_fn_id,
         VAR_18, VAR_15->sd_idx,
         VAR_11->entry_type, 1);
  if (VAR_16) {
   FUNC_6("cqp cmd failed for sd (pbles)\n");
   goto error;
  }
 }

 VAR_11->valid = 1;
 return 0;
 error:
 FUNC_7(VAR_13);
 return VAR_16;
}
