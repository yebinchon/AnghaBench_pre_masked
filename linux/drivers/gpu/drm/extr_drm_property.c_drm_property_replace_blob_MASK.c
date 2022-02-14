
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property_blob {int dummy; } ;


 int FUNC_0 (struct drm_property_blob*) ;
 int FUNC_1 (struct drm_property_blob*) ;

bool FUNC_2(struct drm_property_blob **VAR_0,
          struct drm_property_blob *VAR_1)
{
 struct drm_property_blob *VAR_2 = *VAR_0;

 if (VAR_2 == VAR_1)
  return 0;

 FUNC_1(VAR_2);
 if (VAR_1)
  FUNC_0(VAR_1);
 *VAR_0 = VAR_1;
 return 1;
}
