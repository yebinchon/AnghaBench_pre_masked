
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_format_info {scalar_t__ format; } ;



__attribute__((used)) static const struct drm_format_info *
FUNC_0(const struct drm_format_info VAR_0[],
     int VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].format == VAR_2)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
