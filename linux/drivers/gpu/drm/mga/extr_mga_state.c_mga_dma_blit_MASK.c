
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_7__ {scalar_t__ nbox; int dirty; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_8__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_9__ {int dstorg; int srcorg; } ;
typedef TYPE_3__ drm_mga_blit_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct drm_device*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_mga_private_t *VAR_6 = VAR_3->dev_private;
 drm_mga_sarea_t *VAR_7 = VAR_6->sarea_priv;
 drm_mga_blit_t *VAR_8 = VAR_4;
 FUNC_0("\n");

 FUNC_1(VAR_3, VAR_5);

 if (VAR_7->nbox > VAR_1)
  VAR_7->nbox = VAR_1;

 if (FUNC_4(VAR_6, VAR_8->srcorg, VAR_8->dstorg))
  return -VAR_0;

 FUNC_2(VAR_6);

 FUNC_3(VAR_3, VAR_8);



 VAR_6->sarea_priv->dirty |= VAR_2;

 return 0;
}
