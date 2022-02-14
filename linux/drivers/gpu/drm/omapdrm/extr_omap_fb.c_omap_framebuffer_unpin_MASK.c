
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plane {scalar_t__ dma_addr; } ;
struct omap_framebuffer {scalar_t__ pin_count; int lock; struct plane* planes; } ;
struct drm_framebuffer {int * obj; TYPE_1__* format; } ;
struct TYPE_2__ {int num_planes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct omap_framebuffer* FUNC_3 (struct drm_framebuffer*) ;

void FUNC_4(struct drm_framebuffer *VAR_0)
{
 struct omap_framebuffer *VAR_1 = FUNC_3(VAR_0);
 int VAR_2, VAR_3 = VAR_0->format->num_planes;

 FUNC_0(&VAR_1->lock);

 VAR_1->pin_count--;

 if (VAR_1->pin_count > 0) {
  FUNC_1(&VAR_1->lock);
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct plane *VAR_4 = &VAR_1->planes[VAR_2];
  FUNC_2(VAR_0->obj[VAR_2]);
  VAR_4->dma_addr = 0;
 }

 FUNC_1(&VAR_1->lock);
}
