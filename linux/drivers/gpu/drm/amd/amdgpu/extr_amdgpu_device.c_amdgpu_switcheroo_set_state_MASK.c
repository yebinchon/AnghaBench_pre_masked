
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct drm_device {void* switch_power_state; } ;
typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,int,int) ;
 int FUNC_2 (struct drm_device*,int,int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 struct drm_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_5, enum vga_switcheroo_state VAR_6)
{
 struct drm_device *VAR_7 = FUNC_5(VAR_5);

 if (FUNC_0(VAR_7) && VAR_6 == VAR_3)
  return;

 if (VAR_6 == VAR_4) {
  FUNC_6("amdgpu: switched on\n");

  VAR_7->switch_power_state = VAR_0;

  FUNC_1(VAR_7, 1, 1);

  VAR_7->switch_power_state = VAR_2;
  FUNC_4(VAR_7);
 } else {
  FUNC_6("amdgpu: switched off\n");
  FUNC_3(VAR_7);
  VAR_7->switch_power_state = VAR_0;
  FUNC_2(VAR_7, 1, 1);
  VAR_7->switch_power_state = VAR_1;
 }
}
