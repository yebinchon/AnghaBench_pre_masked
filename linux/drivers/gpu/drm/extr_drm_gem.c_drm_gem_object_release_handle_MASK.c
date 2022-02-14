
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_gem_object {int vma_node; TYPE_2__* funcs; struct drm_device* dev; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* close ) (struct drm_gem_object*,struct drm_file*) ;} ;
struct TYPE_3__ {int (* gem_close_object ) (struct drm_gem_object*,struct drm_file*) ;} ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*,struct drm_file*) ;
 int FUNC_2 (int *,struct drm_file*) ;
 int FUNC_3 (struct drm_gem_object*,struct drm_file*) ;
 int FUNC_4 (struct drm_gem_object*,struct drm_file*) ;

__attribute__((used)) static int
FUNC_5(int VAR_0, void *VAR_1, void *VAR_2)
{
 struct drm_file *VAR_3 = VAR_2;
 struct drm_gem_object *VAR_4 = VAR_1;
 struct drm_device *VAR_5 = VAR_4->dev;

 if (VAR_4->funcs && VAR_4->funcs->close)
  VAR_4->funcs->close(VAR_4, VAR_3);
 else if (VAR_5->driver->gem_close_object)
  VAR_5->driver->gem_close_object(VAR_4, VAR_3);

 FUNC_1(VAR_4, VAR_3);
 FUNC_2(&VAR_4->vma_node, VAR_3);

 FUNC_0(VAR_4);

 return 0;
}
