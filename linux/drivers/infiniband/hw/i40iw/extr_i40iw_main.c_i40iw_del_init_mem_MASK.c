
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i40iw_sc_dev {TYPE_2__* hmc_info; } ;
struct i40iw_device {int * hmc_info_mem; int * iw_msixtbl; int * ceqlist; int * mem_resources; int obj_mem; int hw; struct i40iw_sc_dev sc_dev; } ;
struct TYPE_3__ {int * sd_entry; } ;
struct TYPE_4__ {TYPE_1__ sd_table; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct i40iw_device *VAR_0)
{
 struct i40iw_sc_dev *VAR_1 = &VAR_0->sc_dev;

 FUNC_0(&VAR_0->hw, &VAR_0->obj_mem);
 FUNC_1(VAR_1->hmc_info->sd_table.sd_entry);
 VAR_1->hmc_info->sd_table.sd_entry = ((void*)0);
 FUNC_1(VAR_0->mem_resources);
 VAR_0->mem_resources = ((void*)0);
 FUNC_1(VAR_0->ceqlist);
 VAR_0->ceqlist = ((void*)0);
 FUNC_1(VAR_0->iw_msixtbl);
 VAR_0->iw_msixtbl = ((void*)0);
 FUNC_1(VAR_0->hmc_info_mem);
 VAR_0->hmc_info_mem = ((void*)0);
}
