
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_agp_binding {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_agp_binding*) ;

int FUNC_1(struct drm_device *VAR_0, void *VAR_1,
    struct drm_file *VAR_2)
{
 struct drm_agp_binding *VAR_3 = VAR_1;

 return FUNC_0(VAR_0, VAR_3);
}
