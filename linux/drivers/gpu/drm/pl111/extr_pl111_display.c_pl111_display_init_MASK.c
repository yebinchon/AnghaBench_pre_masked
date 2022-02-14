
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pl111_drm_dev_private {int connector; TYPE_1__* variant; int pipe; } ;
struct drm_device {struct pl111_drm_dev_private* dev_private; } ;
struct TYPE_5__ {int disable_vblank; int enable_vblank; } ;
struct TYPE_4__ {int nformats; int formats; int broken_vblank; } ;


 int FUNC_0 (struct drm_device*,int *,TYPE_2__*,int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct drm_device*) ;

int FUNC_2(struct drm_device *VAR_3)
{
 struct pl111_drm_dev_private *VAR_4 = VAR_3->dev_private;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4->variant->broken_vblank) {
  VAR_2.enable_vblank = VAR_1;
  VAR_2.disable_vblank = VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3, &VAR_4->pipe,
        &VAR_2,
        VAR_4->variant->formats,
        VAR_4->variant->nformats,
        ((void*)0),
        VAR_4->connector);
 if (VAR_5)
  return VAR_5;

 return 0;
}
