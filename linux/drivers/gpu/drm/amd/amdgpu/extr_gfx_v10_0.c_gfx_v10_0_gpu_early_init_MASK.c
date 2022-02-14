
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int num_pipes; int max_compress_frags; int num_rb_per_se; int num_se; int pipe_interleave_size; } ;
struct TYPE_5__ {int max_hw_contexts; int sc_prim_fifo_size_frontend; int sc_prim_fifo_size_backend; int sc_earlyz_tile_fifo_size; int max_tile_pipes; int gb_addr_config; TYPE_1__ gb_addr_config_fields; int sc_hiz_tile_fifo_size; } ;
struct TYPE_6__ {TYPE_2__ config; int * funcs; } ;
struct amdgpu_device {int asic_type; TYPE_3__ gfx; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_9)
{
 u32 VAR_10;

 VAR_9->gfx.funcs = &VAR_7;

 switch (VAR_9->asic_type) {
 case 130:
 case 128:
 case 129:
  VAR_9->gfx.config.max_hw_contexts = 8;
  VAR_9->gfx.config.sc_prim_fifo_size_frontend = 0x20;
  VAR_9->gfx.config.sc_prim_fifo_size_backend = 0x100;
  VAR_9->gfx.config.sc_hiz_tile_fifo_size = 0;
  VAR_9->gfx.config.sc_earlyz_tile_fifo_size = 0x4C0;
  VAR_10 = FUNC_2(VAR_1, 0, VAR_8);
  break;
 default:
  FUNC_0();
  break;
 }

 VAR_9->gfx.config.gb_addr_config = VAR_10;

 VAR_9->gfx.config.gb_addr_config_fields.num_pipes = 1 <<
   FUNC_1(VAR_9->gfx.config.gb_addr_config,
          VAR_0, VAR_3);

 VAR_9->gfx.config.max_tile_pipes =
  VAR_9->gfx.config.gb_addr_config_fields.num_pipes;

 VAR_9->gfx.config.gb_addr_config_fields.max_compress_frags = 1 <<
   FUNC_1(VAR_9->gfx.config.gb_addr_config,
          VAR_0, VAR_2);
 VAR_9->gfx.config.gb_addr_config_fields.num_rb_per_se = 1 <<
   FUNC_1(VAR_9->gfx.config.gb_addr_config,
          VAR_0, VAR_4);
 VAR_9->gfx.config.gb_addr_config_fields.num_se = 1 <<
   FUNC_1(VAR_9->gfx.config.gb_addr_config,
          VAR_0, VAR_5);
 VAR_9->gfx.config.gb_addr_config_fields.pipe_interleave_size = 1 << (8 +
   FUNC_1(VAR_9->gfx.config.gb_addr_config,
          VAR_0, VAR_6));
}
