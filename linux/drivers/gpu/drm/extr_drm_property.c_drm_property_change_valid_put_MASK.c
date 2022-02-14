
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property {int dummy; } ;
struct drm_mode_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_mode_object*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_property*,int ) ;
 int FUNC_3 (struct drm_mode_object*) ;

void FUNC_4(struct drm_property *VAR_2,
  struct drm_mode_object *VAR_3)
{
 if (!VAR_3)
  return;

 if (FUNC_2(VAR_2, VAR_1)) {
  FUNC_0(VAR_3);
 } else if (FUNC_2(VAR_2, VAR_0))
  FUNC_1(FUNC_3(VAR_3));
}
