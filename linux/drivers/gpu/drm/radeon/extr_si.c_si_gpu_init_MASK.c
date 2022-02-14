
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_shader_engines; int max_tile_pipes; int max_cu_per_sh; int max_sh_per_se; int max_backends_per_se; int max_texture_channel_caches; int max_gprs; int max_gs_threads; int max_hw_contexts; int sc_prim_fifo_size_frontend; int sc_prim_fifo_size_backend; int sc_hiz_tile_fifo_size; int sc_earlyz_tile_fifo_size; int num_tile_pipes; int mem_max_burst_length_bytes; int mem_row_size_in_kb; int shader_engine_tile_size; int num_gpus; int multi_gpu_tile_size; int tile_config; scalar_t__ active_cus; } ;
struct TYPE_4__ {TYPE_1__ si; } ;
struct radeon_device {int family; TYPE_2__ config; scalar_t__ has_uvd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_7 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
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
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (struct radeon_device*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (struct radeon_device*,int,int) ;
 int FUNC_21 (struct radeon_device*,int,int,int) ;
 int FUNC_22 (struct radeon_device*,int,int,int) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (int) ;

__attribute__((used)) static void FUNC_25(struct radeon_device *VAR_56)
{
 u32 VAR_57 = 0;
 u32 VAR_58, VAR_59;
 u32 VAR_60;
 u32 VAR_61;
 u32 VAR_62;
 int VAR_63, VAR_64;

 switch (VAR_56->family) {
 case 129:
  VAR_56->config.si.max_shader_engines = 2;
  VAR_56->config.si.max_tile_pipes = 12;
  VAR_56->config.si.max_cu_per_sh = 8;
  VAR_56->config.si.max_sh_per_se = 2;
  VAR_56->config.si.max_backends_per_se = 4;
  VAR_56->config.si.max_texture_channel_caches = 12;
  VAR_56->config.si.max_gprs = 256;
  VAR_56->config.si.max_gs_threads = 32;
  VAR_56->config.si.max_hw_contexts = 8;

  VAR_56->config.si.sc_prim_fifo_size_frontend = 0x20;
  VAR_56->config.si.sc_prim_fifo_size_backend = 0x100;
  VAR_56->config.si.sc_hiz_tile_fifo_size = 0x30;
  VAR_56->config.si.sc_earlyz_tile_fifo_size = 0x130;
  VAR_57 = VAR_47;
  break;
 case 130:
  VAR_56->config.si.max_shader_engines = 2;
  VAR_56->config.si.max_tile_pipes = 8;
  VAR_56->config.si.max_cu_per_sh = 5;
  VAR_56->config.si.max_sh_per_se = 2;
  VAR_56->config.si.max_backends_per_se = 4;
  VAR_56->config.si.max_texture_channel_caches = 8;
  VAR_56->config.si.max_gprs = 256;
  VAR_56->config.si.max_gs_threads = 32;
  VAR_56->config.si.max_hw_contexts = 8;

  VAR_56->config.si.sc_prim_fifo_size_frontend = 0x20;
  VAR_56->config.si.sc_prim_fifo_size_backend = 0x100;
  VAR_56->config.si.sc_hiz_tile_fifo_size = 0x30;
  VAR_56->config.si.sc_earlyz_tile_fifo_size = 0x130;
  VAR_57 = VAR_47;
  break;
 case 128:
 default:
  VAR_56->config.si.max_shader_engines = 1;
  VAR_56->config.si.max_tile_pipes = 4;
  VAR_56->config.si.max_cu_per_sh = 5;
  VAR_56->config.si.max_sh_per_se = 2;
  VAR_56->config.si.max_backends_per_se = 4;
  VAR_56->config.si.max_texture_channel_caches = 4;
  VAR_56->config.si.max_gprs = 256;
  VAR_56->config.si.max_gs_threads = 32;
  VAR_56->config.si.max_hw_contexts = 8;

  VAR_56->config.si.sc_prim_fifo_size_frontend = 0x20;
  VAR_56->config.si.sc_prim_fifo_size_backend = 0x40;
  VAR_56->config.si.sc_hiz_tile_fifo_size = 0x30;
  VAR_56->config.si.sc_earlyz_tile_fifo_size = 0x130;
  VAR_57 = VAR_52;
  break;
 case 131:
  VAR_56->config.si.max_shader_engines = 1;
  VAR_56->config.si.max_tile_pipes = 4;
  VAR_56->config.si.max_cu_per_sh = 6;
  VAR_56->config.si.max_sh_per_se = 1;
  VAR_56->config.si.max_backends_per_se = 2;
  VAR_56->config.si.max_texture_channel_caches = 4;
  VAR_56->config.si.max_gprs = 256;
  VAR_56->config.si.max_gs_threads = 16;
  VAR_56->config.si.max_hw_contexts = 8;

  VAR_56->config.si.sc_prim_fifo_size_frontend = 0x20;
  VAR_56->config.si.sc_prim_fifo_size_backend = 0x40;
  VAR_56->config.si.sc_hiz_tile_fifo_size = 0x30;
  VAR_56->config.si.sc_earlyz_tile_fifo_size = 0x130;
  VAR_57 = VAR_52;
  break;
 case 132:
  VAR_56->config.si.max_shader_engines = 1;
  VAR_56->config.si.max_tile_pipes = 4;
  VAR_56->config.si.max_cu_per_sh = 5;
  VAR_56->config.si.max_sh_per_se = 1;
  VAR_56->config.si.max_backends_per_se = 1;
  VAR_56->config.si.max_texture_channel_caches = 2;
  VAR_56->config.si.max_gprs = 256;
  VAR_56->config.si.max_gs_threads = 16;
  VAR_56->config.si.max_hw_contexts = 8;

  VAR_56->config.si.sc_prim_fifo_size_frontend = 0x20;
  VAR_56->config.si.sc_prim_fifo_size_backend = 0x40;
  VAR_56->config.si.sc_hiz_tile_fifo_size = 0x30;
  VAR_56->config.si.sc_earlyz_tile_fifo_size = 0x130;
  VAR_57 = VAR_23;
  break;
 }


 for (VAR_63 = 0, VAR_64 = 0; VAR_63 < 32; VAR_63++, VAR_64 += 0x18) {
  FUNC_17((0x2c14 + VAR_64), 0x00000000);
  FUNC_17((0x2c18 + VAR_64), 0x00000000);
  FUNC_17((0x2c1c + VAR_64), 0x00000000);
  FUNC_17((0x2c20 + VAR_64), 0x00000000);
  FUNC_17((0x2c24 + VAR_64), 0x00000000);
 }

 FUNC_17(VAR_22, FUNC_4(0xff));
 FUNC_17(VAR_45, 1);
 FUNC_17(VAR_44, 1);

 FUNC_18(VAR_56);

 FUNC_17(VAR_0, VAR_19 | VAR_20);

 VAR_58 = FUNC_11(VAR_29);
 VAR_59 = FUNC_11(VAR_28);

 VAR_56->config.si.num_tile_pipes = VAR_56->config.si.max_tile_pipes;
 VAR_56->config.si.mem_max_burst_length_bytes = 256;
 VAR_62 = (VAR_59 & VAR_32) >> VAR_33;
 VAR_56->config.si.mem_row_size_in_kb = (4 * (1 << (8 + VAR_62))) / 1024;
 if (VAR_56->config.si.mem_row_size_in_kb > 4)
  VAR_56->config.si.mem_row_size_in_kb = 4;

 VAR_56->config.si.shader_engine_tile_size = 32;
 VAR_56->config.si.num_gpus = 1;
 VAR_56->config.si.multi_gpu_tile_size = 64;


 VAR_57 &= ~VAR_40;
 switch (VAR_56->config.si.mem_row_size_in_kb) {
 case 1:
 default:
  VAR_57 |= FUNC_10(0);
  break;
 case 2:
  VAR_57 |= FUNC_10(1);
  break;
 case 4:
  VAR_57 |= FUNC_10(2);
  break;
 }
 VAR_56->config.si.tile_config = 0;
 switch (VAR_56->config.si.num_tile_pipes) {
 case 1:
  VAR_56->config.si.tile_config |= (0 << 0);
  break;
 case 2:
  VAR_56->config.si.tile_config |= (1 << 0);
  break;
 case 4:
  VAR_56->config.si.tile_config |= (2 << 0);
  break;
 case 8:
 default:

  VAR_56->config.si.tile_config |= (3 << 0);
  break;
 }
 switch ((VAR_59 & VAR_30) >> VAR_31) {
 case 0:
  VAR_56->config.si.tile_config |= 0 << 4;
  break;
 case 1:
  VAR_56->config.si.tile_config |= 1 << 4;
  break;
 case 2:
 default:
  VAR_56->config.si.tile_config |= 2 << 4;
  break;
 }
 VAR_56->config.si.tile_config |=
  ((VAR_57 & VAR_38) >> VAR_39) << 8;
 VAR_56->config.si.tile_config |=
  ((VAR_57 & VAR_40) >> VAR_41) << 12;

 FUNC_17(VAR_21, VAR_57);
 FUNC_17(VAR_17, VAR_57);
 FUNC_17(VAR_16, VAR_57);
 FUNC_17(VAR_24, VAR_57);
 FUNC_17(VAR_15 + VAR_13, VAR_57);
 FUNC_17(VAR_15 + VAR_14, VAR_57);
 if (VAR_56->has_uvd) {
  FUNC_17(VAR_48, VAR_57);
  FUNC_17(VAR_50, VAR_57);
  FUNC_17(VAR_49, VAR_57);
 }

 FUNC_23(VAR_56);

 FUNC_21(VAR_56, VAR_56->config.si.max_shader_engines,
      VAR_56->config.si.max_sh_per_se,
      VAR_56->config.si.max_backends_per_se);

 FUNC_22(VAR_56, VAR_56->config.si.max_shader_engines,
       VAR_56->config.si.max_sh_per_se,
       VAR_56->config.si.max_cu_per_sh);

 VAR_56->config.si.active_cus = 0;
 for (VAR_63 = 0; VAR_63 < VAR_56->config.si.max_shader_engines; VAR_63++) {
  for (VAR_64 = 0; VAR_64 < VAR_56->config.si.max_sh_per_se; VAR_64++) {
   VAR_56->config.si.active_cus +=
    FUNC_19(FUNC_20(VAR_56, VAR_63, VAR_64));
  }
 }


 FUNC_17(VAR_12, (FUNC_8(0x16) |
         FUNC_9(0x2b)));
 FUNC_17(VAR_10, FUNC_5(0x30) | FUNC_6(0x60));

 VAR_60 = FUNC_11(VAR_46);
 FUNC_17(VAR_46, VAR_60);

 FUNC_17(VAR_42, FUNC_16(4));

 FUNC_17(VAR_35, (FUNC_14(VAR_56->config.si.sc_prim_fifo_size_frontend) |
     FUNC_12(VAR_56->config.si.sc_prim_fifo_size_backend) |
     FUNC_15(VAR_56->config.si.sc_hiz_tile_fifo_size) |
     FUNC_13(VAR_56->config.si.sc_earlyz_tile_fifo_size)));

 FUNC_17(VAR_55, 1);

 FUNC_17(VAR_11, 0);

 FUNC_17(VAR_43, 0);

 FUNC_17(VAR_36, (FUNC_2(4095) |
       FUNC_3(255)));

 FUNC_17(VAR_53, FUNC_1(VAR_51) |
        FUNC_0(VAR_18));

 FUNC_17(VAR_54, 16);
 FUNC_17(VAR_37, 0);

 FUNC_17(VAR_1, 0);
 FUNC_17(VAR_2, 0);
 FUNC_17(VAR_3, 0);
 FUNC_17(VAR_4, 0);
 FUNC_17(VAR_5, 0);
 FUNC_17(VAR_6, 0);
 FUNC_17(VAR_7, 0);
 FUNC_17(VAR_8, 0);

 VAR_62 = FUNC_11(VAR_27);
 VAR_62 |= VAR_25;
 FUNC_17(VAR_27, VAR_62);

 VAR_61 = FUNC_11(VAR_26);
 FUNC_17(VAR_26, VAR_61);

 FUNC_17(VAR_34, VAR_9 | FUNC_7(3));

 FUNC_24(50);
}
