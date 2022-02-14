
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct drm_property_blob {TYPE_1__ base; } ;
struct drm_property {int dummy; } ;
struct drm_mode_object {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_property_blob*) ;
 int FUNC_1 (struct drm_property_blob*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_mode_object*,struct drm_property*,int ) ;
 int FUNC_4 (struct drm_property_blob*) ;
 struct drm_property_blob* FUNC_5 (struct drm_device*,size_t,void const*) ;

int FUNC_6(struct drm_device *VAR_0,
         struct drm_property_blob **VAR_1,
         size_t VAR_2,
         const void *VAR_3,
         struct drm_mode_object *VAR_4,
         struct drm_property *VAR_5)
{
 struct drm_property_blob *VAR_6 = ((void*)0);
 struct drm_property_blob *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_2(VAR_1 == ((void*)0));

 VAR_7 = *VAR_1;

 if (VAR_2 && VAR_3) {
  VAR_6 = FUNC_5(VAR_0, VAR_2, VAR_3);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);
 }

 if (VAR_4) {
  VAR_8 = FUNC_3(VAR_4,
          VAR_5,
          VAR_6 ?
              VAR_6->base.id : 0);
  if (VAR_8 != 0)
   goto err_created;
 }

 FUNC_4(VAR_7);
 *VAR_1 = VAR_6;

 return 0;

err_created:
 FUNC_4(VAR_6);
 return VAR_8;
}
