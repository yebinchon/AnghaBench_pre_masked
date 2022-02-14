
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svga3d_surface_desc {int dummy; } ;
typedef size_t SVGA3dSurfaceFormat ;


 size_t FUNC_0 (struct svga3d_surface_desc const*) ;
 size_t VAR_0 ;
 struct svga3d_surface_desc const* VAR_1 ;

__attribute__((used)) static inline const struct svga3d_surface_desc *
FUNC_1(SVGA3dSurfaceFormat VAR_2)
{
 if (VAR_2 < FUNC_0(VAR_1))
  return &VAR_1[VAR_2];

 return &VAR_1[VAR_0];
}
