
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct drm_mm_node {int dummy; } ;
struct TYPE_4__ {struct drm_mm_node low_gm_node; struct drm_mm_node high_gm_node; } ;
struct intel_vgpu {TYPE_1__ gm; struct intel_gvt* gvt; } ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct TYPE_6__ {int struct_mutex; } ;
struct TYPE_5__ {int vm; } ;
struct drm_i915_private {TYPE_3__ drm; TYPE_2__ ggtt; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct intel_gvt*) ;
 int FUNC_2 (struct intel_gvt*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct intel_gvt*) ;
 int FUNC_5 (struct intel_gvt*) ;
 int FUNC_6 (int *,struct drm_mm_node*,int ,int ,int ,int ,int ,unsigned int) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct intel_vgpu*) ;
 int FUNC_12 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_13(struct intel_vgpu *VAR_4, bool VAR_5)
{
 struct intel_gvt *VAR_6 = VAR_4->gvt;
 struct drm_i915_private *VAR_7 = VAR_6->dev_priv;
 unsigned int VAR_8;
 u64 VAR_9, VAR_10, VAR_11;
 struct drm_mm_node *VAR_12;
 int VAR_13;

 if (VAR_5) {
  VAR_12 = &VAR_4->gm.high_gm_node;
  VAR_11 = FUNC_12(VAR_4);
  VAR_9 = FUNC_0(FUNC_4(VAR_6), VAR_1);
  VAR_10 = FUNC_0(FUNC_5(VAR_6), VAR_1);
  VAR_8 = VAR_2;
 } else {
  VAR_12 = &VAR_4->gm.low_gm_node;
  VAR_11 = FUNC_11(VAR_4);
  VAR_9 = FUNC_0(FUNC_1(VAR_6), VAR_1);
  VAR_10 = FUNC_0(FUNC_2(VAR_6), VAR_1);
  VAR_8 = VAR_3;
 }

 FUNC_9(&VAR_7->drm.struct_mutex);
 FUNC_8(VAR_7);
 VAR_13 = FUNC_6(&VAR_7->ggtt.vm, VAR_12,
      VAR_11, VAR_1,
      VAR_0,
      VAR_9, VAR_10, VAR_8);
 FUNC_7(VAR_7);
 FUNC_10(&VAR_7->drm.struct_mutex);
 if (VAR_13)
  FUNC_3("fail to alloc %s gm space from host\n",
   VAR_5 ? "high" : "low");

 return VAR_13;
}
