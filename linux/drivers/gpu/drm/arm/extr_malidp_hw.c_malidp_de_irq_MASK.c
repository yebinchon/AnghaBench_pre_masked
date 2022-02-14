
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct malidp_irq_map {int irq_mask; int err_mask; int vsync_irq; } ;
struct malidp_hw_device {scalar_t__ pm_suspended; struct malidp_hw* hw; } ;
struct TYPE_6__ {int vsync_irq; } ;
struct TYPE_7__ {TYPE_1__ dc_irq_map; scalar_t__ dc_base; struct malidp_irq_map de_irq_map; } ;
struct malidp_hw {TYPE_2__ map; } ;
struct TYPE_8__ {scalar_t__ enabled; } ;
struct malidp_drm {TYPE_3__ crtc; int de_errors; int config_valid; int * event; struct malidp_hw_device* dev; } ;
struct drm_device {int event_lock; struct malidp_drm* dev_private; } ;
typedef scalar_t__ irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct malidp_drm*,int *,int,int ) ;
 int FUNC_5 (struct malidp_hw_device*,int ,int) ;
 int FUNC_6 (struct malidp_hw_device*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9;
 struct malidp_drm *VAR_11 = VAR_10->dev_private;
 struct malidp_hw_device *VAR_12;
 struct malidp_hw *VAR_13;
 const struct malidp_irq_map *VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 irqreturn_t VAR_18 = VAR_1;

 VAR_12 = VAR_11->dev;
 VAR_13 = VAR_12->hw;
 VAR_14 = &VAR_13->map.de_irq_map;






 if (VAR_12->pm_suspended)
  return VAR_1;


 VAR_17 = FUNC_6(VAR_12, VAR_13->map.dc_base + VAR_7);
 if (VAR_17 & VAR_13->map.dc_irq_map.vsync_irq) {
  FUNC_5(VAR_12, VAR_4, VAR_17);

  if (VAR_11->event != ((void*)0)) {
   FUNC_7(&VAR_10->event_lock);
   FUNC_2(&VAR_11->crtc, VAR_11->event);
   VAR_11->event = ((void*)0);
   FUNC_8(&VAR_10->event_lock);
  }
  FUNC_0(&VAR_11->config_valid, VAR_3);
  VAR_18 = VAR_2;
 }

 VAR_15 = FUNC_6(VAR_12, VAR_7);
 if (!(VAR_15 & VAR_14->irq_mask))
  return VAR_18;

 VAR_16 = FUNC_6(VAR_12, VAR_6);

 VAR_15 &= (VAR_16 | VAR_14->err_mask);
 if ((VAR_15 & VAR_14->vsync_irq) && VAR_11->crtc.enabled)
  FUNC_1(&VAR_11->crtc);







 FUNC_5(VAR_12, VAR_5, VAR_15);

 return (VAR_18 == VAR_1) ? VAR_0 : VAR_18;
}
