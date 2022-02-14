
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {int * dev_private; int pdev; scalar_t__ irq_enabled; struct drm_device_dma* dma; } ;
struct drm_buf {scalar_t__ total; TYPE_3__* dev_private; } ;
struct TYPE_4__ {int map; scalar_t__ virtual_start; } ;
struct TYPE_5__ {int dma_status_page; scalar_t__ hw_status_page; TYPE_1__ ring; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_6__ {int map; scalar_t__ kernel_virtual; } ;
typedef TYPE_3__ drm_i810_buf_priv_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *,struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2)
{
 struct drm_device_dma *VAR_3 = VAR_2->dma;





 if (FUNC_0(VAR_2, VAR_0) && VAR_2->irq_enabled)
  FUNC_1(VAR_2);

 if (VAR_2->dev_private) {
  int VAR_4;
  drm_i810_private_t *VAR_5 =
      (drm_i810_private_t *) VAR_2->dev_private;

  if (VAR_5->ring.virtual_start)
   FUNC_2(&VAR_5->ring.map, VAR_2);
  if (VAR_5->hw_status_page) {
   FUNC_4(VAR_2->pdev, VAR_1,
         VAR_5->hw_status_page,
         VAR_5->dma_status_page);
  }
  FUNC_3(VAR_2->dev_private);
  VAR_2->dev_private = ((void*)0);

  for (VAR_4 = 0; VAR_4 < VAR_3->buf_count; VAR_4++) {
   struct drm_buf *VAR_6 = VAR_3->buflist[VAR_4];
   drm_i810_buf_priv_t *VAR_7 = VAR_6->dev_private;

   if (VAR_7->kernel_virtual && VAR_6->total)
    FUNC_2(&VAR_7->map, VAR_2);
  }
 }
 return 0;
}
