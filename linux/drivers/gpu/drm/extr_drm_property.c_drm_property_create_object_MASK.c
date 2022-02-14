
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct drm_property {int * values; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_property* FUNC_1 (struct drm_device*,int,char const*,int) ;

struct drm_property *FUNC_2(struct drm_device *VAR_2,
      u32 VAR_3, const char *VAR_4,
      uint32_t VAR_5)
{
 struct drm_property *VAR_6;

 VAR_3 |= VAR_1;

 if (FUNC_0(!(VAR_3 & VAR_0)))
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, 1);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->values[0] = VAR_5;

 return VAR_6;
}
