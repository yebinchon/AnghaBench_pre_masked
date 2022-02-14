
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_gem_object {TYPE_3__* dev; TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {int (* gem_prime_pin ) (struct drm_gem_object*) ;} ;
struct TYPE_4__ {int (* pin ) (struct drm_gem_object*) ;} ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*) ;

int FUNC_2(struct drm_gem_object *VAR_0)
{
 if (VAR_0->funcs && VAR_0->funcs->pin)
  return VAR_0->funcs->pin(VAR_0);
 else if (VAR_0->dev->driver->gem_prime_pin)
  return VAR_0->dev->driver->gem_prime_pin(VAR_0);
 else
  return 0;
}
