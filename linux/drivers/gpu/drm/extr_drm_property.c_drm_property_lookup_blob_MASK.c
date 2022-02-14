
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_property_blob {int dummy; } ;
struct drm_mode_object {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_mode_object* FUNC_0 (struct drm_device*,int *,int ,int ) ;
 struct drm_property_blob* FUNC_1 (struct drm_mode_object*) ;

struct drm_property_blob *FUNC_2(struct drm_device *VAR_1,
                uint32_t VAR_2)
{
 struct drm_mode_object *VAR_3;
 struct drm_property_blob *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(VAR_1, ((void*)0), VAR_2, VAR_0);
 if (VAR_3)
  VAR_4 = FUNC_1(VAR_3);
 return VAR_4;
}
