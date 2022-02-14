
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_opregion {int swsci_gbda_sub_functions; int swsci_sbcb_sub_functions; } ;
struct drm_i915_private {struct intel_opregion opregion; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_3)
{
 struct intel_opregion *VAR_4 = &VAR_3->opregion;
 bool VAR_5 = 0;
 u32 VAR_6;


 VAR_4->swsci_gbda_sub_functions = 1;
 VAR_4->swsci_sbcb_sub_functions = 1;


 if (FUNC_1(VAR_3, VAR_1, 0, &VAR_6) == 0) {

  VAR_6 <<= 1;
  VAR_4->swsci_gbda_sub_functions |= VAR_6;
 }






 if (FUNC_1(VAR_3, VAR_0, 0, &VAR_6) == 0) {

  VAR_4->swsci_sbcb_sub_functions |= VAR_6;
  VAR_5 = 1;
 }






 if (FUNC_1(VAR_3, VAR_2, 0, &VAR_6) == 0) {

  u32 VAR_7 = VAR_6 & 0x7ff;
  u32 VAR_8 = VAR_6 & ~0xfff;
  VAR_6 = (VAR_8 << 4) | (VAR_7 << 1) | 1;


  if (VAR_5) {
   u32 VAR_9 = VAR_4->swsci_sbcb_sub_functions;
   if ((VAR_9 & VAR_6) != VAR_9)
    FUNC_0("SWSCI BIOS requested (%08x) SBCB callbacks that are not supported (%08x)\n", VAR_9, VAR_6);


  } else {
   VAR_4->swsci_sbcb_sub_functions |= VAR_6;
  }
 }

 FUNC_0("SWSCI GBDA callbacks %08x, SBCB callbacks %08x\n",
    VAR_4->swsci_gbda_sub_functions,
    VAR_4->swsci_sbcb_sub_functions);
}
