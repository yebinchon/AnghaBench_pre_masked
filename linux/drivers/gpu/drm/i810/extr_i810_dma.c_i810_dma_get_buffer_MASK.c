
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_buf {int total; int idx; TYPE_2__* dev_private; struct drm_file* file_priv; } ;
struct TYPE_4__ {int granted; int virtual; int request_size; int request_idx; } ;
typedef TYPE_1__ drm_i810_dma_t ;
struct TYPE_5__ {int virtual; } ;
typedef TYPE_2__ drm_i810_buf_priv_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 struct drm_buf* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct drm_buf*) ;
 int FUNC_4 (struct drm_buf*,struct drm_file*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_1, drm_i810_dma_t *VAR_2,
          struct drm_file *VAR_3)
{
 struct drm_buf *VAR_4;
 drm_i810_buf_priv_t *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  FUNC_0("retcode=%d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_4, VAR_3);
 if (VAR_6) {
  FUNC_3(VAR_1, VAR_4);
  FUNC_1("mapbuf failed, retcode %d\n", VAR_6);
  return VAR_6;
 }
 VAR_4->file_priv = VAR_3;
 VAR_5 = VAR_4->dev_private;
 VAR_2->granted = 1;
 VAR_2->request_idx = VAR_4->idx;
 VAR_2->request_size = VAR_4->total;
 VAR_2->virtual = VAR_5->virtual;

 return VAR_6;
}
