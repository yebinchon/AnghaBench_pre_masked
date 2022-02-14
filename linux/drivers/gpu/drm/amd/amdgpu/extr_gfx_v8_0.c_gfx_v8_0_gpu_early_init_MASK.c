
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_shader_engines; int max_tile_pipes; int max_cu_per_sh; int max_sh_per_se; int max_backends_per_se; int max_texture_channel_caches; int max_gprs; int max_gs_threads; int max_hw_contexts; int sc_prim_fifo_size_frontend; int sc_prim_fifo_size_backend; int sc_hiz_tile_fifo_size; int sc_earlyz_tile_fifo_size; int mc_arb_ramcfg; int num_tile_pipes; int mem_max_burst_length_bytes; int mem_row_size_in_kb; int shader_engine_tile_size; int num_gpus; int multi_gpu_tile_size; int gb_addr_config; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {int asic_type; int flags; TYPE_2__ gfx; } ;


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
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int VAR_10 ;
 void* FUNC_2 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_17)
{
 u32 VAR_18;
 u32 VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 u32 VAR_25;
 int VAR_26;

 switch (VAR_17->asic_type) {
 case 129:
  VAR_17->gfx.config.max_shader_engines = 1;
  VAR_17->gfx.config.max_tile_pipes = 2;
  VAR_17->gfx.config.max_cu_per_sh = 6;
  VAR_17->gfx.config.max_sh_per_se = 1;
  VAR_17->gfx.config.max_backends_per_se = 2;
  VAR_17->gfx.config.max_texture_channel_caches = 2;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 32;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_12;
  break;
 case 135:
  VAR_17->gfx.config.max_shader_engines = 4;
  VAR_17->gfx.config.max_tile_pipes = 16;
  VAR_17->gfx.config.max_cu_per_sh = 16;
  VAR_17->gfx.config.max_sh_per_se = 1;
  VAR_17->gfx.config.max_backends_per_se = 4;
  VAR_17->gfx.config.max_texture_channel_caches = 16;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 32;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_11;
  break;
 case 133:
 case 132:
  VAR_26 = FUNC_3(VAR_17);
  if (VAR_26)
   return VAR_26;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 32;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_9;
  break;
 case 134:
 case 128:
  VAR_26 = FUNC_3(VAR_17);
  if (VAR_26)
   return VAR_26;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 32;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_11;
  break;
 case 130:
  VAR_17->gfx.config.max_shader_engines = 4;
  VAR_17->gfx.config.max_tile_pipes = 8;
  VAR_17->gfx.config.max_cu_per_sh = 8;
  VAR_17->gfx.config.max_sh_per_se = 1;
  VAR_17->gfx.config.max_backends_per_se = 2;
  VAR_17->gfx.config.max_texture_channel_caches = 8;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 32;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_11;
  break;
 case 136:
  VAR_17->gfx.config.max_shader_engines = 1;
  VAR_17->gfx.config.max_tile_pipes = 2;
  VAR_17->gfx.config.max_sh_per_se = 1;
  VAR_17->gfx.config.max_backends_per_se = 2;
  VAR_17->gfx.config.max_cu_per_sh = 8;
  VAR_17->gfx.config.max_texture_channel_caches = 2;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 32;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_1;
  break;
 case 131:
  VAR_17->gfx.config.max_shader_engines = 1;
  VAR_17->gfx.config.max_tile_pipes = 2;
  VAR_17->gfx.config.max_sh_per_se = 1;
  VAR_17->gfx.config.max_backends_per_se = 1;
  VAR_17->gfx.config.max_cu_per_sh = 3;
  VAR_17->gfx.config.max_texture_channel_caches = 2;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 16;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_1;
  break;
 default:
  VAR_17->gfx.config.max_shader_engines = 2;
  VAR_17->gfx.config.max_tile_pipes = 4;
  VAR_17->gfx.config.max_cu_per_sh = 2;
  VAR_17->gfx.config.max_sh_per_se = 1;
  VAR_17->gfx.config.max_backends_per_se = 2;
  VAR_17->gfx.config.max_texture_channel_caches = 4;
  VAR_17->gfx.config.max_gprs = 256;
  VAR_17->gfx.config.max_gs_threads = 32;
  VAR_17->gfx.config.max_hw_contexts = 8;

  VAR_17->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_17->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_17->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_17->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_18 = VAR_11;
  break;
 }

 VAR_19 = FUNC_2(VAR_16);
 VAR_17->gfx.config.mc_arb_ramcfg = FUNC_2(VAR_13);
 VAR_20 = VAR_17->gfx.config.mc_arb_ramcfg;

 VAR_17->gfx.config.num_tile_pipes = VAR_17->gfx.config.max_tile_pipes;
 VAR_17->gfx.config.mem_max_burst_length_bytes = 256;
 if (VAR_17->flags & VAR_0) {

  VAR_25 = FUNC_2(VAR_14);
  VAR_21 = FUNC_0(VAR_25, VAR_6, VAR_2);
  VAR_22 = FUNC_0(VAR_25, VAR_6, VAR_3);

  VAR_25 = FUNC_2(VAR_15);
  VAR_23 = FUNC_0(VAR_25, VAR_7, VAR_2);
  VAR_24 = FUNC_0(VAR_25, VAR_7, VAR_3);


  if ((VAR_21 == 0) || (VAR_21 == 3) || (VAR_21 == 4) || (VAR_21 > 12))
   VAR_21 = 0;
  if ((VAR_22 == 0) || (VAR_22 == 3) || (VAR_22 == 4) || (VAR_22 > 12))
   VAR_22 = 0;
  if ((VAR_23 == 0) || (VAR_23 == 3) || (VAR_23 == 4) || (VAR_23 > 12))
   VAR_23 = 0;
  if ((VAR_24 == 0) || (VAR_24 == 3) || (VAR_24 == 4) || (VAR_24 > 12))
   VAR_24 = 0;



  if ((VAR_21 == 11) || (VAR_22 == 11) || (VAR_23 == 11) || (VAR_24 == 11))
   VAR_17->gfx.config.mem_row_size_in_kb = 2;
  else
   VAR_17->gfx.config.mem_row_size_in_kb = 1;
 } else {
  VAR_25 = FUNC_0(VAR_20, VAR_5, VAR_8);
  VAR_17->gfx.config.mem_row_size_in_kb = (4 * (1 << (8 + VAR_25))) / 1024;
  if (VAR_17->gfx.config.mem_row_size_in_kb > 4)
   VAR_17->gfx.config.mem_row_size_in_kb = 4;
 }

 VAR_17->gfx.config.shader_engine_tile_size = 32;
 VAR_17->gfx.config.num_gpus = 1;
 VAR_17->gfx.config.multi_gpu_tile_size = 64;


 switch (VAR_17->gfx.config.mem_row_size_in_kb) {
 case 1:
 default:
  VAR_18 = FUNC_1(VAR_18, VAR_4, VAR_10, 0);
  break;
 case 2:
  VAR_18 = FUNC_1(VAR_18, VAR_4, VAR_10, 1);
  break;
 case 4:
  VAR_18 = FUNC_1(VAR_18, VAR_4, VAR_10, 2);
  break;
 }
 VAR_17->gfx.config.gb_addr_config = VAR_18;

 return 0;
}
