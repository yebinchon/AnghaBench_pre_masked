
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {scalar_t__ dma_buf; } ;
struct TYPE_2__ {int lock; } ;
struct drm_file {TYPE_1__ prime; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct drm_gem_object *VAR_0, struct drm_file *VAR_1)
{




 FUNC_1(&VAR_1->prime.lock);
 if (VAR_0->dma_buf) {
  FUNC_0(&VAR_1->prime,
         VAR_0->dma_buf);
 }
 FUNC_2(&VAR_1->prime.lock);
}
