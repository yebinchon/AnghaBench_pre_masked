
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {int dev_private; struct drm_device_dma* dma; } ;
struct drm_buf {struct drm_file* file_priv; TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ currently_mapped; int in_use; } ;
typedef TYPE_1__ drm_i810_buf_priv_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct drm_device*) ;

void FUNC_3(struct drm_device *VAR_4,
     struct drm_file *VAR_5)
{
 struct drm_device_dma *VAR_6 = VAR_4->dma;
 int VAR_7;

 if (!VAR_6)
  return;
 if (!VAR_4->dev_private)
  return;
 if (!VAR_6->buflist)
  return;

 FUNC_2(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_6->buf_count; VAR_7++) {
  struct drm_buf *VAR_8 = VAR_6->buflist[VAR_7];
  drm_i810_buf_priv_t *VAR_9 = VAR_8->dev_private;

  if (VAR_8->file_priv == VAR_5 && VAR_9) {
   int VAR_10 = FUNC_1(VAR_9->in_use, VAR_0,
        VAR_1);

   if (VAR_10 == VAR_0)
    FUNC_0("reclaimed from client\n");
   if (VAR_9->currently_mapped == VAR_2)
    VAR_9->currently_mapped = VAR_3;
  }
 }
}
