
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
 int VAR_10 ;
 int FUNC_0 (int,int ,int ) ;
 void* FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17, VAR_18;
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23;

 switch (VAR_15->asic_type) {
 case 132:
  VAR_15->gfx.config.max_shader_engines = 2;
  VAR_15->gfx.config.max_tile_pipes = 4;
  VAR_15->gfx.config.max_cu_per_sh = 7;
  VAR_15->gfx.config.max_sh_per_se = 1;
  VAR_15->gfx.config.max_backends_per_se = 2;
  VAR_15->gfx.config.max_texture_channel_caches = 4;
  VAR_15->gfx.config.max_gprs = 256;
  VAR_15->gfx.config.max_gs_threads = 32;
  VAR_15->gfx.config.max_hw_contexts = 8;

  VAR_15->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_15->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_15->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_15->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_16 = VAR_1;
  break;
 case 131:
  VAR_15->gfx.config.max_shader_engines = 4;
  VAR_15->gfx.config.max_tile_pipes = 16;
  VAR_15->gfx.config.max_cu_per_sh = 11;
  VAR_15->gfx.config.max_sh_per_se = 1;
  VAR_15->gfx.config.max_backends_per_se = 4;
  VAR_15->gfx.config.max_texture_channel_caches = 16;
  VAR_15->gfx.config.max_gprs = 256;
  VAR_15->gfx.config.max_gs_threads = 32;
  VAR_15->gfx.config.max_hw_contexts = 8;

  VAR_15->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_15->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_15->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_15->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_16 = VAR_6;
  break;
 case 129:
  VAR_15->gfx.config.max_shader_engines = 1;
  VAR_15->gfx.config.max_tile_pipes = 4;
  VAR_15->gfx.config.max_cu_per_sh = 8;
  VAR_15->gfx.config.max_backends_per_se = 2;
  VAR_15->gfx.config.max_sh_per_se = 1;
  VAR_15->gfx.config.max_texture_channel_caches = 4;
  VAR_15->gfx.config.max_gprs = 256;
  VAR_15->gfx.config.max_gs_threads = 16;
  VAR_15->gfx.config.max_hw_contexts = 8;

  VAR_15->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_15->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_15->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_15->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_16 = VAR_1;
  break;
 case 130:
 case 128:
 default:
  VAR_15->gfx.config.max_shader_engines = 1;
  VAR_15->gfx.config.max_tile_pipes = 2;
  VAR_15->gfx.config.max_cu_per_sh = 2;
  VAR_15->gfx.config.max_sh_per_se = 1;
  VAR_15->gfx.config.max_backends_per_se = 1;
  VAR_15->gfx.config.max_texture_channel_caches = 2;
  VAR_15->gfx.config.max_gprs = 256;
  VAR_15->gfx.config.max_gs_threads = 16;
  VAR_15->gfx.config.max_hw_contexts = 8;

  VAR_15->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_15->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_15->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_15->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_16 = VAR_1;
  break;
 }

 VAR_17 = FUNC_1(VAR_14);
 VAR_15->gfx.config.mc_arb_ramcfg = FUNC_1(VAR_11);
 VAR_18 = VAR_15->gfx.config.mc_arb_ramcfg;

 VAR_15->gfx.config.num_tile_pipes = VAR_15->gfx.config.max_tile_pipes;
 VAR_15->gfx.config.mem_max_burst_length_bytes = 256;
 if (VAR_15->flags & VAR_0) {

  VAR_23 = FUNC_1(VAR_12);
  VAR_19 = FUNC_0(VAR_23, VAR_9, VAR_2);
  VAR_20 = FUNC_0(VAR_23, VAR_9, VAR_3);

  VAR_23 = FUNC_1(VAR_13);
  VAR_21 = FUNC_0(VAR_23, VAR_10, VAR_2);
  VAR_22 = FUNC_0(VAR_23, VAR_10, VAR_3);


  if ((VAR_19 == 0) || (VAR_19 == 3) || (VAR_19 == 4) || (VAR_19 > 12))
   VAR_19 = 0;
  if ((VAR_20 == 0) || (VAR_20 == 3) || (VAR_20 == 4) || (VAR_20 > 12))
   VAR_20 = 0;
  if ((VAR_21 == 0) || (VAR_21 == 3) || (VAR_21 == 4) || (VAR_21 > 12))
   VAR_21 = 0;
  if ((VAR_22 == 0) || (VAR_22 == 3) || (VAR_22 == 4) || (VAR_22 > 12))
   VAR_22 = 0;



  if ((VAR_19 == 11) || (VAR_20 == 11) || (VAR_21 == 11) || (VAR_22 == 11))
   VAR_15->gfx.config.mem_row_size_in_kb = 2;
  else
   VAR_15->gfx.config.mem_row_size_in_kb = 1;
 } else {
  VAR_23 = (VAR_18 & VAR_7) >> VAR_8;
  VAR_15->gfx.config.mem_row_size_in_kb = (4 * (1 << (8 + VAR_23))) / 1024;
  if (VAR_15->gfx.config.mem_row_size_in_kb > 4)
   VAR_15->gfx.config.mem_row_size_in_kb = 4;
 }

 VAR_15->gfx.config.shader_engine_tile_size = 32;
 VAR_15->gfx.config.num_gpus = 1;
 VAR_15->gfx.config.multi_gpu_tile_size = 64;


 VAR_16 &= ~VAR_4;
 switch (VAR_15->gfx.config.mem_row_size_in_kb) {
 case 1:
 default:
  VAR_16 |= (0 << VAR_5);
  break;
 case 2:
  VAR_16 |= (1 << VAR_5);
  break;
 case 4:
  VAR_16 |= (2 << VAR_5);
  break;
 }
 VAR_15->gfx.config.gb_addr_config = VAR_16;
}
