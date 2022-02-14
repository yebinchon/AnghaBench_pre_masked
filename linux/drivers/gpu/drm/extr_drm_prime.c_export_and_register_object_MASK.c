
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_gem_object {scalar_t__ handle_count; struct dma_buf* dma_buf; TYPE_2__* funcs; } ;
struct drm_device {TYPE_1__* driver; } ;
struct dma_buf {int dummy; } ;
struct TYPE_4__ {struct dma_buf* (* export ) (struct drm_gem_object*,int ) ;} ;
struct TYPE_3__ {struct dma_buf* (* gem_prime_export ) (struct drm_gem_object*,int ) ;} ;


 int VAR_0 ;
 struct dma_buf* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dma_buf*) ;
 struct dma_buf* FUNC_2 (struct drm_gem_object*,int ) ;
 int FUNC_3 (struct dma_buf*) ;
 struct dma_buf* FUNC_4 (struct drm_gem_object*,int ) ;
 struct dma_buf* FUNC_5 (struct drm_gem_object*,int ) ;

__attribute__((used)) static struct dma_buf *FUNC_6(struct drm_device *VAR_1,
        struct drm_gem_object *VAR_2,
        uint32_t VAR_3)
{
 struct dma_buf *VAR_4;


 if (VAR_2->handle_count == 0) {
  VAR_4 = FUNC_0(-VAR_0);
  return VAR_4;
 }

 if (VAR_2->funcs && VAR_2->funcs->export)
  VAR_4 = VAR_2->funcs->export(VAR_2, VAR_3);
 else if (VAR_1->driver->gem_prime_export)
  VAR_4 = VAR_1->driver->gem_prime_export(VAR_2, VAR_3);
 else
  VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_1(VAR_4)) {



  return VAR_4;
 }






 VAR_2->dma_buf = VAR_4;
 FUNC_3(VAR_2->dma_buf);

 return VAR_4;
}
