
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int in_use; } ;
typedef TYPE_1__ drm_i810_buf_priv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static struct drm_buf *FUNC_1(struct drm_device * VAR_2)
{
 struct drm_device_dma *VAR_3 = VAR_2->dma;
 int VAR_4;
 int VAR_5;



 for (VAR_4 = 0; VAR_4 < VAR_3->buf_count; VAR_4++) {
  struct drm_buf *VAR_6 = VAR_3->buflist[VAR_4];
  drm_i810_buf_priv_t *VAR_7 = VAR_6->dev_private;

  VAR_5 = FUNC_0(VAR_7->in_use, VAR_1,
          VAR_0);
  if (VAR_5 == VAR_1)
   return VAR_6;
 }
 return ((void*)0);
}
