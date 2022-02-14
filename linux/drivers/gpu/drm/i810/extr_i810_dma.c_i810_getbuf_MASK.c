
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_5__ {int last_dispatch; } ;
typedef TYPE_1__ drm_i810_sarea_t ;
struct TYPE_6__ {scalar_t__ sarea_priv; scalar_t__* hw_status_page; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_7__ {scalar_t__ granted; } ;
typedef TYPE_3__ drm_i810_dma_t ;


 int FUNC_0 (char*,int ,int,scalar_t__) ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*,TYPE_3__*,struct drm_file*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_1, void *VAR_2,
         struct drm_file *VAR_3)
{
 int VAR_4 = 0;
 drm_i810_dma_t *VAR_5 = VAR_2;
 drm_i810_private_t *VAR_6 = (drm_i810_private_t *) VAR_1->dev_private;
 u32 *VAR_7 = VAR_6->hw_status_page;
 drm_i810_sarea_t *VAR_8 = (drm_i810_sarea_t *)
     VAR_6->sarea_priv;

 FUNC_1(VAR_1, VAR_3);

 VAR_5->granted = 0;

 VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_3);

 FUNC_0("i810_dma: %d returning %d, granted = %d\n",
    FUNC_3(VAR_0), VAR_4, VAR_5->granted);

 VAR_8->last_dispatch = (int)VAR_7[5];

 return VAR_4;
}
