
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


struct TYPE_10__ {int page_table_base_addr; int page_table_end_addr; int page_table_start_addr; } ;
struct TYPE_8__ {int agp_base; int agp_bot; int agp_top; int fb_base; int fb_offset; int fb_top; } ;
struct dcn_hubbub_phys_addr_config {int page_table_default_page_addr; TYPE_3__ gart_config; TYPE_1__ system_aperture; } ;
struct dce_hwseq {int dummy; } ;
struct TYPE_11__ {int page_table_base_addr; int page_table_end_addr; int page_table_start_addr; } ;
struct TYPE_9__ {int agp_base; int agp_bot; int agp_top; int fb_base; int fb_offset; int fb_top; } ;
struct dc_phy_addr_space_config {int page_table_default_page_addr; TYPE_4__ gart_config; TYPE_2__ system_aperture; } ;
struct dc {TYPE_6__* res_pool; } ;
struct TYPE_14__ {TYPE_5__* funcs; } ;
struct TYPE_13__ {TYPE_7__* hubbub; } ;
struct TYPE_12__ {int (* init_dchub_sys_ctx ) (TYPE_7__*,struct dcn_hubbub_phys_addr_config*) ;} ;


 int FUNC_0 (TYPE_7__*,struct dcn_hubbub_phys_addr_config*) ;

__attribute__((used)) static int FUNC_1(struct dce_hwseq *VAR_0, struct dc *VAR_1, struct dc_phy_addr_space_config *VAR_2)
{
 struct dcn_hubbub_phys_addr_config VAR_3;

 VAR_3.system_aperture.fb_top = VAR_2->system_aperture.fb_top;
 VAR_3.system_aperture.fb_offset = VAR_2->system_aperture.fb_offset;
 VAR_3.system_aperture.fb_base = VAR_2->system_aperture.fb_base;
 VAR_3.system_aperture.agp_top = VAR_2->system_aperture.agp_top;
 VAR_3.system_aperture.agp_bot = VAR_2->system_aperture.agp_bot;
 VAR_3.system_aperture.agp_base = VAR_2->system_aperture.agp_base;
 VAR_3.gart_config.page_table_start_addr = VAR_2->gart_config.page_table_start_addr;
 VAR_3.gart_config.page_table_end_addr = VAR_2->gart_config.page_table_end_addr;
 VAR_3.gart_config.page_table_base_addr = VAR_2->gart_config.page_table_base_addr;
 VAR_3.page_table_default_page_addr = VAR_2->page_table_default_page_addr;

 return VAR_1->res_pool->hubbub->funcs->init_dchub_sys_ctx(VAR_1->res_pool->hubbub, &VAR_3);
}
