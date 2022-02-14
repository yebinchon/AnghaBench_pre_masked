
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40iw_hw {int dummy; } ;
struct TYPE_7__ {scalar_t__ va; } ;
struct i40iw_hmc_pd_table {int pd_entry_virt_mem; int ref_cnt; TYPE_3__ pd_page_addr; struct i40iw_hmc_pd_entry* pd_entry; } ;
struct TYPE_5__ {struct i40iw_hmc_pd_table pd_table; } ;
struct i40iw_hmc_sd_entry {scalar_t__ entry_type; TYPE_1__ u; } ;
struct i40iw_dma_mem {int va; } ;
struct TYPE_8__ {struct i40iw_dma_mem addr; scalar_t__ ref_cnt; } ;
struct i40iw_hmc_pd_entry {int valid; TYPE_4__ bp; int rsrc_pg; } ;
struct TYPE_6__ {size_t sd_cnt; struct i40iw_hmc_sd_entry* sd_entry; } ;
struct i40iw_hmc_info {int hmc_fn_id; TYPE_2__ sd_table; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct i40iw_hmc_pd_table*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (struct i40iw_hw*,size_t,size_t) ;
 int FUNC_3 (struct i40iw_hw*,size_t,size_t,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct i40iw_hw*,struct i40iw_dma_mem*) ;
 int FUNC_5 (struct i40iw_hw*,int *) ;
 int FUNC_6 (int *,int ,int) ;

enum i40iw_status_code FUNC_7(struct i40iw_hw *VAR_5,
       struct i40iw_hmc_info *VAR_6,
       u32 VAR_7,
       bool VAR_8)
{
 struct i40iw_hmc_pd_entry *VAR_9;
 struct i40iw_hmc_pd_table *VAR_10;
 struct i40iw_hmc_sd_entry *VAR_11;
 u32 VAR_12, VAR_13;
 struct i40iw_dma_mem *VAR_14;
 u64 *VAR_15;

 VAR_12 = VAR_7 / VAR_3;
 VAR_13 = VAR_7 % VAR_3;
 if (VAR_12 >= VAR_6->sd_table.sd_cnt)
  return VAR_0;

 VAR_11 = &VAR_6->sd_table.sd_entry[VAR_12];
 if (VAR_11->entry_type != VAR_4)
  return VAR_1;

 VAR_10 = &VAR_6->sd_table.sd_entry[VAR_12].u.pd_table;
 VAR_9 = &VAR_10->pd_entry[VAR_13];
 FUNC_0(&VAR_9->bp);
 if (VAR_9->bp.ref_cnt)
  return 0;

 VAR_9->valid = 0;
 FUNC_1(VAR_10);
 VAR_15 = (u64 *)VAR_10->pd_page_addr.va;
 VAR_15 += VAR_13;
 FUNC_6(VAR_15, 0, sizeof(u64));
 if (VAR_8)
  FUNC_2(VAR_5, VAR_12, VAR_7);
 else
  FUNC_3(VAR_5, VAR_12, VAR_7,
        VAR_6->hmc_fn_id);

 if (!VAR_9->rsrc_pg) {
  VAR_14 = &VAR_9->bp.addr;
  if (!VAR_14 || !VAR_14->va)
   return VAR_2;
  FUNC_4(VAR_5, VAR_14);
 }
 if (!VAR_10->ref_cnt)
  FUNC_5(VAR_5, &VAR_10->pd_entry_virt_mem);

 return 0;
}
