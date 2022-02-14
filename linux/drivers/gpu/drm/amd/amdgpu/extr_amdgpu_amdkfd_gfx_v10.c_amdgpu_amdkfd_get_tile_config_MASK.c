
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tile_config {void* num_macro_tile_configs; int macro_tile_config_ptr; void* num_tile_configs; int tile_config_ptr; void* num_ranks; void* num_banks; int gb_addr_config; } ;
struct kgd_dev {int dummy; } ;
struct TYPE_3__ {int macrotile_mode_array; int tile_mode_array; int mc_arb_ramcfg; int gb_addr_config; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct kgd_dev *VAR_3,
  struct tile_config *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;

 VAR_4->gb_addr_config = VAR_5->gfx.config.gb_addr_config;
 VAR_4->tile_config_ptr = VAR_5->gfx.config.tile_mode_array;
 VAR_4->num_tile_configs =
   FUNC_0(VAR_5->gfx.config.tile_mode_array);
 VAR_4->macro_tile_config_ptr =
   VAR_5->gfx.config.macrotile_mode_array;
 VAR_4->num_macro_tile_configs =
   FUNC_0(VAR_5->gfx.config.macrotile_mode_array);

 return 0;
}
