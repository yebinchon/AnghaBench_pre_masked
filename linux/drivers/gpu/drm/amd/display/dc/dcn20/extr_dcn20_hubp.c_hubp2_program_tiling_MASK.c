
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swizzle; int max_compressed_frags; int pipe_interleave; int num_pipes; } ;
union dc_tiling_info {TYPE_1__ gfx9; } ;
struct dcn20_hubp {int dummy; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
 struct dcn20_hubp *VAR_9,
 const union dc_tiling_info *VAR_10,
 const enum surface_pixel_format VAR_11)
{
 FUNC_0(VAR_0,
   VAR_4, FUNC_2(VAR_10->gfx9.num_pipes),
   VAR_6, VAR_10->gfx9.pipe_interleave,
   VAR_2, FUNC_2(VAR_10->gfx9.max_compressed_frags));

 FUNC_1(VAR_1,
   VAR_8, VAR_10->gfx9.swizzle,
   VAR_3, 0,
   VAR_7, 0,
   VAR_5, 0);
}
