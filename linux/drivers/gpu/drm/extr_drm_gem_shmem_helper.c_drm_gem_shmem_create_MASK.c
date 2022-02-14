
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_gem_shmem_object {int madv_list; int vmap_lock; int pages_lock; } ;
struct drm_gem_object {TYPE_2__* filp; int * funcs; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_4__ {int f_mapping; } ;
struct TYPE_3__ {struct drm_gem_object* (* gem_create_object ) (struct drm_device*,size_t) ;} ;


 int VAR_0 ;
 struct drm_gem_shmem_object* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_device*,struct drm_gem_object*,size_t) ;
 int FUNC_5 (struct drm_gem_object*) ;
 int VAR_5 ;
 int FUNC_6 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 struct drm_gem_object* FUNC_10 (struct drm_device*,size_t) ;
 struct drm_gem_shmem_object* FUNC_11 (struct drm_gem_object*) ;

struct drm_gem_shmem_object *FUNC_12(struct drm_device *VAR_6, size_t VAR_7)
{
 struct drm_gem_shmem_object *VAR_8;
 struct drm_gem_object *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_7);

 if (VAR_6->driver->gem_create_object)
  VAR_9 = VAR_6->driver->gem_create_object(VAR_6, VAR_7);
 else
  VAR_9 = FUNC_7(sizeof(*VAR_8), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 if (!VAR_9->funcs)
  VAR_9->funcs = &VAR_5;

 VAR_10 = FUNC_4(VAR_6, VAR_9, VAR_7);
 if (VAR_10)
  goto err_free;

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  goto err_release;

 VAR_8 = FUNC_11(VAR_9);
 FUNC_9(&VAR_8->pages_lock);
 FUNC_9(&VAR_8->vmap_lock);
 FUNC_1(&VAR_8->madv_list);
 FUNC_8(VAR_9->filp->f_mapping, VAR_1 |
        VAR_4 | VAR_3);

 return VAR_8;

err_release:
 FUNC_5(VAR_9);
err_free:
 FUNC_6(VAR_9);

 return FUNC_0(VAR_10);
}
