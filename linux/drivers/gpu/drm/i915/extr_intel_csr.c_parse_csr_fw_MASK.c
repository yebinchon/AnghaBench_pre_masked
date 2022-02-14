
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stepping_info {int dummy; } ;
struct intel_package_header {int dummy; } ;
struct intel_dmc_header_base {int dummy; } ;
struct intel_css_header {int dummy; } ;
struct intel_csr {int dummy; } ;
struct firmware {scalar_t__ size; int * data; } ;
struct drm_i915_private {struct intel_csr csr; } ;


 struct stepping_info* FUNC_0 (struct drm_i915_private*) ;
 size_t FUNC_1 (struct intel_csr*,struct intel_css_header*,scalar_t__) ;
 int FUNC_2 (struct intel_csr*,struct intel_dmc_header_base*,scalar_t__) ;
 size_t FUNC_3 (struct intel_csr*,struct intel_package_header*,struct stepping_info const*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_0,
    const struct firmware *VAR_1)
{
 struct intel_css_header *VAR_2;
 struct intel_package_header *VAR_3;
 struct intel_dmc_header_base *VAR_4;
 struct intel_csr *VAR_5 = &VAR_0->csr;
 const struct stepping_info *VAR_6 = FUNC_0(VAR_0);
 u32 VAR_7 = 0;
 u32 VAR_8;

 if (!VAR_1)
  return;


 VAR_2 = (struct intel_css_header *)VAR_1->data;
 VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_1->size);
 if (!VAR_8)
  return;

 VAR_7 += VAR_8;


 VAR_3 = (struct intel_package_header *)&VAR_1->data[VAR_7];
 VAR_8 = FUNC_3(VAR_5, VAR_3, VAR_6, VAR_1->size - VAR_7);
 if (!VAR_8)
  return;

 VAR_7 += VAR_8;


 VAR_4 = (struct intel_dmc_header_base *)&VAR_1->data[VAR_7];
 FUNC_2(VAR_5, VAR_4, VAR_1->size - VAR_7);
}
