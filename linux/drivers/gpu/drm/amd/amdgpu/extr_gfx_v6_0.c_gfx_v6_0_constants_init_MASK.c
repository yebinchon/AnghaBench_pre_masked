
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_shader_engines; int max_tile_pipes; int max_cu_per_sh; int max_sh_per_se; int max_backends_per_se; int max_texture_channel_caches; int max_gprs; int max_gs_threads; int max_hw_contexts; int sc_prim_fifo_size_frontend; int sc_prim_fifo_size_backend; int sc_hiz_tile_fifo_size; int sc_earlyz_tile_fifo_size; int mc_arb_ramcfg; int num_tile_pipes; int mem_max_burst_length_bytes; int mem_row_size_in_kb; int shader_engine_tile_size; int num_gpus; int multi_gpu_tile_size; int gb_addr_config; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {int asic_type; TYPE_2__ gfx; scalar_t__ has_uvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* FUNC_1 (scalar_t__) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct amdgpu_device *VAR_67)
{
 u32 VAR_68 = 0;
 u32 VAR_69, VAR_70;
 u32 VAR_71;
 u32 VAR_72;
 u32 VAR_73;

 switch (VAR_67->asic_type) {
 case 129:
  VAR_67->gfx.config.max_shader_engines = 2;
  VAR_67->gfx.config.max_tile_pipes = 12;
  VAR_67->gfx.config.max_cu_per_sh = 8;
  VAR_67->gfx.config.max_sh_per_se = 2;
  VAR_67->gfx.config.max_backends_per_se = 4;
  VAR_67->gfx.config.max_texture_channel_caches = 12;
  VAR_67->gfx.config.max_gprs = 256;
  VAR_67->gfx.config.max_gs_threads = 32;
  VAR_67->gfx.config.max_hw_contexts = 8;

  VAR_67->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_67->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_67->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_67->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_68 = VAR_26;
  break;
 case 130:
  VAR_67->gfx.config.max_shader_engines = 2;
  VAR_67->gfx.config.max_tile_pipes = 8;
  VAR_67->gfx.config.max_cu_per_sh = 5;
  VAR_67->gfx.config.max_sh_per_se = 2;
  VAR_67->gfx.config.max_backends_per_se = 4;
  VAR_67->gfx.config.max_texture_channel_caches = 8;
  VAR_67->gfx.config.max_gprs = 256;
  VAR_67->gfx.config.max_gs_threads = 32;
  VAR_67->gfx.config.max_hw_contexts = 8;

  VAR_67->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_67->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_67->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_67->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_68 = VAR_26;
  break;
 case 128:
  VAR_67->gfx.config.max_shader_engines = 1;
  VAR_67->gfx.config.max_tile_pipes = 4;
  VAR_67->gfx.config.max_cu_per_sh = 5;
  VAR_67->gfx.config.max_sh_per_se = 2;
  VAR_67->gfx.config.max_backends_per_se = 4;
  VAR_67->gfx.config.max_texture_channel_caches = 4;
  VAR_67->gfx.config.max_gprs = 256;
  VAR_67->gfx.config.max_gs_threads = 32;
  VAR_67->gfx.config.max_hw_contexts = 8;

  VAR_67->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_67->gfx.config.sc_prim_fifo_size_backend = 0x40;
  VAR_67->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_67->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_68 = VAR_28;
  break;
 case 131:
  VAR_67->gfx.config.max_shader_engines = 1;
  VAR_67->gfx.config.max_tile_pipes = 4;
  VAR_67->gfx.config.max_cu_per_sh = 6;
  VAR_67->gfx.config.max_sh_per_se = 1;
  VAR_67->gfx.config.max_backends_per_se = 2;
  VAR_67->gfx.config.max_texture_channel_caches = 4;
  VAR_67->gfx.config.max_gprs = 256;
  VAR_67->gfx.config.max_gs_threads = 16;
  VAR_67->gfx.config.max_hw_contexts = 8;

  VAR_67->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_67->gfx.config.sc_prim_fifo_size_backend = 0x40;
  VAR_67->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_67->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_68 = VAR_28;
  break;
 case 132:
  VAR_67->gfx.config.max_shader_engines = 1;
  VAR_67->gfx.config.max_tile_pipes = 4;
  VAR_67->gfx.config.max_cu_per_sh = 5;
  VAR_67->gfx.config.max_sh_per_se = 1;
  VAR_67->gfx.config.max_backends_per_se = 1;
  VAR_67->gfx.config.max_texture_channel_caches = 2;
  VAR_67->gfx.config.max_gprs = 256;
  VAR_67->gfx.config.max_gs_threads = 16;
  VAR_67->gfx.config.max_hw_contexts = 8;

  VAR_67->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_67->gfx.config.sc_prim_fifo_size_backend = 0x40;
  VAR_67->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_67->gfx.config.sc_earlyz_tile_fifo_size = 0x130;
  VAR_68 = VAR_14;
  break;
 default:
  FUNC_0();
  break;
 }

 FUNC_2(VAR_47, (0xff << VAR_13));
 FUNC_2(VAR_59, 1);
 FUNC_2(VAR_58, 1);

 FUNC_2(VAR_31, VAR_0 | VAR_1);

 VAR_69 = FUNC_1(VAR_51);
 VAR_67->gfx.config.mc_arb_ramcfg = FUNC_1(VAR_50);
 VAR_70 = VAR_67->gfx.config.mc_arb_ramcfg;

 VAR_67->gfx.config.num_tile_pipes = VAR_67->gfx.config.max_tile_pipes;
 VAR_67->gfx.config.mem_max_burst_length_bytes = 256;
 VAR_73 = (VAR_70 & VAR_15) >> VAR_16;
 VAR_67->gfx.config.mem_row_size_in_kb = (4 * (1 << (8 + VAR_73))) / 1024;
 if (VAR_67->gfx.config.mem_row_size_in_kb > 4)
  VAR_67->gfx.config.mem_row_size_in_kb = 4;
 VAR_67->gfx.config.shader_engine_tile_size = 32;
 VAR_67->gfx.config.num_gpus = 1;
 VAR_67->gfx.config.multi_gpu_tile_size = 64;

 VAR_68 &= ~VAR_11;
 switch (VAR_67->gfx.config.mem_row_size_in_kb) {
 case 1:
 default:
  VAR_68 |= 0 << VAR_12;
  break;
 case 2:
  VAR_68 |= 1 << VAR_12;
  break;
 case 4:
  VAR_68 |= 2 << VAR_12;
  break;
 }
 VAR_68 &= ~VAR_9;
 if (VAR_67->gfx.config.max_shader_engines == 2)
  VAR_68 |= 1 << VAR_10;
 VAR_67->gfx.config.gb_addr_config = VAR_68;

 FUNC_2(VAR_46, VAR_68);
 FUNC_2(VAR_45, VAR_68);
 FUNC_2(VAR_44, VAR_68);
 FUNC_2(VAR_48, VAR_68);
 FUNC_2(VAR_43 + VAR_6, VAR_68);
 FUNC_2(VAR_43 + VAR_7, VAR_68);
 FUNC_7(VAR_67);

 FUNC_5(VAR_67);

 FUNC_6(VAR_67);

 FUNC_4(VAR_67);
 FUNC_3(VAR_67);

 FUNC_2(VAR_42, ((0x16 << VAR_4) |
           (0x2b << VAR_5)));
 FUNC_2(VAR_40, (0x30 << VAR_2) |
        (0x60 << VAR_3));

 VAR_71 = FUNC_1(VAR_60);
 FUNC_2(VAR_60, VAR_71);

 FUNC_2(VAR_56, (4 << VAR_25));

 FUNC_2(VAR_53, ((VAR_67->gfx.config.sc_prim_fifo_size_frontend << VAR_21) |
       (VAR_67->gfx.config.sc_prim_fifo_size_backend << VAR_19) |
       (VAR_67->gfx.config.sc_hiz_tile_fifo_size << VAR_22) |
       (VAR_67->gfx.config.sc_earlyz_tile_fifo_size << VAR_20)));

 FUNC_2(VAR_66, 1);
 FUNC_2(VAR_41, 0);
 FUNC_2(VAR_57, 0);
 FUNC_2(VAR_54, ((4095 << VAR_23) |
       (255 << VAR_24)));

 FUNC_2(VAR_64,
  (VAR_27 << VAR_30) |
  (VAR_8 << VAR_29));

 FUNC_2(VAR_65, 16);
 FUNC_2(VAR_55, 0);

 FUNC_2(VAR_32, 0);
 FUNC_2(VAR_33, 0);
 FUNC_2(VAR_34, 0);
 FUNC_2(VAR_35, 0);
 FUNC_2(VAR_36, 0);
 FUNC_2(VAR_37, 0);
 FUNC_2(VAR_38, 0);
 FUNC_2(VAR_39, 0);

 VAR_72 = FUNC_1(VAR_49);
 FUNC_2(VAR_49, VAR_72);

 FUNC_2(VAR_52, VAR_17 |
    (3 << VAR_18));

 FUNC_8(50);
}
