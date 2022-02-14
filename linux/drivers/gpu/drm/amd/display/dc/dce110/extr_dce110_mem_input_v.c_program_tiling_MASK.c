
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_banks; int bank_width; int bank_height; int tile_aspect; int tile_split; int tile_mode; int pipe_config; int array_mode; int bank_width_c; int bank_height_c; int tile_aspect_c; int tile_split_c; int tile_mode_c; } ;
union dc_tiling_info {TYPE_1__ gfx8; } ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int ctx; } ;
struct dce_mem_input {TYPE_2__ base; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(
 struct dce_mem_input *VAR_19,
 const union dc_tiling_info *VAR_20,
 const enum surface_pixel_format VAR_21)
{
 uint32_t VAR_22 = 0;

 FUNC_1(VAR_22, VAR_20->gfx8.num_banks,
  VAR_15, VAR_10);

 FUNC_1(VAR_22, VAR_20->gfx8.bank_width,
  VAR_15, VAR_4);

 FUNC_1(VAR_22, VAR_20->gfx8.bank_height,
  VAR_15, VAR_2);

 FUNC_1(VAR_22, VAR_20->gfx8.tile_aspect,
  VAR_15, VAR_7);

 FUNC_1(VAR_22, VAR_20->gfx8.tile_split,
  VAR_15, VAR_13);

 FUNC_1(VAR_22, VAR_20->gfx8.tile_mode,
  VAR_15, VAR_9);

 FUNC_1(VAR_22, VAR_20->gfx8.pipe_config,
  VAR_15, VAR_11);

 FUNC_1(VAR_22, VAR_20->gfx8.array_mode,
  VAR_15, VAR_0);

 FUNC_1(VAR_22, 1,
  VAR_15, VAR_5);

 FUNC_1(VAR_22, 0,
  VAR_15, VAR_14);

 FUNC_0(
  VAR_19->base.ctx,
  VAR_17,
  VAR_22);

 VAR_22 = 0;

 FUNC_1(VAR_22, VAR_20->gfx8.bank_width_c,
  VAR_16, VAR_3);

 FUNC_1(VAR_22, VAR_20->gfx8.bank_height_c,
  VAR_16, VAR_1);

 FUNC_1(VAR_22, VAR_20->gfx8.tile_aspect_c,
  VAR_16, VAR_6);

 FUNC_1(VAR_22, VAR_20->gfx8.tile_split_c,
  VAR_16, VAR_12);

 FUNC_1(VAR_22, VAR_20->gfx8.tile_mode_c,
  VAR_16, VAR_8);

 FUNC_0(
  VAR_19->base.ctx,
  VAR_18,
  VAR_22);
}
