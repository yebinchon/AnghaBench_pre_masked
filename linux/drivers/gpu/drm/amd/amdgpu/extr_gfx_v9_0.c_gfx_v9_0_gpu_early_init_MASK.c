
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_pipes; int num_banks; int max_compress_frags; int num_rb_per_se; int num_se; int pipe_interleave_size; } ;
struct TYPE_6__ {int max_hw_contexts; int sc_prim_fifo_size_frontend; int sc_prim_fifo_size_backend; int sc_hiz_tile_fifo_size; int sc_earlyz_tile_fifo_size; int gb_addr_config; int max_tile_pipes; TYPE_1__ gb_addr_config_fields; } ;
struct TYPE_5__ {TYPE_3__ config; int * funcs; } ;
struct amdgpu_device {int asic_type; int rev_id; TYPE_2__ gfx; } ;


 int FUNC_0 () ;






 int FUNC_1 (char*) ;
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
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_14)
{
 u32 VAR_15;
 int VAR_16;

 VAR_14->gfx.funcs = &VAR_12;

 switch (VAR_14->asic_type) {
 case 130:
  VAR_14->gfx.config.max_hw_contexts = 8;
  VAR_14->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_14->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_14->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_14->gfx.config.sc_earlyz_tile_fifo_size = 0x4C0;
  VAR_15 = VAR_10;
  break;
 case 129:
  VAR_14->gfx.config.max_hw_contexts = 8;
  VAR_14->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_14->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_14->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_14->gfx.config.sc_earlyz_tile_fifo_size = 0x4C0;
  VAR_15 = VAR_11;
  FUNC_1("fix gfx.config for vega12\n");
  break;
 case 128:
  VAR_14->gfx.config.max_hw_contexts = 8;
  VAR_14->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_14->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_14->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_14->gfx.config.sc_earlyz_tile_fifo_size = 0x4C0;
  VAR_15 = FUNC_3(VAR_1, 0, VAR_13);
  VAR_15 &= ~0xf3e777ff;
  VAR_15 |= 0x22014042;

  VAR_16 = FUNC_4(VAR_14);
  if (VAR_16)
   return VAR_16;
  break;
 case 132:
  VAR_14->gfx.config.max_hw_contexts = 8;
  VAR_14->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_14->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_14->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_14->gfx.config.sc_earlyz_tile_fifo_size = 0x4C0;
  if (VAR_14->rev_id >= 8)
   VAR_15 = VAR_8;
  else
   VAR_15 = VAR_9;
  break;
 case 133:
  VAR_14->gfx.config.max_hw_contexts = 8;
  VAR_14->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_14->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_14->gfx.config.sc_hiz_tile_fifo_size = 0x30;
  VAR_14->gfx.config.sc_earlyz_tile_fifo_size = 0x4C0;
  VAR_15 = FUNC_3(VAR_1, 0, VAR_13);
  VAR_15 &= ~0xf3e777ff;
  VAR_15 |= 0x22014042;
  break;
 case 131:
  VAR_14->gfx.config.max_hw_contexts = 8;
  VAR_14->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_14->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_14->gfx.config.sc_hiz_tile_fifo_size = 0x80;
  VAR_14->gfx.config.sc_earlyz_tile_fifo_size = 0x4C0;
  VAR_15 = FUNC_3(VAR_1, 0, VAR_13);
  VAR_15 &= ~0xf3e777ff;
  VAR_15 |= 0x22010042;
  break;
 default:
  FUNC_0();
  break;
 }

 VAR_14->gfx.config.gb_addr_config = VAR_15;

 VAR_14->gfx.config.gb_addr_config_fields.num_pipes = 1 <<
   FUNC_2(
     VAR_14->gfx.config.gb_addr_config,
     VAR_0,
     VAR_4);

 VAR_14->gfx.config.max_tile_pipes =
  VAR_14->gfx.config.gb_addr_config_fields.num_pipes;

 VAR_14->gfx.config.gb_addr_config_fields.num_banks = 1 <<
   FUNC_2(
     VAR_14->gfx.config.gb_addr_config,
     VAR_0,
     VAR_3);
 VAR_14->gfx.config.gb_addr_config_fields.max_compress_frags = 1 <<
   FUNC_2(
     VAR_14->gfx.config.gb_addr_config,
     VAR_0,
     VAR_2);
 VAR_14->gfx.config.gb_addr_config_fields.num_rb_per_se = 1 <<
   FUNC_2(
     VAR_14->gfx.config.gb_addr_config,
     VAR_0,
     VAR_5);
 VAR_14->gfx.config.gb_addr_config_fields.num_se = 1 <<
   FUNC_2(
     VAR_14->gfx.config.gb_addr_config,
     VAR_0,
     VAR_6);
 VAR_14->gfx.config.gb_addr_config_fields.pipe_interleave_size = 1 << (8 +
   FUNC_2(
     VAR_14->gfx.config.gb_addr_config,
     VAR_0,
     VAR_7));

 return 0;
}
