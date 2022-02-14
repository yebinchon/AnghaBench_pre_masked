
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device_dma {int buf_count; TYPE_1__** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct TYPE_2__ {int list; struct drm_file* file_priv; } ;



 int VAR_0 ;

 int FUNC_0 (struct drm_device*,TYPE_1__*) ;

void FUNC_1(struct drm_device *VAR_1,
    struct drm_file *VAR_2)
{
 struct drm_device_dma *VAR_3 = VAR_1->dma;
 int VAR_4;

 if (!VAR_3)
  return;
 for (VAR_4 = 0; VAR_4 < VAR_3->buf_count; VAR_4++) {
  if (VAR_3->buflist[VAR_4]->file_priv == VAR_2) {
   switch (VAR_3->buflist[VAR_4]->list) {
   case 129:
    FUNC_0(VAR_1, VAR_3->buflist[VAR_4]);
    break;
   case 128:
    VAR_3->buflist[VAR_4]->list = VAR_0;
    break;
   default:

    break;
   }
  }
 }
}
