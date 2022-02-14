
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_remapped_plane_info {unsigned int width; unsigned int height; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct intel_remapped_plane_info *VAR_0,
     const struct intel_remapped_plane_info *VAR_1)
{
 return VAR_0->width * VAR_0->height + VAR_1->width * VAR_1->height;
}
