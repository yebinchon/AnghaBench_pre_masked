
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_4__ {scalar_t__ nbox; int dirty; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_5__ {TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;


 int FUNC_0 (struct drm_device*,struct drm_file*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_mga_private_t *VAR_5 = VAR_2->dev_private;
 drm_mga_sarea_t *VAR_6 = VAR_5->sarea_priv;

 FUNC_0(VAR_2, VAR_4);

 if (VAR_6->nbox > VAR_0)
  VAR_6->nbox = VAR_0;

 FUNC_1(VAR_5);

 FUNC_2(VAR_2);



 VAR_5->sarea_priv->dirty |= VAR_1;

 return 0;
}
