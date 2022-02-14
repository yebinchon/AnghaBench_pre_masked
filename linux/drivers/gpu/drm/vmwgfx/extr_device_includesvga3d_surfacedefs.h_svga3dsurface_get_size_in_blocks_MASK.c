
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* depth; void* height; void* width; } ;
typedef TYPE_2__ surf_size_struct ;
struct TYPE_5__ {int depth; int height; int width; } ;
struct svga3d_surface_desc {TYPE_1__ block_size; } ;


 void* FUNC_0 (void*,int ) ;

__attribute__((used)) static inline void
FUNC_1(const struct svga3d_surface_desc *VAR_0,
     const surf_size_struct *VAR_1,
     surf_size_struct *VAR_2)
{
 VAR_2->width = FUNC_0(VAR_1->width,
        VAR_0->block_size.width);
 VAR_2->height = FUNC_0(VAR_1->height,
         VAR_0->block_size.height);
 VAR_2->depth = FUNC_0(VAR_1->depth,
        VAR_0->block_size.depth);
}
