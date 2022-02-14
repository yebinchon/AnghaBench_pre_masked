
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_property {int dummy; } ;
struct drm_prop_enum_list {int name; int type; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_property*,int ,int ) ;
 struct drm_property* FUNC_1 (struct drm_device*,int ,char const*,int) ;
 int FUNC_2 (struct drm_device*,struct drm_property*) ;

struct drm_property *FUNC_3(struct drm_device *VAR_1,
           u32 VAR_2, const char *VAR_3,
           const struct drm_prop_enum_list *VAR_4,
           int VAR_5)
{
 struct drm_property *VAR_6;
 int VAR_7, VAR_8;

 VAR_2 |= VAR_0;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_8 = FUNC_0(VAR_6,
         VAR_4[VAR_7].type,
         VAR_4[VAR_7].name);
  if (VAR_8) {
   FUNC_2(VAR_1, VAR_6);
   return ((void*)0);
  }
 }

 return VAR_6;
}
