
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pipe_aligned; int rb_aligned; int meta_linear; int swizzle; int max_compressed_frags; int num_rb_per_se; int num_shader_engines; int pipe_interleave; int num_banks; int num_pipes; } ;
union dc_tiling_info {TYPE_1__ gfx9; } ;
struct hubp {int dummy; } ;
struct dcn10_hubp {int dummy; } ;
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
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_11 ;
 struct dcn10_hubp* FUNC_2 (struct hubp*) ;
 int FUNC_3 (int ) ;

void FUNC_4(
 struct hubp *VAR_12,
 const union dc_tiling_info *VAR_13,
 const enum surface_pixel_format VAR_14)
{
 struct dcn10_hubp *VAR_15 = FUNC_2(VAR_12);

 FUNC_1(VAR_0,
   VAR_5, FUNC_3(VAR_13->gfx9.num_pipes),
   VAR_4, FUNC_3(VAR_13->gfx9.num_banks),
   VAR_9, VAR_13->gfx9.pipe_interleave,
   VAR_7, FUNC_3(VAR_13->gfx9.num_shader_engines),
   VAR_6, FUNC_3(VAR_13->gfx9.num_rb_per_se),
   VAR_2, FUNC_3(VAR_13->gfx9.max_compressed_frags));

 FUNC_0(VAR_1,
   VAR_11, VAR_13->gfx9.swizzle,
   VAR_3, VAR_13->gfx9.meta_linear,
   VAR_10, VAR_13->gfx9.rb_aligned,
   VAR_8, VAR_13->gfx9.pipe_aligned);
}
