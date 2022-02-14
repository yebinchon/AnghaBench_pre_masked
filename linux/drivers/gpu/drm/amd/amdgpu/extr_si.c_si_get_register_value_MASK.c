
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_5__ {int * tile_mode_array; int mc_arb_ramcfg; int gb_addr_config; TYPE_1__** rb_config; } ;
struct TYPE_6__ {TYPE_2__ config; } ;
struct amdgpu_device {TYPE_3__ gfx; int grbm_idx_mutex; } ;
struct TYPE_4__ {int raster_config; int user_rb_backend_disable; int rb_backend_disable; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static uint32_t FUNC_4(struct amdgpu_device *VAR_0,
          bool VAR_1, u32 VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 if (VAR_1) {
  uint32_t VAR_5;
  unsigned VAR_6 = (VAR_2 == 0xffffffff) ? 0 : VAR_2;
  unsigned VAR_7 = (VAR_3 == 0xffffffff) ? 0 : VAR_3;

  switch (VAR_4) {
  case 164:
   return VAR_0->gfx.config.rb_config[VAR_6][VAR_7].rb_backend_disable;
  case 130:
   return VAR_0->gfx.config.rb_config[VAR_6][VAR_7].user_rb_backend_disable;
  case 128:
   return VAR_0->gfx.config.rb_config[VAR_6][VAR_7].raster_config;
  }

  FUNC_2(&VAR_0->grbm_idx_mutex);
  if (VAR_2 != 0xffffffff || VAR_3 != 0xffffffff)
   FUNC_1(VAR_0, VAR_2, VAR_3, 0xffffffff);

  VAR_5 = FUNC_0(VAR_4);

  if (VAR_2 != 0xffffffff || VAR_3 != 0xffffffff)
   FUNC_1(VAR_0, 0xffffffff, 0xffffffff, 0xffffffff);
  FUNC_3(&VAR_0->grbm_idx_mutex);
  return VAR_5;
 } else {
  unsigned VAR_8;

  switch (VAR_4) {
  case 163:
   return VAR_0->gfx.config.gb_addr_config;
  case 129:
   return VAR_0->gfx.config.mc_arb_ramcfg;
  case 162:
  case 161:
  case 150:
  case 139:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 160:
  case 159:
  case 158:
  case 157:
  case 156:
  case 155:
  case 154:
  case 153:
  case 152:
  case 151:
  case 149:
  case 148:
  case 147:
  case 146:
  case 145:
  case 144:
  case 143:
  case 142:
  case 141:
  case 140:
  case 138:
  case 137:
   VAR_8 = (VAR_4 - 162);
   return VAR_0->gfx.config.tile_mode_array[VAR_8];
  default:
   return FUNC_0(VAR_4);
  }
 }
}
