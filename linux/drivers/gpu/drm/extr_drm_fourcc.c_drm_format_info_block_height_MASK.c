
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_format_info {int num_planes; unsigned int* block_h; } ;



unsigned int FUNC_0(const struct drm_format_info *VAR_0,
       int VAR_1)
{
 if (!VAR_0 || VAR_1 < 0 || VAR_1 >= VAR_0->num_planes)
  return 0;

 if (!VAR_0->block_h[VAR_1])
  return 1;
 return VAR_0->block_h[VAR_1];
}
