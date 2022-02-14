
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_gem_object {TYPE_3__* dev; TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {void* (* gem_prime_vmap ) (struct drm_gem_object*) ;} ;
struct TYPE_4__ {void* (* vmap ) (struct drm_gem_object*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct drm_gem_object*) ;
 void* FUNC_2 (struct drm_gem_object*) ;

void *FUNC_3(struct drm_gem_object *VAR_2)
{
 void *VAR_3;

 if (VAR_2->funcs && VAR_2->funcs->vmap)
  VAR_3 = VAR_2->funcs->vmap(VAR_2);
 else if (VAR_2->dev->driver->gem_prime_vmap)
  VAR_3 = VAR_2->dev->driver->gem_prime_vmap(VAR_2);
 else
  VAR_3 = FUNC_0(-VAR_1);

 if (!VAR_3)
  VAR_3 = FUNC_0(-VAR_0);

 return VAR_3;
}
