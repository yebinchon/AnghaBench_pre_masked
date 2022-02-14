
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fstart; int max_delay; } ;
struct drm_i915_private {int drm; TYPE_1__ ips; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(void)
{
 struct drm_i915_private *VAR_1;
 bool VAR_2;

 VAR_1 = FUNC_2();
 if (!VAR_1)
  return 0;

 FUNC_3(&VAR_0);
 VAR_1->ips.max_delay = VAR_1->ips.fstart;
 VAR_2 = FUNC_1(VAR_1, VAR_1->ips.fstart);
 FUNC_4(&VAR_0);

 FUNC_0(&VAR_1->drm);
 return VAR_2;
}
