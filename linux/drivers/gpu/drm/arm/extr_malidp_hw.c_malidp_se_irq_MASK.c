
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct malidp_irq_map {int irq_mask; int err_mask; int vsync_irq; } ;
struct malidp_hw_device {int mw_state; scalar_t__ pm_suspended; struct malidp_hw* hw; } ;
struct TYPE_3__ {int vsync_irq; } ;
struct TYPE_4__ {TYPE_1__ dc_irq_map; scalar_t__ dc_base; scalar_t__ se_base; struct malidp_irq_map se_irq_map; } ;
struct malidp_hw {int (* set_config_valid ) (struct malidp_hw_device*,int) ;TYPE_2__ map; int (* disable_memwrite ) (struct malidp_hw_device*) ;} ;
struct malidp_drm {int config_valid; int mw_connector; int crtc; int se_errors; struct malidp_hw_device* dev; } ;
struct drm_device {struct malidp_drm* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct malidp_drm*,int *,int,int ) ;
 int FUNC_4 (struct malidp_hw_device*,int ,int) ;
 int FUNC_5 (struct malidp_hw_device*,scalar_t__) ;
 int FUNC_6 (struct malidp_hw_device*) ;
 int FUNC_7 (struct malidp_hw_device*,int) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8;
 struct malidp_drm *VAR_10 = VAR_9->dev_private;
 struct malidp_hw_device *VAR_11 = VAR_10->dev;
 struct malidp_hw *VAR_12 = VAR_11->hw;
 const struct malidp_irq_map *VAR_13 = &VAR_12->map.se_irq_map;
 u32 VAR_14, VAR_15;






 if (VAR_11->pm_suspended)
  return VAR_1;

 VAR_14 = FUNC_5(VAR_11, VAR_12->map.se_base + VAR_4);
 if (!(VAR_14 & (VAR_13->irq_mask | VAR_13->err_mask)))
  return VAR_1;






 VAR_15 = FUNC_5(VAR_11, VAR_12->map.se_base + VAR_3);
 VAR_14 &= VAR_15;

 if (VAR_14 & VAR_13->vsync_irq) {
  switch (VAR_11->mw_state) {
  case 131:
   FUNC_2(&VAR_10->mw_connector, 0);
   break;
  case 128:
   FUNC_2(&VAR_10->mw_connector, 0);

   VAR_11->mw_state = VAR_6;
   break;
  case 130:
   FUNC_2(&VAR_10->mw_connector, 0);

  case 129:

   VAR_12->disable_memwrite(VAR_11);





   VAR_14 = FUNC_5(VAR_11, VAR_12->map.dc_base + VAR_4);
   if ((FUNC_0(&VAR_10->config_valid) != VAR_2) ||
       (VAR_14 & VAR_12->map.dc_irq_map.vsync_irq))
    VAR_12->set_config_valid(VAR_11, 1);
   break;
  }
 }

 FUNC_4(VAR_11, VAR_5, VAR_14);

 return VAR_0;
}
