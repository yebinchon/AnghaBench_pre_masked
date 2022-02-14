
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tile_config {void* num_macro_tile_configs; int macro_tile_config_ptr; void* num_tile_configs; int tile_config_ptr; int gb_addr_config; } ;
struct kgd_dev {int dummy; } ;
struct TYPE_4__ {int macrotile_mode_array; int tile_mode_array; int gb_addr_config; } ;
struct TYPE_3__ {TYPE_2__ config; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 void* FUNC_0 (int ) ;

int FUNC_1(struct kgd_dev *VAR_0,
  struct tile_config *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 VAR_1->gb_addr_config = VAR_2->gfx.config.gb_addr_config;

 VAR_1->tile_config_ptr = VAR_2->gfx.config.tile_mode_array;
 VAR_1->num_tile_configs =
   FUNC_0(VAR_2->gfx.config.tile_mode_array);
 VAR_1->macro_tile_config_ptr =
   VAR_2->gfx.config.macrotile_mode_array;
 VAR_1->num_macro_tile_configs =
   FUNC_0(VAR_2->gfx.config.macrotile_mode_array);

 return 0;
}
