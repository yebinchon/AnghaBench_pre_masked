
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_drm_front_drm_info {int front_info; } ;
struct drm_mode_create_dumb {int pitch; int width; int bpp; int size; int height; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct xen_drm_front_drm_info* dev_private; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (int ,int ,int,int,int,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_11(struct drm_file *VAR_0,
       struct drm_device *VAR_1,
       struct drm_mode_create_dumb *VAR_2)
{
 struct xen_drm_front_drm_info *VAR_3 = VAR_1->dev_private;
 struct drm_gem_object *VAR_4;
 int VAR_5;
 VAR_2->pitch = FUNC_0(VAR_2->width * VAR_2->bpp, 8);
 VAR_2->size = VAR_2->pitch * VAR_2->height;

 VAR_4 = FUNC_9(VAR_1, VAR_2->size);
 if (FUNC_2(VAR_4)) {
  VAR_5 = FUNC_3(VAR_4);
  goto fail;
 }

 VAR_5 = FUNC_6(VAR_3->front_info,
     FUNC_8(VAR_4),
     VAR_2->width, VAR_2->height, VAR_2->bpp,
     VAR_2->size,
     FUNC_10(VAR_4));
 if (VAR_5)
  goto fail_backend;


 VAR_5 = FUNC_4(VAR_0, VAR_4, &VAR_2->handle);
 if (VAR_5)
  goto fail_handle;


 FUNC_5(VAR_4);
 return 0;

fail_handle:
 FUNC_7(VAR_3->front_info,
       FUNC_8(VAR_4));
fail_backend:

 FUNC_5(VAR_4);
fail:
 FUNC_1("Failed to create dumb buffer: %d\n", VAR_5);
 return VAR_5;
}
