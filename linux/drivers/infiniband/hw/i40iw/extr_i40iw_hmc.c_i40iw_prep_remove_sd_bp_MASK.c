
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {scalar_t__ ref_cnt; } ;
struct TYPE_4__ {TYPE_3__ bp; } ;
struct i40iw_hmc_sd_entry {int valid; TYPE_1__ u; } ;
struct TYPE_5__ {struct i40iw_hmc_sd_entry* sd_entry; } ;
struct i40iw_hmc_info {TYPE_2__ sd_table; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;

enum i40iw_status_code FUNC_2(struct i40iw_hmc_info *VAR_1, u32 VAR_2)
{
 struct i40iw_hmc_sd_entry *VAR_3;

 VAR_3 = &VAR_1->sd_table.sd_entry[VAR_2];
 FUNC_0(&VAR_3->u.bp);
 if (VAR_3->u.bp.ref_cnt)
  return VAR_0;

 FUNC_1(&VAR_1->sd_table);
 VAR_3->valid = 0;

 return 0;
}
