
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct drm_i915_mocs_table {int dummy; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct drm_i915_mocs_table *VAR_0,
          u16 VAR_1,
          u16 VAR_2)
{
 return VAR_1 | VAR_2 << 16;
}
