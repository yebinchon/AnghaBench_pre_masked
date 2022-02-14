
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gma_encoder {int dummy; } ;
struct drm_psb_private {int is_lvds_on; TYPE_1__* ops; } ;
struct drm_device {TYPE_2__* pdev; struct drm_psb_private* dev_private; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* lvds_bl_power ) (struct drm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_5,
    struct gma_encoder *VAR_6,
    bool VAR_7)
{
 u32 VAR_8;
 struct drm_psb_private *VAR_9 = VAR_5->dev_private;

 if (!FUNC_2(VAR_5, 1))
  return;

 if (VAR_7) {
  FUNC_1(VAR_1, FUNC_0(VAR_1) |
     VAR_0);
  do {
   VAR_8 = FUNC_0(VAR_4);
  } while ((VAR_8 & (VAR_2 | VAR_3)) == VAR_3);
  VAR_9->is_lvds_on = 1;
  if (VAR_9->ops->lvds_bl_power)
   VAR_9->ops->lvds_bl_power(VAR_5, 1);
 } else {
  if (VAR_9->ops->lvds_bl_power)
   VAR_9->ops->lvds_bl_power(VAR_5, 0);
  FUNC_1(VAR_1, FUNC_0(VAR_1) &
     ~VAR_0);
  do {
   VAR_8 = FUNC_0(VAR_4);
  } while (VAR_8 & VAR_2);
  VAR_9->is_lvds_on = 0;
  FUNC_4(&VAR_5->pdev->dev);
 }
 FUNC_3(VAR_5);
}
