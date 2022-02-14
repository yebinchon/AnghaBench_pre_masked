
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int xtalin_clock_inKhz; int dchub_ref_clock_inKhz; int dccg_ref_clock_inKhz; } ;
struct resource_pool {TYPE_5__ ref_clocks; } ;
struct dc_init_data {int num_virtual_links; int asic_id; } ;
struct dc {TYPE_4__* ctx; } ;
typedef enum dce_version { ____Placeholder_dce_version } dce_version ;
struct TYPE_9__ {TYPE_3__* dc_bios; } ;
struct TYPE_6__ {int crystal_frequency; } ;
struct TYPE_7__ {TYPE_1__ pll_info; } ;
struct TYPE_8__ {TYPE_2__ fw_info; scalar_t__ fw_info_valid; } ;


 int FUNC_0 (int) ;
 struct resource_pool* FUNC_1 (int ,struct dc*) ;
 struct resource_pool* FUNC_2 (int ,struct dc*,int ) ;
 struct resource_pool* FUNC_3 (int ,struct dc*) ;
 struct resource_pool* FUNC_4 (int ,struct dc*) ;
 struct resource_pool* FUNC_5 (int ,struct dc*) ;
 struct resource_pool* FUNC_6 (int ,struct dc*) ;
 struct resource_pool* FUNC_7 (int ,struct dc*) ;
 struct resource_pool* FUNC_8 (struct dc_init_data const*,struct dc*) ;
 struct resource_pool* FUNC_9 (struct dc_init_data const*,struct dc*) ;
 struct resource_pool* FUNC_10 (struct dc_init_data const*,struct dc*) ;

struct resource_pool *FUNC_11(struct dc *VAR_0,
           const struct dc_init_data *VAR_1,
           enum dce_version VAR_2)
{
 struct resource_pool *VAR_3 = ((void*)0);

 switch (VAR_2) {
 case 134:
  VAR_3 = FUNC_5(
    VAR_1->num_virtual_links, VAR_0);
  break;
 case 133:
  VAR_3 = FUNC_6(
    VAR_1->num_virtual_links, VAR_0);
  break;
 case 132:
  VAR_3 = FUNC_7(
    VAR_1->num_virtual_links, VAR_0);
  break;
 case 140:
  VAR_3 = FUNC_1(
    VAR_1->num_virtual_links, VAR_0);
  break;
 case 139:
  VAR_3 = FUNC_2(
    VAR_1->num_virtual_links, VAR_0,
    VAR_1->asic_id);
  break;
 case 138:
 case 137:
  VAR_3 = FUNC_3(
    VAR_1->num_virtual_links, VAR_0);
  break;
 case 136:
 case 135:
  VAR_3 = FUNC_4(
    VAR_1->num_virtual_links, VAR_0);
  break;
 default:
  break;
 }

 if (VAR_3 != ((void*)0)) {
  if (VAR_0->ctx->dc_bios->fw_info_valid) {
   VAR_3->ref_clocks.xtalin_clock_inKhz =
    VAR_0->ctx->dc_bios->fw_info.pll_info.crystal_frequency;






   VAR_3->ref_clocks.dccg_ref_clock_inKhz =
    VAR_3->ref_clocks.xtalin_clock_inKhz;
   VAR_3->ref_clocks.dchub_ref_clock_inKhz =
    VAR_3->ref_clocks.xtalin_clock_inKhz;
  } else
   FUNC_0(0);
 }

 return VAR_3;
}
