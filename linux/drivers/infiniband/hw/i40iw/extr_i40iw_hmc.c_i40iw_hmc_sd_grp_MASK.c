
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
typedef size_t u32 ;
struct i40iw_update_sds_info {size_t cnt; int * entry; int hmc_fn_id; } ;
struct i40iw_sc_dev {TYPE_7__* cqp; } ;
struct TYPE_11__ {int pa; } ;
struct TYPE_12__ {TYPE_4__ addr; } ;
struct TYPE_9__ {int pa; } ;
struct TYPE_10__ {TYPE_2__ pd_page_addr; } ;
struct TYPE_13__ {TYPE_5__ bp; TYPE_3__ pd_table; } ;
struct i40iw_hmc_sd_entry {scalar_t__ entry_type; TYPE_6__ u; scalar_t__ valid; } ;
struct TYPE_8__ {struct i40iw_hmc_sd_entry* sd_entry; } ;
struct i40iw_hmc_info {TYPE_1__ sd_table; int hmc_fn_id; } ;
typedef int sdinfo ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_14__ {int (* process_cqp_sds ) (struct i40iw_sc_dev*,struct i40iw_update_sds_info*) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t,scalar_t__,int *) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int) ;
 int FUNC_2 (int ,size_t,scalar_t__,int *) ;
 int FUNC_3 (struct i40iw_update_sds_info*,int ,int) ;
 int FUNC_4 (struct i40iw_sc_dev*,struct i40iw_update_sds_info*) ;
 int FUNC_5 (struct i40iw_sc_dev*,struct i40iw_update_sds_info*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_sc_dev *VAR_3,
            struct i40iw_hmc_info *VAR_4,
            u32 VAR_5,
            u32 VAR_6,
            bool VAR_7)
{
 struct i40iw_hmc_sd_entry *VAR_8;
 struct i40iw_update_sds_info VAR_9;
 u64 VAR_10;
 u32 VAR_11;
 enum i40iw_status_code VAR_12 = 0;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.hmc_fn_id = VAR_4->hmc_fn_id;
 for (VAR_11 = VAR_5; VAR_11 < VAR_5 + VAR_6; VAR_11++) {
  VAR_8 = &VAR_4->sd_table.sd_entry[VAR_11];
  if (!VAR_8 ||
      (!VAR_8->valid && VAR_7) ||
      (VAR_8->valid && !VAR_7))
   continue;
  if (VAR_7) {
   VAR_10 = (VAR_8->entry_type == VAR_2) ?
       VAR_8->u.pd_table.pd_page_addr.pa :
       VAR_8->u.bp.addr.pa;
   FUNC_2(VAR_10, VAR_11, VAR_8->entry_type,
        &VAR_9.entry[VAR_9.cnt]);
  } else {
   FUNC_0(VAR_11, VAR_8->entry_type,
        &VAR_9.entry[VAR_9.cnt]);
  }
  VAR_9.cnt++;
  if (VAR_9.cnt == VAR_1) {
   VAR_12 = VAR_3->cqp->process_cqp_sds(VAR_3, &VAR_9);
   if (VAR_12) {
    FUNC_1(VAR_3, VAR_0,
         "i40iw_hmc_sd_grp: sd_programming failed err=%d\n",
         VAR_12);
    return VAR_12;
   }
   VAR_9.cnt = 0;
  }
 }
 if (VAR_9.cnt)
  VAR_12 = VAR_3->cqp->process_cqp_sds(VAR_3, &VAR_9);

 return VAR_12;
}
