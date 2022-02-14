
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_3__* vdd_dep_on_fclk; } ;
struct smu10_hwmgr {TYPE_2__ clock_vol_info; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_6__ {int count; TYPE_1__* entries; } ;
struct TYPE_4__ {int clk; } ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(struct pp_hwmgr *VAR_1, bool VAR_2)
{
 struct smu10_hwmgr *VAR_3;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 VAR_3 = (struct smu10_hwmgr *)(VAR_1->backend);

 if (VAR_2)
  return VAR_3->clock_vol_info.vdd_dep_on_fclk->entries[0].clk;
 else
  return VAR_3->clock_vol_info.vdd_dep_on_fclk->entries[
   VAR_3->clock_vol_info.vdd_dep_on_fclk->count - 1].clk;
}
