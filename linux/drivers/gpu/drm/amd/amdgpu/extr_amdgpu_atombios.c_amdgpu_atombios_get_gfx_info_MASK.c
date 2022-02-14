
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int max_texture_channel_caches; int max_backends_per_se; int max_sh_per_se; int max_cu_per_sh; int max_tile_pipes; int max_shader_engines; } ;
union gfx_info {TYPE_3__ info; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct amdgpu_mode_info {TYPE_4__* atom_context; } ;
struct TYPE_5__ {int max_texture_channel_caches; int max_backends_per_se; int max_sh_per_se; int max_cu_per_sh; int max_tile_pipes; int max_shader_engines; } ;
struct TYPE_6__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; struct amdgpu_mode_info mode_info; } ;
struct TYPE_8__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,int *,int *,int *,scalar_t__*) ;

int FUNC_2(struct amdgpu_device *VAR_3)
{
 struct amdgpu_mode_info *VAR_4 = &VAR_3->mode_info;
 int VAR_5 = FUNC_0(VAR_0, VAR_2);
 uint8_t VAR_6, VAR_7;
 uint16_t VAR_8;
 int VAR_9 = -VAR_1;

 if (FUNC_1(VAR_4->atom_context, VAR_5, ((void*)0),
       &VAR_6, &VAR_7, &VAR_8)) {
  union gfx_info *VAR_10 = (union gfx_info *)
   (VAR_4->atom_context->bios + VAR_8);

  VAR_3->gfx.config.max_shader_engines = VAR_10->info.max_shader_engines;
  VAR_3->gfx.config.max_tile_pipes = VAR_10->info.max_tile_pipes;
  VAR_3->gfx.config.max_cu_per_sh = VAR_10->info.max_cu_per_sh;
  VAR_3->gfx.config.max_sh_per_se = VAR_10->info.max_sh_per_se;
  VAR_3->gfx.config.max_backends_per_se = VAR_10->info.max_backends_per_se;
  VAR_3->gfx.config.max_texture_channel_caches =
   VAR_10->info.max_texture_channel_caches;

  VAR_9 = 0;
 }
 return VAR_9;
}
