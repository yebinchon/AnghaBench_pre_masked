
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40iw_update_sds_info {int cnt; int entry; int hmc_fn_id; } ;
struct i40iw_sc_dev {TYPE_1__* cqp; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
typedef enum i40iw_sd_entry_type { ____Placeholder_i40iw_sd_entry_type } i40iw_sd_entry_type ;
struct TYPE_2__ {int (* process_cqp_sds ) (struct i40iw_sc_dev*,struct i40iw_update_sds_info*) ;} ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct i40iw_sc_dev*,struct i40iw_update_sds_info*) ;

enum i40iw_status_code FUNC_3(struct i40iw_sc_dev *VAR_0,
     u8 VAR_1,
     u64 VAR_2, u32 VAR_3,
     enum i40iw_sd_entry_type VAR_4,
     bool VAR_5)
{
 struct i40iw_update_sds_info VAR_6;

 VAR_6.cnt = 1;
 VAR_6.hmc_fn_id = VAR_1;
 if (VAR_5)
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_6.entry);
 else
  FUNC_0(VAR_3, VAR_4, VAR_6.entry);

 return VAR_0->cqp->process_cqp_sds(VAR_0, &VAR_6);
}
