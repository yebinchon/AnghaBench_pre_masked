
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hubbub {int dummy; } ;
struct dcn_vmid_page_table_config {int page_table_start_addr; int page_table_end_addr; scalar_t__ block_size; scalar_t__ depth; int page_table_base_addr; } ;
struct TYPE_4__ {int page_table_start_addr; int page_table_end_addr; int page_table_base_addr; } ;
struct TYPE_3__ {int fb_base; int fb_top; int fb_offset; int agp_bot; int agp_top; int agp_base; } ;
struct dcn_hubbub_phys_addr_config {int page_table_default_page_addr; TYPE_2__ gart_config; TYPE_1__ system_aperture; } ;
struct dcn20_hubbub {int * vmid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct dcn20_hubbub* FUNC_1 (struct hubbub*) ;
 int FUNC_2 (int *,struct dcn_vmid_page_table_config*) ;

int FUNC_3(struct hubbub *VAR_15,
  struct dcn_hubbub_phys_addr_config *VAR_16)
{
 struct dcn20_hubbub *VAR_17 = FUNC_1(VAR_15);
 struct dcn_vmid_page_table_config VAR_18;

 FUNC_0(VAR_6, 0,
   VAR_11, VAR_16->system_aperture.fb_base >> 24);
 FUNC_0(VAR_7, 0,
   VAR_13, VAR_16->system_aperture.fb_top >> 24);
 FUNC_0(VAR_8, 0,
   VAR_12, VAR_16->system_aperture.fb_offset >> 24);
 FUNC_0(VAR_4, 0,
   VAR_1, VAR_16->system_aperture.agp_bot >> 24);
 FUNC_0(VAR_5, 0,
   VAR_2, VAR_16->system_aperture.agp_top >> 24);
 FUNC_0(VAR_3, 0,
   VAR_0, VAR_16->system_aperture.agp_base >> 24);

 FUNC_0(VAR_10, 0,
   VAR_10, (VAR_16->page_table_default_page_addr >> 44) & 0xF);
 FUNC_0(VAR_9, 0,
   VAR_9, (VAR_16->page_table_default_page_addr >> 12) & 0xFFFFFFFF);

 if (VAR_16->gart_config.page_table_start_addr != VAR_16->gart_config.page_table_end_addr) {
  VAR_18.page_table_start_addr = VAR_16->gart_config.page_table_start_addr >> 12;
  VAR_18.page_table_end_addr = VAR_16->gart_config.page_table_end_addr >> 12;
  VAR_18.page_table_base_addr = VAR_16->gart_config.page_table_base_addr;
  VAR_18.depth = 0;
  VAR_18.block_size = 0;

  FUNC_2(&VAR_17->vmid[0], &VAR_18);
 }

 return VAR_14;
}
