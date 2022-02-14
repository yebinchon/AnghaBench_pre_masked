
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct opregion_swsci {int dslp; int scic; int parm; } ;
struct TYPE_4__ {int swsci_sbcb_sub_functions; int swsci_gbda_sub_functions; struct opregion_swsci* swsci; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_2__ opregion; TYPE_1__ drm; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct drm_i915_private *VAR_20,
   u32 VAR_21, u32 VAR_22, u32 *VAR_23)
{
 struct opregion_swsci *VAR_24 = VAR_20->opregion.swsci;
 struct pci_dev *VAR_25 = VAR_20->drm.pdev;
 u32 VAR_26, VAR_27, VAR_28;
 u16 VAR_29;
 u32 VAR_30;

 if (!VAR_24)
  return -VAR_4;

 VAR_26 = (VAR_21 & VAR_15) >>
  VAR_16;
 VAR_27 = (VAR_21 & VAR_17) >>
  VAR_18;


 if (VAR_26 == VAR_10) {
  if ((VAR_20->opregion.swsci_sbcb_sub_functions &
       (1 << VAR_27)) == 0)
   return -VAR_2;
 } else if (VAR_26 == VAR_8) {
  if ((VAR_20->opregion.swsci_gbda_sub_functions &
       (1 << VAR_27)) == 0)
   return -VAR_2;
 }


 VAR_30 = VAR_24->dslp;
 if (!VAR_30) {


  VAR_30 = 50;
 } else if (VAR_30 > VAR_6) {

  FUNC_1("ACPI BIOS requests an excessive sleep of %u ms, "
         "using %u ms instead\n", VAR_30, VAR_6);
  VAR_30 = VAR_6;
 }


 VAR_28 = VAR_24->scic;
 if (VAR_28 & VAR_14) {
  FUNC_0("SWSCI request already in progress\n");
  return -VAR_1;
 }

 VAR_28 = VAR_21 | VAR_14;

 VAR_24->parm = VAR_22;
 VAR_24->scic = VAR_28;


 FUNC_2(VAR_25, VAR_7, &VAR_29);
 if (!(VAR_29 & VAR_19) || (VAR_29 & VAR_9)) {
  VAR_29 |= VAR_19;
  VAR_29 &= ~VAR_9;
  FUNC_3(VAR_25, VAR_7, VAR_29);
 }


 VAR_29 |= VAR_9;
 FUNC_3(VAR_25, VAR_7, VAR_29);



 if (FUNC_4((((VAR_28 = VAR_24->scic) & VAR_14) == 0), VAR_30)) {
  FUNC_0("SWSCI request timed out\n");
  return -VAR_5;
 }

 VAR_28 = (VAR_28 & VAR_11) >>
  VAR_12;


 if (VAR_28 != VAR_13) {
  FUNC_0("SWSCI request error %u\n", VAR_28);
  return -VAR_3;
 }

 if (VAR_23)
  *VAR_23 = VAR_24->parm;

 return 0;


}
