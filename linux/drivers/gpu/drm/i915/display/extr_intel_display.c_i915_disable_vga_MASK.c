
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->drm.pdev;
 u8 VAR_7;
 i915_reg_t VAR_8 = FUNC_2(VAR_5);


 FUNC_6(VAR_6, VAR_2);
 FUNC_4(VAR_0, VAR_4);
 VAR_7 = FUNC_3(VAR_3);
 FUNC_4(VAR_7 | 1<<5, VAR_3);
 FUNC_7(VAR_6, VAR_2);
 FUNC_5(300);

 FUNC_0(VAR_8, VAR_1);
 FUNC_1(VAR_8);
}
