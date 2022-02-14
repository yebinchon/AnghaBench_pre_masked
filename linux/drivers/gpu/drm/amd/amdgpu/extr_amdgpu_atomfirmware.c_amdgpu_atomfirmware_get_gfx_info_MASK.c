
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int gc_lds_size; int gc_max_scratch_slots_per_cu; int gc_max_waves_per_simd; int gc_wave_size; int gc_double_offchip_lds_buffer; int gc_gsprim_buff_depth; int gc_gs_table_depth; int gc_num_max_gs_thds; int gc_num_gprs; int max_texture_channel_caches; int max_backends_per_se; int max_sh_per_se; int max_cu_per_sh; int max_shader_engines; } ;
union gfx_info {TYPE_4__ v24; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct amdgpu_mode_info {TYPE_5__* atom_context; } ;
struct TYPE_7__ {void* lds_size; int max_scratch_slots_per_cu; void* max_waves_per_simd; void* wave_front_size; } ;
struct TYPE_6__ {int double_offchip_lds_buf; void* gs_prim_buffer_depth; int gs_vgt_table_depth; int max_gs_threads; void* max_gprs; int max_texture_channel_caches; int max_backends_per_se; int max_sh_per_se; int max_cu_per_sh; int max_shader_engines; } ;
struct TYPE_8__ {TYPE_2__ cu_info; TYPE_1__ config; } ;
struct amdgpu_device {TYPE_3__ gfx; struct amdgpu_mode_info mode_info; } ;
struct TYPE_10__ {scalar_t__ bios; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int,int *,int*,int*,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct amdgpu_device *VAR_3)
{
 struct amdgpu_mode_info *VAR_4 = &VAR_3->mode_info;
 int VAR_5;
 uint8_t VAR_6, VAR_7;
 uint16_t VAR_8;

 VAR_5 = FUNC_1(VAR_1,
         VAR_2);
 if (FUNC_0(VAR_4->atom_context, VAR_5, ((void*)0),
       &VAR_6, &VAR_7, &VAR_8)) {
  union gfx_info *VAR_9 = (union gfx_info *)
   (VAR_4->atom_context->bios + VAR_8);
  switch (VAR_7) {
  case 4:
   VAR_3->gfx.config.max_shader_engines = VAR_9->v24.max_shader_engines;
   VAR_3->gfx.config.max_cu_per_sh = VAR_9->v24.max_cu_per_sh;
   VAR_3->gfx.config.max_sh_per_se = VAR_9->v24.max_sh_per_se;
   VAR_3->gfx.config.max_backends_per_se = VAR_9->v24.max_backends_per_se;
   VAR_3->gfx.config.max_texture_channel_caches = VAR_9->v24.max_texture_channel_caches;
   VAR_3->gfx.config.max_gprs = FUNC_2(VAR_9->v24.gc_num_gprs);
   VAR_3->gfx.config.max_gs_threads = VAR_9->v24.gc_num_max_gs_thds;
   VAR_3->gfx.config.gs_vgt_table_depth = VAR_9->v24.gc_gs_table_depth;
   VAR_3->gfx.config.gs_prim_buffer_depth =
    FUNC_2(VAR_9->v24.gc_gsprim_buff_depth);
   VAR_3->gfx.config.double_offchip_lds_buf =
    VAR_9->v24.gc_double_offchip_lds_buffer;
   VAR_3->gfx.cu_info.wave_front_size = FUNC_2(VAR_9->v24.gc_wave_size);
   VAR_3->gfx.cu_info.max_waves_per_simd = FUNC_2(VAR_9->v24.gc_max_waves_per_simd);
   VAR_3->gfx.cu_info.max_scratch_slots_per_cu = VAR_9->v24.gc_max_scratch_slots_per_cu;
   VAR_3->gfx.cu_info.lds_size = FUNC_2(VAR_9->v24.gc_lds_size);
   return 0;
  default:
   return -VAR_0;
  }

 }
 return -VAR_0;
}
