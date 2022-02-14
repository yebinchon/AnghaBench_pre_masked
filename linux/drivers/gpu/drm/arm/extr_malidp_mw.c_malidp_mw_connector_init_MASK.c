
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int possible_crtcs; } ;
struct TYPE_8__ {int base; TYPE_2__ encoder; } ;
struct malidp_drm {TYPE_4__ mw_connector; int crtc; TYPE_1__* dev; } ;
struct drm_device {struct malidp_drm* dev_private; } ;
struct TYPE_7__ {int enable_memwrite; } ;
struct TYPE_5__ {TYPE_3__* hw; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,TYPE_4__*,int *,int *,int *,int) ;
 int * FUNC_3 (struct malidp_drm*,int*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct drm_device *VAR_4)
{
 struct malidp_drm *VAR_5 = VAR_4->dev_private;
 u32 *VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_5->dev->hw->enable_memwrite)
  return 0;

 VAR_5->mw_connector.encoder.possible_crtcs = 1 << FUNC_1(&VAR_5->crtc);
 FUNC_0(&VAR_5->mw_connector.base,
     &VAR_2);

 VAR_6 = FUNC_3(VAR_5, &VAR_8);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_4, &VAR_5->mw_connector,
        &VAR_1,
        &VAR_3,
        VAR_6, VAR_8);
 FUNC_4(VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
