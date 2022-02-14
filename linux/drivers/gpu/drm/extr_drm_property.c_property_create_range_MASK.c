
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef int u32 ;
struct drm_property {void** values; } ;
struct drm_device {int dummy; } ;


 struct drm_property* FUNC_0 (struct drm_device*,int ,char const*,int) ;

__attribute__((used)) static struct drm_property *FUNC_1(struct drm_device *VAR_0,
        u32 VAR_1, const char *VAR_2,
        uint64_t VAR_3, uint64_t VAR_4)
{
 struct drm_property *VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, 2);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->values[0] = VAR_3;
 VAR_5->values[1] = VAR_4;

 return VAR_5;
}
