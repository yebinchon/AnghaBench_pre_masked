
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u32 ;
struct TYPE_2__ {int width; int height; int depth; } ;
struct svga3d_surface_desc {int const bytes_per_block; TYPE_1__ block_size; } ;
typedef int SVGA3dSurfaceFormat ;


 int const FUNC_0 (int const,int const) ;
 struct svga3d_surface_desc* FUNC_1 (int ) ;

__attribute__((used)) static inline u32
FUNC_2(SVGA3dSurfaceFormat VAR_0,
          u32 VAR_1, u32 VAR_2,
          u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 const struct svga3d_surface_desc *VAR_6 = FUNC_1(VAR_0);
 const u32 VAR_7 = VAR_6->block_size.width, VAR_8 = VAR_6->block_size.height;
 const u32 VAR_9 = VAR_6->block_size.depth;
 const u32 VAR_10 = FUNC_0(VAR_1, VAR_7) *
         VAR_6->bytes_per_block;
 const u32 VAR_11 = FUNC_0(VAR_2, VAR_8) * VAR_10;
 const u32 VAR_12 = (VAR_5 / VAR_9 * VAR_11 +
       VAR_4 / VAR_8 * VAR_10 +
       VAR_3 / VAR_7 * VAR_6->bytes_per_block);
 return VAR_12;
}
