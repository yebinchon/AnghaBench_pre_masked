
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40iw_hw {int dummy; } ;
struct TYPE_10__ {size_t sd_pd_index; int addr; } ;
struct TYPE_8__ {scalar_t__ va; } ;
struct TYPE_6__ {int pd_page_addr; TYPE_3__ pd_entry_virt_mem; struct i40iw_hmc_pd_entry* pd_entry; } ;
struct TYPE_7__ {TYPE_5__ bp; TYPE_1__ pd_table; } ;
struct i40iw_hmc_sd_entry {int entry_type; TYPE_2__ u; int valid; } ;
struct i40iw_hmc_pd_entry {int dummy; } ;
struct TYPE_9__ {struct i40iw_hmc_sd_entry* sd_entry; } ;
struct i40iw_hmc_info {TYPE_4__ sd_table; } ;
struct i40iw_dma_mem {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
typedef enum i40iw_sd_entry_type { ____Placeholder_i40iw_sd_entry_type } i40iw_sd_entry_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct i40iw_hw*,struct i40iw_dma_mem*,int ,int ) ;
 int FUNC_3 (struct i40iw_hw*,TYPE_3__*,int) ;
 int FUNC_4 (struct i40iw_hw*,struct i40iw_dma_mem*) ;
 int FUNC_5 (int *,struct i40iw_dma_mem*,int) ;

enum i40iw_status_code FUNC_6(struct i40iw_hw *VAR_4,
      struct i40iw_hmc_info *VAR_5,
      u32 VAR_6,
      enum i40iw_sd_entry_type VAR_7,
      u64 VAR_8)
{
 enum i40iw_status_code VAR_9 = 0;
 struct i40iw_hmc_sd_entry *VAR_10;
 bool VAR_11 = 0;
 struct i40iw_dma_mem VAR_12;
 u64 VAR_13;

 VAR_10 = &VAR_5->sd_table.sd_entry[VAR_6];
 if (!VAR_10->valid) {
  if (VAR_7 == VAR_3)
   VAR_13 = VAR_0;
  else
   VAR_13 = VAR_8;


  VAR_9 = FUNC_2(VAR_4, &VAR_12, VAR_13,
        VAR_1);
  if (VAR_9)
   goto exit;
  VAR_11 = 1;
  if (VAR_7 == VAR_3) {
   VAR_9 = FUNC_3(VAR_4,
          &VAR_10->u.pd_table.pd_entry_virt_mem,
          sizeof(struct i40iw_hmc_pd_entry) * 512);
   if (VAR_9)
    goto exit;
   VAR_10->u.pd_table.pd_entry = (struct i40iw_hmc_pd_entry *)
        VAR_10->u.pd_table.pd_entry_virt_mem.va;

   FUNC_5(&VAR_10->u.pd_table.pd_page_addr, &VAR_12, sizeof(struct i40iw_dma_mem));
  } else {
   FUNC_5(&VAR_10->u.bp.addr, &VAR_12, sizeof(struct i40iw_dma_mem));
   VAR_10->u.bp.sd_pd_index = VAR_6;
  }

  VAR_5->sd_table.sd_entry[VAR_6].entry_type = VAR_7;

  FUNC_1(&VAR_5->sd_table);
 }
 if (VAR_10->entry_type == VAR_2)
  FUNC_0(&VAR_10->u.bp);
exit:
 if (VAR_9)
  if (VAR_11)
   FUNC_4(VAR_4, &VAR_12);

 return VAR_9;
}
