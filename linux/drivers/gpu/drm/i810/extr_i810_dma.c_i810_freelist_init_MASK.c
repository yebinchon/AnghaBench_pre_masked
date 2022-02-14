
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf {int total; int bus_address; TYPE_2__* dev_private; } ;
struct TYPE_5__ {scalar_t__ hw_status_page; } ;
typedef TYPE_1__ drm_i810_private_t ;
struct TYPE_7__ {int handle; scalar_t__ mtrr; scalar_t__ flags; int type; int size; int offset; } ;
struct TYPE_6__ {int my_use_idx; TYPE_4__ map; int kernel_virtual; int * in_use; } ;
typedef TYPE_2__ drm_i810_buf_priv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,struct drm_device*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_3, drm_i810_private_t *VAR_4)
{
 struct drm_device_dma *VAR_5 = VAR_3->dma;
 int VAR_6 = 24;
 u32 *VAR_7 = (u32 *) (VAR_4->hw_status_page + VAR_6);
 int VAR_8;

 if (VAR_5->buf_count > 1019) {

  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->buf_count; VAR_8++) {
  struct drm_buf *VAR_9 = VAR_5->buflist[VAR_8];
  drm_i810_buf_priv_t *VAR_10 = VAR_9->dev_private;

  VAR_10->in_use = VAR_7++;
  VAR_10->my_use_idx = VAR_6;
  VAR_6 += 4;

  *VAR_10->in_use = VAR_1;

  VAR_10->map.offset = VAR_9->bus_address;
  VAR_10->map.size = VAR_9->total;
  VAR_10->map.type = VAR_2;
  VAR_10->map.flags = 0;
  VAR_10->map.mtrr = 0;

  FUNC_0(&VAR_10->map, VAR_3);
  VAR_10->kernel_virtual = VAR_10->map.handle;

 }
 return 0;
}
