
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gc_info_v1_0 {int gc_num_packer_per_sc; int gc_num_sa_per_se; int gc_num_sc_per_se; int gc_lds_size; int gc_max_scratch_slots_per_cu; int gc_max_waves_per_simd; int gc_wave_size; int gc_double_offchip_lds_buffer; int gc_gsprim_buff_depth; int gc_gs_table_depth; int gc_num_max_gs_thds; int gc_num_gprs; int gc_num_gl2c; int gc_num_rb_per_se; int gc_num_wgp1_per_sa; int gc_num_wgp0_per_sa; int gc_num_se; } ;
struct binary_header {TYPE_1__* table_list; } ;
struct TYPE_7__ {int max_shader_engines; int max_cu_per_sh; int max_sh_per_se; int max_backends_per_se; int max_texture_channel_caches; int max_gprs; int max_gs_threads; int gs_vgt_table_depth; int gs_prim_buffer_depth; int double_offchip_lds_buf; int num_sc_per_sh; int num_packer_per_sc; } ;
struct TYPE_6__ {int wave_front_size; int max_waves_per_simd; int max_scratch_slots_per_cu; int lds_size; } ;
struct TYPE_8__ {TYPE_3__ config; TYPE_2__ cu_info; } ;
struct amdgpu_device {TYPE_4__ gfx; scalar_t__ discovery; } ;
struct TYPE_5__ {int offset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct amdgpu_device *VAR_2)
{
 struct binary_header *VAR_3;
 struct gc_info_v1_0 *VAR_4;

 if (!VAR_2->discovery) {
  FUNC_0("ip discovery uninitialized\n");
  return -VAR_0;
 }

 VAR_3 = (struct binary_header *)VAR_2->discovery;
 VAR_4 = (struct gc_info_v1_0 *)(VAR_2->discovery +
   FUNC_1(VAR_3->table_list[VAR_1].offset));

 VAR_2->gfx.config.max_shader_engines = FUNC_2(VAR_4->gc_num_se);
 VAR_2->gfx.config.max_cu_per_sh = 2 * (FUNC_2(VAR_4->gc_num_wgp0_per_sa) +
           FUNC_2(VAR_4->gc_num_wgp1_per_sa));
 VAR_2->gfx.config.max_sh_per_se = FUNC_2(VAR_4->gc_num_sa_per_se);
 VAR_2->gfx.config.max_backends_per_se = FUNC_2(VAR_4->gc_num_rb_per_se);
 VAR_2->gfx.config.max_texture_channel_caches = FUNC_2(VAR_4->gc_num_gl2c);
 VAR_2->gfx.config.max_gprs = FUNC_2(VAR_4->gc_num_gprs);
 VAR_2->gfx.config.max_gs_threads = FUNC_2(VAR_4->gc_num_max_gs_thds);
 VAR_2->gfx.config.gs_vgt_table_depth = FUNC_2(VAR_4->gc_gs_table_depth);
 VAR_2->gfx.config.gs_prim_buffer_depth = FUNC_2(VAR_4->gc_gsprim_buff_depth);
 VAR_2->gfx.config.double_offchip_lds_buf = FUNC_2(VAR_4->gc_double_offchip_lds_buffer);
 VAR_2->gfx.cu_info.wave_front_size = FUNC_2(VAR_4->gc_wave_size);
 VAR_2->gfx.cu_info.max_waves_per_simd = FUNC_2(VAR_4->gc_max_waves_per_simd);
 VAR_2->gfx.cu_info.max_scratch_slots_per_cu = FUNC_2(VAR_4->gc_max_scratch_slots_per_cu);
 VAR_2->gfx.cu_info.lds_size = FUNC_2(VAR_4->gc_lds_size);
 VAR_2->gfx.config.num_sc_per_sh = FUNC_2(VAR_4->gc_num_sc_per_se) /
      FUNC_2(VAR_4->gc_num_sa_per_se);
 VAR_2->gfx.config.num_packer_per_sc = FUNC_2(VAR_4->gc_num_packer_per_sc);

 return 0;
}
