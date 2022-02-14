
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
struct drm_format_info {int num_planes; int* char_per_block; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_format_info const*,int) ;
 int FUNC_2 (struct drm_format_info const*,int) ;

uint64_t FUNC_3(const struct drm_format_info *VAR_0,
       int VAR_1, unsigned int VAR_2)
{
 if (!VAR_0 || VAR_1 < 0 || VAR_1 >= VAR_0->num_planes)
  return 0;

 return FUNC_0((u64)VAR_2 * VAR_0->char_per_block[VAR_1],
       FUNC_2(VAR_0, VAR_1) *
       FUNC_1(VAR_0, VAR_1));
}
