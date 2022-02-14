
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_4__ {void* switch_power_state; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct TYPE_5__ {int event; } ;
typedef TYPE_2__ pm_message_t ;
typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*,TYPE_2__) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 struct drm_i915_private* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_6, enum vga_switcheroo_state VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_4(VAR_6);
 pm_message_t VAR_9 = { .event = VAR_4 };

 if (!VAR_8) {
  FUNC_0(&VAR_6->dev, "DRM not initialized, aborting switch.\n");
  return;
 }

 if (VAR_7 == VAR_5) {
  FUNC_5("switched on\n");
  VAR_8->drm.switch_power_state = VAR_0;

  FUNC_3(VAR_6, VAR_3);
  FUNC_1(VAR_8);
  VAR_8->drm.switch_power_state = VAR_2;
 } else {
  FUNC_5("switched off\n");
  VAR_8->drm.switch_power_state = VAR_0;
  FUNC_2(VAR_8, VAR_9);
  VAR_8->drm.switch_power_state = VAR_1;
 }
}
