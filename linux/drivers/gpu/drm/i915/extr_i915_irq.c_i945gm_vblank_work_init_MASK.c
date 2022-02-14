
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pm_qos; int c3_disable_latency; int work; } ;
struct drm_i915_private {TYPE_1__ i945gm_vblank; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_3)
{
 FUNC_0(&VAR_3->i945gm_vblank.work,
    VAR_2);

 VAR_3->i945gm_vblank.c3_disable_latency =
  FUNC_1("C3");
 FUNC_2(&VAR_3->i945gm_vblank.pm_qos,
      VAR_0,
      VAR_1);
}
