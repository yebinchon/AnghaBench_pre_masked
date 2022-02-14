
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_8__ {int retries; int * lock_ops; int * algo; TYPE_2__ dev; int name; int class; int owner; } ;
struct intel_gmbus {unsigned int reg0; int force_bit; TYPE_3__ adapter; struct drm_i915_private* dev_priv; } ;
struct TYPE_6__ {struct pci_dev* pdev; } ;
struct drm_i915_private {struct intel_gmbus* gmbus; int gmbus_wait_queue; int gmbus_mutex; int gpio_mmio_base; TYPE_1__ drm; } ;
struct TYPE_9__ {char* name; } ;


 unsigned int FUNC_0 (struct intel_gmbus*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_6 (struct drm_i915_private*,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct drm_i915_private*,unsigned int) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct intel_gmbus*,unsigned int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int,char*,char*) ;

int FUNC_15(struct drm_i915_private *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->drm.pdev;
 struct intel_gmbus *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (!FUNC_1(VAR_7))
  return 0;

 if (FUNC_5(VAR_7) || FUNC_3(VAR_7))
  VAR_7->gpio_mmio_base = VAR_4;
 else if (!FUNC_2(VAR_7))




  VAR_7->gpio_mmio_base = VAR_2;

 FUNC_13(&VAR_7->gmbus_mutex);
 FUNC_9(&VAR_7->gmbus_wait_queue);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7->gmbus); VAR_10++) {
  if (!FUNC_10(VAR_7, VAR_10))
   continue;

  VAR_9 = &VAR_7->gmbus[VAR_10];

  VAR_9->adapter.owner = VAR_3;
  VAR_9->adapter.class = VAR_1;
  FUNC_14(VAR_9->adapter.name,
    sizeof(VAR_9->adapter.name),
    "i915 gmbus %s",
    FUNC_6(VAR_7, VAR_10)->name);

  VAR_9->adapter.dev.parent = &VAR_8->dev;
  VAR_9->dev_priv = VAR_7;

  VAR_9->adapter.algo = &VAR_5;
  VAR_9->adapter.lock_ops = &VAR_6;





  VAR_9->adapter.retries = 1;


  VAR_9->reg0 = VAR_10 | VAR_0;


  if (FUNC_4(VAR_7))
   VAR_9->force_bit = 1;

  FUNC_12(VAR_9, VAR_10);

  VAR_11 = FUNC_7(&VAR_9->adapter);
  if (VAR_11)
   goto err;
 }

 FUNC_11(VAR_7);

 return 0;

err:
 while (VAR_10--) {
  if (!FUNC_10(VAR_7, VAR_10))
   continue;

  VAR_9 = &VAR_7->gmbus[VAR_10];
  FUNC_8(&VAR_9->adapter);
 }
 return VAR_11;
}
