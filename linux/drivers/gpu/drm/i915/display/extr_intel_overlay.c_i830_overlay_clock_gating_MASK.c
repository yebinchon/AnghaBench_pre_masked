
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int bus; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_4,
          bool VAR_5)
{
 struct pci_dev *VAR_6 = VAR_4->drm.pdev;
 u8 VAR_7;


 if (VAR_5)
  FUNC_0(VAR_0, 0);
 else
  FUNC_0(VAR_0, VAR_3);


 FUNC_2(VAR_6->bus,
     FUNC_1(0, 0), VAR_1, &VAR_7);
 if (VAR_5)
  VAR_7 &= ~VAR_2;
 else
  VAR_7 |= VAR_2;
 FUNC_3(VAR_6->bus,
      FUNC_1(0, 0), VAR_1, VAR_7);
}
