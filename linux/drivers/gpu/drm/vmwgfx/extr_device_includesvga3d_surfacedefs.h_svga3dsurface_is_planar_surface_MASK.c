
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svga3d_surface_desc {int block_desc; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(const struct svga3d_surface_desc *VAR_1)
{
 return (VAR_1->block_desc & VAR_0) != 0;
}
