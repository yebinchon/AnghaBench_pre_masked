
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disable; int enable; int reset; } ;
struct intel_guc {TYPE_1__ interrupts; int notify; int handler; int send; int irq_lock; int send_mutex; int log; int ct; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_1 (struct intel_guc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_guc*) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (struct intel_guc*) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct intel_guc *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_1(VAR_10)->i915;

 FUNC_3(VAR_10);
 FUNC_2(&VAR_10->ct);
 FUNC_4(&VAR_10->log);
 FUNC_5(VAR_10);

 FUNC_6(&VAR_10->send_mutex);
 FUNC_7(&VAR_10->irq_lock);
 VAR_10->send = VAR_8;
 VAR_10->handler = VAR_9;
 if (FUNC_0(VAR_11) >= 11) {
  VAR_10->notify = VAR_2;
  VAR_10->interrupts.reset = VAR_3;
  VAR_10->interrupts.enable = VAR_1;
  VAR_10->interrupts.disable = VAR_0;
 } else {
  VAR_10->notify = VAR_4;
  VAR_10->interrupts.reset = VAR_7;
  VAR_10->interrupts.enable = VAR_6;
  VAR_10->interrupts.disable = VAR_5;
 }
}
