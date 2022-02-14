
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct drm_property {int dev; } ;
struct drm_mode_object {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_mode_object*,struct drm_property*,int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct drm_mode_object *VAR_0,
      struct drm_property *VAR_1, uint64_t *VAR_2)
{
 FUNC_0(FUNC_2(VAR_1->dev));

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
