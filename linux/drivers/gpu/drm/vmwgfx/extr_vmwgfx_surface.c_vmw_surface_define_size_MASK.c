
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmw_surface_define {int dummy; } ;
struct vmw_surface {int num_sizes; } ;
typedef int SVGA3dSize ;



__attribute__((used)) static inline uint32_t FUNC_0(const struct vmw_surface *VAR_0)
{
 return sizeof(struct vmw_surface_define) + VAR_0->num_sizes *
  sizeof(SVGA3dSize);
}
