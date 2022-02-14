
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct seq_file {int private; } ;
struct intel_csr {int version; int * dmc_payload; int fw_path; } ;
struct drm_i915_private {int runtime_pm; struct intel_csr csr; } ;
typedef int intel_wakeref_t ;
struct TYPE_11__ {scalar_t__ reg; } ;
typedef TYPE_1__ i915_reg_t ;


 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 int FUNC_11 (struct seq_file*,char*,int ,...) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct seq_file *VAR_8, void *VAR_9)
{
 struct drm_i915_private *VAR_10 = FUNC_10(VAR_8->private);
 intel_wakeref_t VAR_11;
 struct intel_csr *VAR_12;
 i915_reg_t VAR_13, VAR_14 = {};

 if (!FUNC_3(VAR_10))
  return -VAR_3;

 VAR_12 = &VAR_10->csr;

 VAR_11 = FUNC_8(&VAR_10->runtime_pm);

 FUNC_11(VAR_8, "fw loaded: %s\n", FUNC_12(VAR_12->dmc_payload != ((void*)0)));
 FUNC_11(VAR_8, "path: %s\n", VAR_12->fw_path);

 if (!VAR_12->dmc_payload)
  goto out;

 FUNC_11(VAR_8, "version: %d.%d\n", FUNC_1(VAR_12->version),
     FUNC_2(VAR_12->version));

 if (FUNC_5(VAR_10) >= 12) {
  VAR_13 = VAR_6;
  VAR_14 = VAR_7;
 } else {
  VAR_13 = FUNC_6(VAR_10) ? VAR_0 :
       VAR_4;
  if (!FUNC_7(VAR_10))
   VAR_14 = VAR_5;
 }

 FUNC_11(VAR_8, "DC3 -> DC5 count: %d\n", FUNC_4(VAR_13));
 if (VAR_14.reg)
  FUNC_11(VAR_8, "DC5 -> DC6 count: %d\n", FUNC_4(VAR_14));

out:
 FUNC_11(VAR_8, "program base: 0x%08x\n", FUNC_4(FUNC_0(0)));
 FUNC_11(VAR_8, "ssp base: 0x%08x\n", FUNC_4(VAR_2));
 FUNC_11(VAR_8, "htp: 0x%08x\n", FUNC_4(VAR_1));

 FUNC_9(&VAR_10->runtime_pm, VAR_11);

 return 0;
}
