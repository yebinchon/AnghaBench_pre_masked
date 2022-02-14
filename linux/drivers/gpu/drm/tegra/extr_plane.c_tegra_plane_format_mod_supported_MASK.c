
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct drm_plane {int dummy; } ;
struct drm_format_info {int num_planes; } ;


 scalar_t__ VAR_0 ;
 struct drm_format_info* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct drm_plane *VAR_1,
          uint32_t VAR_2,
          uint64_t VAR_3)
{
 const struct drm_format_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 == VAR_0)
  return 1;

 if (VAR_4->num_planes == 1)
  return 1;

 return 0;
}
