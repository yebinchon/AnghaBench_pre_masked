
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_destroy_dumb {int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,struct drm_file*) ;

int FUNC_1(struct drm_device *VAR_0,
    void *VAR_1, struct drm_file *VAR_2)
{
 struct drm_mode_destroy_dumb *VAR_3 = VAR_1;

 return FUNC_0(VAR_0, VAR_3->handle, VAR_2);
}
