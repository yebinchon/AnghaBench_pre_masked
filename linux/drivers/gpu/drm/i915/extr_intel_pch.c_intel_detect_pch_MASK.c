
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; unsigned short device; int subsystem_device; int subsystem_vendor; } ;
struct drm_i915_private {int pch_type; unsigned short pch_id; } ;
typedef enum intel_pch { ____Placeholder_intel_pch } intel_pch ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned short,int ,int ) ;
 int FUNC_4 (struct drm_i915_private*,unsigned short) ;
 unsigned short FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct pci_dev* FUNC_7 (int,struct pci_dev*) ;

void FUNC_8(struct drm_i915_private *VAR_5)
{
 struct pci_dev *VAR_6 = ((void*)0);
 while ((VAR_6 = FUNC_7(VAR_3 << 8, VAR_6))) {
  unsigned short VAR_7;
  enum intel_pch VAR_8;

  if (VAR_6->vendor != VAR_4)
   continue;

  VAR_7 = VAR_6->device & VAR_0;

  VAR_8 = FUNC_4(VAR_5, VAR_7);
  if (VAR_8 != VAR_1) {
   VAR_5->pch_type = VAR_8;
   VAR_5->pch_id = VAR_7;
   break;
  } else if (FUNC_3(VAR_7, VAR_6->subsystem_vendor,
          VAR_6->subsystem_device)) {
   VAR_7 = FUNC_5(VAR_5);
   VAR_8 = FUNC_4(VAR_5, VAR_7);


   if (FUNC_2(VAR_7 && VAR_8 == VAR_1))
    VAR_7 = 0;

   VAR_5->pch_type = VAR_8;
   VAR_5->pch_id = VAR_7;
   break;
  }
 }





 if (VAR_6 && !FUNC_1(VAR_5)) {
  FUNC_0("Display disabled, reverting to NOP PCH\n");
  VAR_5->pch_type = VAR_2;
  VAR_5->pch_id = 0;
 }

 if (!VAR_6)
  FUNC_0("No PCH found.\n");

 FUNC_6(VAR_6);
}
