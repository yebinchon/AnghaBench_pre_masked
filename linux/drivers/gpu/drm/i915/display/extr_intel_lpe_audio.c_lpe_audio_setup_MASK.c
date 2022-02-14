
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; int * platdev; } ;
struct drm_i915_private {TYPE_1__ lpe_audio; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int * FUNC_8 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_9(struct drm_i915_private *VAR_2)
{
 int VAR_3;

 VAR_2->lpe_audio.irq = FUNC_5(0);
 if (VAR_2->lpe_audio.irq < 0) {
  FUNC_1("Failed to allocate IRQ desc: %d\n",
   VAR_2->lpe_audio.irq);
  VAR_3 = VAR_2->lpe_audio.irq;
  goto err;
 }

 FUNC_0("irq = %d\n", VAR_2->lpe_audio.irq);

 VAR_3 = FUNC_7(VAR_2);

 if (VAR_3) {
  FUNC_1("Failed to initialize irqchip for lpe audio: %d\n",
   VAR_3);
  goto err_free_irq;
 }

 VAR_2->lpe_audio.platdev = FUNC_8(VAR_2);

 if (FUNC_3(VAR_2->lpe_audio.platdev)) {
  VAR_3 = FUNC_4(VAR_2->lpe_audio.platdev);
  FUNC_1("Failed to create lpe audio platform device: %d\n",
   VAR_3);
  goto err_free_irq;
 }




 FUNC_2(VAR_0, VAR_1);

 return 0;
err_free_irq:
 FUNC_6(VAR_2->lpe_audio.irq);
err:
 VAR_2->lpe_audio.irq = -1;
 VAR_2->lpe_audio.platdev = ((void*)0);
 return VAR_3;
}
