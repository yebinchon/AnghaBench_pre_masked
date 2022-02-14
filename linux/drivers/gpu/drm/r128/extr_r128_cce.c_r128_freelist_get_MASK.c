
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {TYPE_1__* dev_private; struct drm_device_dma* dma; } ;
struct drm_buf {scalar_t__ pending; TYPE_2__* dev_private; int file_priv; } ;
struct TYPE_3__ {int usec_timeout; } ;
typedef TYPE_1__ drm_r128_private_t ;
struct TYPE_4__ {scalar_t__ age; } ;
typedef TYPE_2__ drm_r128_buf_priv_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static struct drm_buf *FUNC_3(struct drm_device * VAR_1)
{
 struct drm_device_dma *VAR_2 = VAR_1->dma;
 drm_r128_private_t *VAR_3 = VAR_1->dev_private;
 drm_r128_buf_priv_t *VAR_4;
 struct drm_buf *VAR_5;
 int VAR_6, VAR_7;



 for (VAR_6 = 0; VAR_6 < VAR_2->buf_count; VAR_6++) {
  VAR_5 = VAR_2->buflist[VAR_6];
  VAR_4 = VAR_5->dev_private;
  if (!VAR_5->file_priv)
   return VAR_5;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->usec_timeout; VAR_7++) {
  u32 VAR_8 = FUNC_1(VAR_0);

  for (VAR_6 = 0; VAR_6 < VAR_2->buf_count; VAR_6++) {
   VAR_5 = VAR_2->buflist[VAR_6];
   VAR_4 = VAR_5->dev_private;
   if (VAR_5->pending && VAR_4->age <= VAR_8) {



    VAR_5->pending = 0;
    return VAR_5;
   }
  }
  FUNC_2(1);
 }

 FUNC_0("returning NULL!\n");
 return ((void*)0);
}
