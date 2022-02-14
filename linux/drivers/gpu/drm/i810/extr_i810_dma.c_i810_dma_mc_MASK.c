
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_file {int dummy; } ;
struct drm_device_dma {size_t buf_count; int * buflist; } ;
struct drm_device {scalar_t__ dev_private; struct drm_device_dma* dma; } ;
struct TYPE_4__ {int last_dispatch; scalar_t__ last_enqueue; } ;
typedef TYPE_1__ drm_i810_sarea_t ;
struct TYPE_5__ {scalar_t__ counter; scalar_t__ sarea_priv; scalar_t__* hw_status_page; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_6__ {size_t idx; int last_render; int used; } ;
typedef TYPE_3__ drm_i810_mc_t ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_file*) ;
 int FUNC_1 (struct drm_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 struct drm_device_dma *VAR_4 = VAR_1->dma;
 drm_i810_private_t *VAR_5 = (drm_i810_private_t *) VAR_1->dev_private;
 u32 *VAR_6 = VAR_5->hw_status_page;
 drm_i810_sarea_t *VAR_7 = (drm_i810_sarea_t *)
     VAR_5->sarea_priv;
 drm_i810_mc_t *VAR_8 = VAR_2;

 FUNC_0(VAR_1, VAR_3);

 if (VAR_8->idx >= VAR_4->buf_count || VAR_8->idx < 0)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_4->buflist[VAR_8->idx], VAR_8->used,
        VAR_8->last_render);

 VAR_7->last_enqueue = VAR_5->counter - 1;
 VAR_7->last_dispatch = (int)VAR_6[5];

 return 0;
}
