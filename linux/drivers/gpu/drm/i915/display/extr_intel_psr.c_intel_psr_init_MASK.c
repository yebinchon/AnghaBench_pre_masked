
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int sink_not_reliable; int link_standby; int lock; int work; int sink_support; } ;
struct TYPE_5__ {int full_link; int enable; } ;
struct TYPE_6__ {TYPE_1__ psr; } ;
struct drm_i915_private {TYPE_3__ psr; TYPE_2__ vbt; int psr_mmio_base; } ;
struct TYPE_8__ {int enable_psr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_i915_private *VAR_6)
{
 u32 VAR_7;

 if (!FUNC_2(VAR_6))
  return;

 VAR_6->psr_mmio_base = FUNC_7(VAR_6) ?
  VAR_2 : VAR_0;

 if (!VAR_6->psr.sink_support)
  return;

 if (VAR_4.enable_psr == -1)
  if (FUNC_5(VAR_6) < 9 || !VAR_6->vbt.psr.enable)
   VAR_4.enable_psr = 0;
 VAR_7 = FUNC_3(VAR_1);
 VAR_7 &= FUNC_1(FUNC_8(VAR_3));
 if (VAR_7) {
  FUNC_0("PSR interruption error set\n");
  VAR_6->psr.sink_not_reliable = 1;
 }


 if (FUNC_7(VAR_6) || FUNC_6(VAR_6))

  VAR_6->psr.link_standby = 0;
 else

  VAR_6->psr.link_standby = VAR_6->vbt.psr.full_link;

 FUNC_4(&VAR_6->psr.work, VAR_5);
 FUNC_9(&VAR_6->psr.lock);
}
