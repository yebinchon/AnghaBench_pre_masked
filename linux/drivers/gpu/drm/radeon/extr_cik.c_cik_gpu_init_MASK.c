
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_shader_engines; int max_tile_pipes; int max_cu_per_sh; int max_sh_per_se; int max_backends_per_se; int max_texture_channel_caches; int max_gprs; int max_gs_threads; int max_hw_contexts; int sc_prim_fifo_size_frontend; int sc_prim_fifo_size_backend; int sc_hiz_tile_fifo_size; int sc_earlyz_tile_fifo_size; int num_tile_pipes; int mem_max_burst_length_bytes; int mem_row_size_in_kb; int shader_engine_tile_size; int num_gpus; int multi_gpu_tile_size; int tile_config; scalar_t__ active_cus; } ;
struct TYPE_4__ {TYPE_1__ cik; } ;
struct radeon_device {int family; TYPE_2__ config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_7 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_8 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (struct radeon_device*,int,int) ;
 int FUNC_17 (struct radeon_device*,int,int,int) ;
 int FUNC_18 (struct radeon_device*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(struct radeon_device *VAR_53)
{
 u32 VAR_54 = FUNC_9(VAR_14);
 u32 VAR_55, VAR_56;
 u32 VAR_57;
 u32 VAR_58;
 int VAR_59, VAR_60;

 switch (VAR_53->family) {
 case 132:
  VAR_53->config.cik.max_shader_engines = 2;
  VAR_53->config.cik.max_tile_pipes = 4;
  VAR_53->config.cik.max_cu_per_sh = 7;
  VAR_53->config.cik.max_sh_per_se = 1;
  VAR_53->config.cik.max_backends_per_se = 2;
  VAR_53->config.cik.max_texture_channel_caches = 4;
  VAR_53->config.cik.max_gprs = 256;
  VAR_53->config.cik.max_gs_threads = 32;
  VAR_53->config.cik.max_hw_contexts = 8;

  VAR_53->config.cik.sc_prim_fifo_size_frontend = 0x20;
  VAR_53->config.cik.sc_prim_fifo_size_backend = 0x100;
  VAR_53->config.cik.sc_hiz_tile_fifo_size = 0x30;
  VAR_53->config.cik.sc_earlyz_tile_fifo_size = 0x130;
  VAR_54 = VAR_1;
  break;
 case 131:
  VAR_53->config.cik.max_shader_engines = 4;
  VAR_53->config.cik.max_tile_pipes = 16;
  VAR_53->config.cik.max_cu_per_sh = 11;
  VAR_53->config.cik.max_sh_per_se = 1;
  VAR_53->config.cik.max_backends_per_se = 4;
  VAR_53->config.cik.max_texture_channel_caches = 16;
  VAR_53->config.cik.max_gprs = 256;
  VAR_53->config.cik.max_gs_threads = 32;
  VAR_53->config.cik.max_hw_contexts = 8;

  VAR_53->config.cik.sc_prim_fifo_size_frontend = 0x20;
  VAR_53->config.cik.sc_prim_fifo_size_backend = 0x100;
  VAR_53->config.cik.sc_hiz_tile_fifo_size = 0x30;
  VAR_53->config.cik.sc_earlyz_tile_fifo_size = 0x130;
  VAR_54 = VAR_16;
  break;
 case 129:
  VAR_53->config.cik.max_shader_engines = 1;
  VAR_53->config.cik.max_tile_pipes = 4;
  VAR_53->config.cik.max_cu_per_sh = 8;
  VAR_53->config.cik.max_backends_per_se = 2;
  VAR_53->config.cik.max_sh_per_se = 1;
  VAR_53->config.cik.max_texture_channel_caches = 4;
  VAR_53->config.cik.max_gprs = 256;
  VAR_53->config.cik.max_gs_threads = 16;
  VAR_53->config.cik.max_hw_contexts = 8;

  VAR_53->config.cik.sc_prim_fifo_size_frontend = 0x20;
  VAR_53->config.cik.sc_prim_fifo_size_backend = 0x100;
  VAR_53->config.cik.sc_hiz_tile_fifo_size = 0x30;
  VAR_53->config.cik.sc_earlyz_tile_fifo_size = 0x130;
  VAR_54 = VAR_1;
  break;
 case 130:
 case 128:
 default:
  VAR_53->config.cik.max_shader_engines = 1;
  VAR_53->config.cik.max_tile_pipes = 2;
  VAR_53->config.cik.max_cu_per_sh = 2;
  VAR_53->config.cik.max_sh_per_se = 1;
  VAR_53->config.cik.max_backends_per_se = 1;
  VAR_53->config.cik.max_texture_channel_caches = 2;
  VAR_53->config.cik.max_gprs = 256;
  VAR_53->config.cik.max_gs_threads = 16;
  VAR_53->config.cik.max_hw_contexts = 8;

  VAR_53->config.cik.sc_prim_fifo_size_frontend = 0x20;
  VAR_53->config.cik.sc_prim_fifo_size_backend = 0x100;
  VAR_53->config.cik.sc_hiz_tile_fifo_size = 0x30;
  VAR_53->config.cik.sc_earlyz_tile_fifo_size = 0x130;
  VAR_54 = VAR_1;
  break;
 }


 for (VAR_59 = 0, VAR_60 = 0; VAR_59 < 32; VAR_59++, VAR_60 += 0x18) {
  FUNC_15((0x2c14 + VAR_60), 0x00000000);
  FUNC_15((0x2c18 + VAR_60), 0x00000000);
  FUNC_15((0x2c1c + VAR_60), 0x00000000);
  FUNC_15((0x2c20 + VAR_60), 0x00000000);
  FUNC_15((0x2c24 + VAR_60), 0x00000000);
 }

 FUNC_15(VAR_15, FUNC_4(0xff));
 FUNC_15(VAR_43, 0x1);
 FUNC_15(VAR_42, 0x1);

 FUNC_15(VAR_0, VAR_12 | VAR_13);

 VAR_55 = FUNC_9(VAR_22);
 VAR_56 = FUNC_9(VAR_21);

 VAR_53->config.cik.num_tile_pipes = VAR_53->config.cik.max_tile_pipes;
 VAR_53->config.cik.mem_max_burst_length_bytes = 256;
 VAR_58 = (VAR_56 & VAR_25) >> VAR_26;
 VAR_53->config.cik.mem_row_size_in_kb = (4 * (1 << (8 + VAR_58))) / 1024;
 if (VAR_53->config.cik.mem_row_size_in_kb > 4)
  VAR_53->config.cik.mem_row_size_in_kb = 4;

 VAR_53->config.cik.shader_engine_tile_size = 32;
 VAR_53->config.cik.num_gpus = 1;
 VAR_53->config.cik.multi_gpu_tile_size = 64;


 VAR_54 &= ~VAR_34;
 switch (VAR_53->config.cik.mem_row_size_in_kb) {
 case 1:
 default:
  VAR_54 |= FUNC_8(0);
  break;
 case 2:
  VAR_54 |= FUNC_8(1);
  break;
 case 4:
  VAR_54 |= FUNC_8(2);
  break;
 }
 VAR_53->config.cik.tile_config = 0;
 switch (VAR_53->config.cik.num_tile_pipes) {
 case 1:
  VAR_53->config.cik.tile_config |= (0 << 0);
  break;
 case 2:
  VAR_53->config.cik.tile_config |= (1 << 0);
  break;
 case 4:
  VAR_53->config.cik.tile_config |= (2 << 0);
  break;
 case 8:
 default:

  VAR_53->config.cik.tile_config |= (3 << 0);
  break;
 }
 VAR_53->config.cik.tile_config |=
  ((VAR_56 & VAR_23) >> VAR_24) << 4;
 VAR_53->config.cik.tile_config |=
  ((VAR_54 & VAR_32) >> VAR_33) << 8;
 VAR_53->config.cik.tile_config |=
  ((VAR_54 & VAR_34) >> VAR_35) << 12;

 FUNC_15(VAR_14, VAR_54);
 FUNC_15(VAR_17, VAR_54);
 FUNC_15(VAR_9, VAR_54);
 FUNC_15(VAR_37 + VAR_36, VAR_54 & 0x70);
 FUNC_15(VAR_37 + VAR_38, VAR_54 & 0x70);
 FUNC_15(VAR_46, VAR_54);
 FUNC_15(VAR_48, VAR_54);
 FUNC_15(VAR_47, VAR_54);

 FUNC_18(VAR_53);

 FUNC_17(VAR_53, VAR_53->config.cik.max_shader_engines,
       VAR_53->config.cik.max_sh_per_se,
       VAR_53->config.cik.max_backends_per_se);

 VAR_53->config.cik.active_cus = 0;
 for (VAR_59 = 0; VAR_59 < VAR_53->config.cik.max_shader_engines; VAR_59++) {
  for (VAR_60 = 0; VAR_60 < VAR_53->config.cik.max_sh_per_se; VAR_60++) {
   VAR_53->config.cik.active_cus +=
    FUNC_19(FUNC_16(VAR_53, VAR_59, VAR_60));
  }
 }


 FUNC_15(VAR_4, FUNC_5(0x30) | FUNC_6(0x60));

 FUNC_15(VAR_44, 0x20);

 FUNC_15(VAR_45, 0x00010000);

 VAR_58 = FUNC_9(VAR_39);
 VAR_58 |= 0x03000000;
 FUNC_15(VAR_39, VAR_58);

 FUNC_15(VAR_41, 1);

 FUNC_15(VAR_6, 0);

 VAR_58 = FUNC_9(VAR_7) & ~0xf00fffff;
 VAR_58 |= 0x00000400;
 FUNC_15(VAR_7, VAR_58);

 VAR_58 = FUNC_9(VAR_8) & ~0x0002021c;
 VAR_58 |= 0x00020200;
 FUNC_15(VAR_8, VAR_58);

 VAR_58 = FUNC_9(VAR_2) & ~0x00010000;
 VAR_58 |= 0x00018208;
 FUNC_15(VAR_2, VAR_58);

 FUNC_15(VAR_40, FUNC_14(4));

 FUNC_15(VAR_29, (FUNC_12(VAR_53->config.cik.sc_prim_fifo_size_frontend) |
     FUNC_10(VAR_53->config.cik.sc_prim_fifo_size_backend) |
     FUNC_13(VAR_53->config.cik.sc_hiz_tile_fifo_size) |
     FUNC_11(VAR_53->config.cik.sc_earlyz_tile_fifo_size)));

 FUNC_15(VAR_52, 1);

 FUNC_15(VAR_5, 0);

 FUNC_15(VAR_41, 0);

 FUNC_15(VAR_30, (FUNC_2(4095) |
       FUNC_3(255)));

 FUNC_15(VAR_50, FUNC_1(VAR_49) |
        FUNC_0(VAR_11));

 FUNC_15(VAR_51, 16);
 FUNC_15(VAR_31, 0);

 VAR_58 = FUNC_9(VAR_20);
 VAR_58 |= VAR_18;
 FUNC_15(VAR_20, VAR_58);

 VAR_57 = FUNC_9(VAR_19);
 FUNC_15(VAR_19, VAR_57);

 FUNC_15(VAR_27, VAR_3 | FUNC_7(3));
 FUNC_15(VAR_28, VAR_10);

 FUNC_20(50);
}
