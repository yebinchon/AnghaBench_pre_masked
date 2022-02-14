
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_printer {struct drm_i915_error_state_buf* arg; int printfn; } ;
struct drm_i915_error_state_buf {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct drm_printer
FUNC_0(struct drm_i915_error_state_buf *VAR_1)
{
 struct drm_printer VAR_2 = {
  .printfn = VAR_0,
  .arg = VAR_1,
 };
 return VAR_2;
}
