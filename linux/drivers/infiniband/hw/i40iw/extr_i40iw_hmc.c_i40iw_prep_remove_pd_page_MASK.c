
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {scalar_t__ ref_cnt; } ;
struct TYPE_5__ {TYPE_1__ pd_table; } ;
struct i40iw_hmc_sd_entry {int valid; TYPE_2__ u; } ;
struct TYPE_6__ {struct i40iw_hmc_sd_entry* sd_entry; } ;
struct i40iw_hmc_info {TYPE_3__ sd_table; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;

enum i40iw_status_code FUNC_1(struct i40iw_hmc_info *VAR_1,
       u32 VAR_2)
{
 struct i40iw_hmc_sd_entry *VAR_3;

 VAR_3 = &VAR_1->sd_table.sd_entry[VAR_2];

 if (VAR_3->u.pd_table.ref_cnt)
  return VAR_0;

 VAR_3->valid = 0;
 FUNC_0(&VAR_1->sd_table);

 return 0;
}
