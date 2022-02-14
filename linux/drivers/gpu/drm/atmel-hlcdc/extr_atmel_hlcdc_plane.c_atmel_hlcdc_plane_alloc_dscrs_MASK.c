
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane {TYPE_1__* dev; } ;
struct atmel_hlcdc_plane_state {struct atmel_hlcdc_dma_channel_dscr** dscrs; } ;
struct atmel_hlcdc_dma_channel_dscr {void* self; int ctrl; void* next; scalar_t__ addr; } ;
struct atmel_hlcdc_dc {int dscrpool; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {struct atmel_hlcdc_dc* dev_private; } ;


 int FUNC_0 (struct atmel_hlcdc_dma_channel_dscr**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atmel_hlcdc_dma_channel_dscr* FUNC_1 (int ,int ,void**) ;
 int FUNC_2 (int ,struct atmel_hlcdc_dma_channel_dscr*,void*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_3,
      struct atmel_hlcdc_plane_state *VAR_4)
{
 struct atmel_hlcdc_dc *VAR_5 = VAR_3->dev->dev_private;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->dscrs); VAR_6++) {
  struct atmel_hlcdc_dma_channel_dscr *VAR_7;
  dma_addr_t VAR_8;

  VAR_7 = FUNC_1(VAR_5->dscrpool, VAR_2, &VAR_8);
  if (!VAR_7)
   goto err;

  VAR_7->addr = 0;
  VAR_7->next = VAR_8;
  VAR_7->self = VAR_8;
  VAR_7->ctrl = VAR_0;

  VAR_4->dscrs[VAR_6] = VAR_7;
 }

 return 0;

err:
 for (VAR_6--; VAR_6 >= 0; VAR_6--) {
  FUNC_2(VAR_5->dscrpool, VAR_4->dscrs[VAR_6],
         VAR_4->dscrs[VAR_6]->self);
 }

 return -VAR_1;
}
