
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int u32 ;
struct drm_property {int dummy; } ;
struct drm_prop_enum_list {unsigned long long type; int name; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_property*,unsigned long long,int ) ;
 struct drm_property* FUNC_1 (struct drm_device*,int ,char const*,int) ;
 int FUNC_2 (struct drm_device*,struct drm_property*) ;
 int FUNC_3 (unsigned long long) ;

struct drm_property *FUNC_4(struct drm_device *VAR_1,
       u32 VAR_2, const char *VAR_3,
       const struct drm_prop_enum_list *VAR_4,
       int VAR_5,
       uint64_t VAR_6)
{
 struct drm_property *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10 = FUNC_3(VAR_6);

 VAR_2 |= VAR_0;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_10);
 if (!VAR_7)
  return ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  if (!(VAR_6 & (1ULL << VAR_4[VAR_8].type)))
   continue;

  VAR_9 = FUNC_0(VAR_7,
         VAR_4[VAR_8].type,
         VAR_4[VAR_8].name);
  if (VAR_9) {
   FUNC_2(VAR_1, VAR_7);
   return ((void*)0);
  }
 }

 return VAR_7;
}
