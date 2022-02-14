
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct intel_uncore {int dummy; } ;
struct intel_gt {struct intel_uncore* uncore; TYPE_2__* i915; } ;
typedef int intel_engine_mask_t ;
struct TYPE_3__ {struct pci_dev* pdev; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct intel_uncore*,int ,int ) ;
 int FUNC_5 (struct intel_uncore*,int ,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct intel_gt *VAR_6,
   intel_engine_mask_t VAR_7,
   unsigned int VAR_8)
{
 struct pci_dev *VAR_9 = VAR_6->i915->drm.pdev;
 struct intel_uncore *VAR_10 = VAR_6->uncore;
 int VAR_11;


 FUNC_5(VAR_10, VAR_5, VAR_4);
 FUNC_2(VAR_10, VAR_5);

 FUNC_3(VAR_9, VAR_3,
         VAR_0 | VAR_2);
 VAR_11 = FUNC_6(FUNC_1(VAR_9), 50);
 if (VAR_11) {
  FUNC_0("Wait for media reset failed\n");
  goto out;
 }

 FUNC_3(VAR_9, VAR_3,
         VAR_1 | VAR_2);
 VAR_11 = FUNC_6(FUNC_1(VAR_9), 50);
 if (VAR_11) {
  FUNC_0("Wait for render reset failed\n");
  goto out;
 }

out:
 FUNC_3(VAR_9, VAR_3, 0);

 FUNC_4(VAR_10, VAR_5, VAR_4);
 FUNC_2(VAR_10, VAR_5);

 return VAR_11;
}
