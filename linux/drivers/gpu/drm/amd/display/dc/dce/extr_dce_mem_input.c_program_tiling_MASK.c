
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int array_mode; int pipe_config; int tile_mode; int tile_split; int tile_aspect; int bank_height; int bank_width; int num_banks; } ;
struct TYPE_4__ {int shaderEnable; int num_pipes; int num_shader_engines; int num_banks; int swizzle; } ;
union dc_tiling_info {TYPE_3__ gfx8; TYPE_1__ gfx9; } ;
struct dce_mem_input {TYPE_2__* masks; } ;
struct TYPE_5__ {scalar_t__ GRPH_ARRAY_MODE; scalar_t__ GRPH_SW_MODE; } ;


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
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
 struct dce_mem_input *VAR_14, const union dc_tiling_info *VAR_15)
{
 if (VAR_14->masks->GRPH_SW_MODE) {
  FUNC_0(VAR_4,
    VAR_12, VAR_15->gfx9.swizzle,
    VAR_7, FUNC_2(VAR_15->gfx9.num_banks),
    VAR_9, FUNC_2(VAR_15->gfx9.num_shader_engines),
    VAR_8, FUNC_2(VAR_15->gfx9.num_pipes),
    VAR_3, 1,
    VAR_11, VAR_15->gfx9.shaderEnable);




 }

 if (VAR_14->masks->GRPH_ARRAY_MODE) {
  FUNC_1(VAR_4,
    VAR_7, VAR_15->gfx8.num_banks,
    VAR_2, VAR_15->gfx8.bank_width,
    VAR_1, VAR_15->gfx8.bank_height,
    VAR_5, VAR_15->gfx8.tile_aspect,
    VAR_13, VAR_15->gfx8.tile_split,
    VAR_6, VAR_15->gfx8.tile_mode,
    VAR_10, VAR_15->gfx8.pipe_config,
    VAR_0, VAR_15->gfx8.array_mode,
    VAR_3, 1);




 }
}
