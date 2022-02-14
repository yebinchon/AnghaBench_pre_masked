
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc {TYPE_1__* dcn_soc; } ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;
struct TYPE_2__ {int max_dispclk_vmax0p9; int max_dispclk_vnom0p8; int max_dispclk_vmid0p72; int max_dispclk_vmin0p65; int phyclkv_max0p9; int phyclkv_nom0p8; int phyclkv_mid0p72; int phyclkv_min0p65; int max_dppclk_vmax0p9; int max_dppclk_vnom0p8; int max_dppclk_vmid0p72; int max_dppclk_vmin0p65; unsigned int number_of_channels; int fabric_and_dram_bandwidth_vmax0p9; int fabric_and_dram_bandwidth_vnom0p8; int fabric_and_dram_bandwidth_vmid0p72; int fabric_and_dram_bandwidth_vmin0p65; int dcfclkv_max0p9; int dcfclkv_nom0p8; int dcfclkv_mid0p72; int dcfclkv_min0p65; } ;


 int FUNC_0 () ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static unsigned int FUNC_1(
 const struct dc *VAR_6,
 enum dm_pp_clock_type VAR_7,
 int VAR_8)
{
 int VAR_9 = VAR_3;

 if (VAR_8 == 0)
  return VAR_9;

 switch (VAR_7) {
 case 130:
  if (VAR_8 > VAR_6->dcn_soc->max_dispclk_vmax0p9*1000) {
   VAR_9 = VAR_1;
   FUNC_0();
  } else if (VAR_8 > VAR_6->dcn_soc->max_dispclk_vnom0p8*1000) {
   VAR_9 = VAR_0;
  } else if (VAR_8 > VAR_6->dcn_soc->max_dispclk_vmid0p72*1000) {
   VAR_9 = VAR_4;
  } else if (VAR_8 > VAR_6->dcn_soc->max_dispclk_vmin0p65*1000) {
   VAR_9 = VAR_2;
  } else
   VAR_9 = VAR_3;
  break;
 case 131:
  if (VAR_8 > VAR_6->dcn_soc->phyclkv_max0p9*1000) {
   VAR_9 = VAR_1;
   FUNC_0();
  } else if (VAR_8 > VAR_6->dcn_soc->phyclkv_nom0p8*1000) {
   VAR_9 = VAR_0;
  } else if (VAR_8 > VAR_6->dcn_soc->phyclkv_mid0p72*1000) {
   VAR_9 = VAR_4;
  } else if (VAR_8 > VAR_6->dcn_soc->phyclkv_min0p65*1000) {
   VAR_9 = VAR_2;
  } else
   VAR_9 = VAR_3;
  break;

 case 129:
  if (VAR_8 > VAR_6->dcn_soc->max_dppclk_vmax0p9*1000) {
   VAR_9 = VAR_1;
   FUNC_0();
  } else if (VAR_8 > VAR_6->dcn_soc->max_dppclk_vnom0p8*1000) {
   VAR_9 = VAR_0;
  } else if (VAR_8 > VAR_6->dcn_soc->max_dppclk_vmid0p72*1000) {
   VAR_9 = VAR_4;
  } else if (VAR_8 > VAR_6->dcn_soc->max_dppclk_vmin0p65*1000) {
   VAR_9 = VAR_2;
  } else
   VAR_9 = VAR_3;
  break;

 case 128:
  {
   unsigned VAR_10 = (VAR_5 * VAR_6->dcn_soc->number_of_channels);

   if (VAR_8 > VAR_6->dcn_soc->fabric_and_dram_bandwidth_vmax0p9*1000000/VAR_10) {
    VAR_9 = VAR_1;
    FUNC_0();
   } else if (VAR_8 > VAR_6->dcn_soc->fabric_and_dram_bandwidth_vnom0p8*1000000/VAR_10) {
    VAR_9 = VAR_0;
   } else if (VAR_8 > VAR_6->dcn_soc->fabric_and_dram_bandwidth_vmid0p72*1000000/VAR_10) {
    VAR_9 = VAR_4;
   } else if (VAR_8 > VAR_6->dcn_soc->fabric_and_dram_bandwidth_vmin0p65*1000000/VAR_10) {
    VAR_9 = VAR_2;
   } else
    VAR_9 = VAR_3;
  }
  break;

 case 132:
  if (VAR_8 > VAR_6->dcn_soc->dcfclkv_max0p9*1000) {
   VAR_9 = VAR_1;
   FUNC_0();
  } else if (VAR_8 > VAR_6->dcn_soc->dcfclkv_nom0p8*1000) {
   VAR_9 = VAR_0;
  } else if (VAR_8 > VAR_6->dcn_soc->dcfclkv_mid0p72*1000) {
   VAR_9 = VAR_4;
  } else if (VAR_8 > VAR_6->dcn_soc->dcfclkv_min0p65*1000) {
   VAR_9 = VAR_2;
  } else
   VAR_9 = VAR_3;
  break;

 default:
   break;
 }
 return VAR_9;
}
