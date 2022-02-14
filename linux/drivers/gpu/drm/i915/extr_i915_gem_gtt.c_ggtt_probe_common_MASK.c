
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dummy; } ;
struct TYPE_5__ {TYPE_3__* scratch; int (* pte_encode ) (int ,int ,int ) ;struct drm_i915_private* i915; } ;
struct i915_ggtt {TYPE_2__ vm; int gsm; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_6__ {int encode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct i915_ggtt *VAR_3, u64 VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_3->vm.i915;
 struct pci_dev *VAR_6 = VAR_5->drm.pdev;
 phys_addr_t VAR_7;
 int VAR_8;


 VAR_7 = FUNC_7(VAR_6, 0) + FUNC_6(VAR_6, 0) / 2;
 if (FUNC_2(VAR_5) || FUNC_1(VAR_5) >= 10)
  VAR_3->gsm = FUNC_3(VAR_7, VAR_4);
 else
  VAR_3->gsm = FUNC_4(VAR_7, VAR_4);
 if (!VAR_3->gsm) {
  FUNC_0("Failed to map the ggtt page table\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_9(&VAR_3->vm, VAR_1);
 if (VAR_8) {
  FUNC_0("Scratch setup failed\n");

  FUNC_5(VAR_3->gsm);
  return VAR_8;
 }

 VAR_3->vm.scratch[0].encode =
  VAR_3->vm.pte_encode(FUNC_8(&VAR_3->vm.scratch[0]),
        VAR_2, 0);

 return 0;
}
