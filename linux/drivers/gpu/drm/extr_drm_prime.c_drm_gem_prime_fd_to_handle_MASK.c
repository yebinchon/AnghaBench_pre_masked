
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_gem_object {struct drm_gem_object* dma_buf; } ;
struct TYPE_5__ {int lock; } ;
struct drm_file {TYPE_2__ prime; } ;
struct drm_device {int object_name_lock; TYPE_1__* driver; } ;
struct dma_buf {struct dma_buf* dma_buf; } ;
struct TYPE_4__ {struct drm_gem_object* (* gem_prime_import ) (struct drm_device*,struct drm_gem_object*) ;} ;


 scalar_t__ FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (int) ;
 struct drm_gem_object* FUNC_3 (int) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_6 (struct drm_file*,int ) ;
 int FUNC_7 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_8 (struct drm_device*,struct drm_gem_object*) ;
 int FUNC_9 (TYPE_2__*,struct drm_gem_object*,int ) ;
 int FUNC_10 (TYPE_2__*,struct drm_gem_object*,int *) ;
 int FUNC_11 (struct drm_gem_object*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct drm_gem_object* FUNC_14 (struct drm_device*,struct drm_gem_object*) ;

int FUNC_15(struct drm_device *VAR_0,
          struct drm_file *VAR_1, int VAR_2,
          uint32_t *VAR_3)
{
 struct dma_buf *VAR_4;
 struct drm_gem_object *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_12(&VAR_1->prime.lock);

 VAR_6 = FUNC_10(&VAR_1->prime,
   VAR_4, VAR_3);
 if (VAR_6 == 0)
  goto out_put;


 FUNC_12(&VAR_0->object_name_lock);
 if (VAR_0->driver->gem_prime_import)
  VAR_5 = VAR_0->driver->gem_prime_import(VAR_0, VAR_4);
 else
  VAR_5 = FUNC_8(VAR_0, VAR_4);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  goto out_unlock;
 }

 if (VAR_5->dma_buf) {
  FUNC_2(VAR_5->dma_buf != VAR_4);
 } else {
  VAR_5->dma_buf = VAR_4;
  FUNC_11(VAR_4);
 }


 VAR_6 = FUNC_5(VAR_1, VAR_5, VAR_3);
 FUNC_7(VAR_5);
 if (VAR_6)
  goto out_put;

 VAR_6 = FUNC_9(&VAR_1->prime,
   VAR_4, *VAR_3);
 FUNC_13(&VAR_1->prime.lock);
 if (VAR_6)
  goto fail;

 FUNC_4(VAR_4);

 return 0;

fail:



 FUNC_6(VAR_1, *VAR_3);
 FUNC_4(VAR_4);
 return VAR_6;

out_unlock:
 FUNC_13(&VAR_0->object_name_lock);
out_put:
 FUNC_13(&VAR_1->prime.lock);
 FUNC_4(VAR_4);
 return VAR_6;
}
