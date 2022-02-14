
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {int * lock_ops; int * algo; struct intel_sdvo* algo_data; TYPE_2__ dev; int name; int class; int owner; } ;
struct intel_sdvo {TYPE_3__ ddc; } ;
struct TYPE_4__ {struct pci_dev* pdev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static bool
FUNC_2(struct intel_sdvo *VAR_5,
     struct drm_i915_private *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->drm.pdev;

 VAR_5->ddc.owner = VAR_2;
 VAR_5->ddc.class = VAR_0;
 FUNC_1(VAR_5->ddc.name, VAR_1, "SDVO DDC proxy");
 VAR_5->ddc.dev.parent = &VAR_7->dev;
 VAR_5->ddc.algo_data = VAR_5;
 VAR_5->ddc.algo = &VAR_3;
 VAR_5->ddc.lock_ops = &VAR_4;

 return FUNC_0(&VAR_5->ddc) == 0;
}
