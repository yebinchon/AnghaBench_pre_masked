
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmio_diff_param {int total; int diff; int diff_mmio_list; int vgpu; } ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int uncore; } ;
struct diff_mmio {int node; scalar_t__ vreg; scalar_t__ preg; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 struct diff_mmio* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_5(struct intel_gvt *VAR_2,
        u32 VAR_3, void *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_2->dev_priv;
 struct mmio_diff_param *VAR_6 = VAR_4;
 struct diff_mmio *VAR_7;
 u32 VAR_8, VAR_9;

 VAR_8 = FUNC_1(&VAR_5->uncore, FUNC_0(VAR_3));
 VAR_9 = FUNC_4(VAR_6->vgpu, VAR_3);

 if (VAR_8 != VAR_9) {
  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   return -VAR_0;

  VAR_7->offset = VAR_3;
  VAR_7->preg = VAR_8;
  VAR_7->vreg = VAR_9;
  FUNC_3(&VAR_7->node, &VAR_6->diff_mmio_list);
  VAR_6->diff++;
 }
 VAR_6->total++;
 return 0;
}
