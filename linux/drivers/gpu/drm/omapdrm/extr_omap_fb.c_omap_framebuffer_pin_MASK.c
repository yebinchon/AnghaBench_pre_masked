
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plane {scalar_t__ dma_addr; } ;
struct omap_framebuffer {scalar_t__ pin_count; int lock; struct plane* planes; } ;
struct drm_framebuffer {int * obj; TYPE_1__* format; } ;
struct TYPE_2__ {int num_planes; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ) ;
 struct omap_framebuffer* FUNC_5 (struct drm_framebuffer*) ;

int FUNC_6(struct drm_framebuffer *VAR_1)
{
 struct omap_framebuffer *VAR_2 = FUNC_5(VAR_1);
 int VAR_3, VAR_4, VAR_5 = VAR_1->format->num_planes;

 FUNC_0(&VAR_2->lock);

 if (VAR_2->pin_count > 0) {
  VAR_2->pin_count++;
  FUNC_1(&VAR_2->lock);
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  struct plane *VAR_6 = &VAR_2->planes[VAR_4];
  VAR_3 = FUNC_3(VAR_1->obj[VAR_4], &VAR_6->dma_addr);
  if (VAR_3)
   goto fail;
  FUNC_2(VAR_1->obj[VAR_4], VAR_0);
 }

 VAR_2->pin_count++;

 FUNC_1(&VAR_2->lock);

 return 0;

fail:
 for (VAR_4--; VAR_4 >= 0; VAR_4--) {
  struct plane *VAR_7 = &VAR_2->planes[VAR_4];
  FUNC_4(VAR_1->obj[VAR_4]);
  VAR_7->dma_addr = 0;
 }

 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
