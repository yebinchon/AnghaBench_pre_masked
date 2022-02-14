
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_wm_config {int num_pipes_active; scalar_t__ sprites_enabled; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_ddb_partitioning { ____Placeholder_intel_ddb_partitioning } intel_ddb_partitioning ;
struct TYPE_2__ {unsigned int num_pipes; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private const*) ;
 TYPE_1__* FUNC_1 (struct drm_i915_private const*) ;
 unsigned int FUNC_2 (struct drm_i915_private const*) ;
 int FUNC_3 (struct drm_i915_private const*,int,int) ;
 unsigned int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static unsigned int FUNC_5(const struct drm_i915_private *VAR_1,
         int VAR_2,
         const struct intel_wm_config *VAR_3,
         enum intel_ddb_partitioning VAR_4,
         bool VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_1);


 if (VAR_5 && !VAR_3->sprites_enabled)
  return 0;


 if (VAR_2 == 0 || VAR_3->num_pipes_active > 1) {
  VAR_6 /= FUNC_1(VAR_1)->num_pipes;






  if (FUNC_0(VAR_1) <= 6)
   VAR_6 /= 2;
 }

 if (VAR_3->sprites_enabled) {

  if (VAR_2 > 0 && VAR_4 == VAR_0) {
   if (VAR_5)
    VAR_6 *= 5;
   VAR_6 /= 6;
  } else {
   VAR_6 /= 2;
  }
 }


 return FUNC_4(VAR_6, FUNC_3(VAR_1, VAR_2, VAR_5));
}
