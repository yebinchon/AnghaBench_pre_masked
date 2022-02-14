
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_csr {int work; int * fw_path; scalar_t__ required_version; int max_fw_size; } ;
struct drm_i915_private {struct intel_csr csr; } ;
struct TYPE_2__ {int * dmc_firmware_path; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 int VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 scalar_t__ VAR_18 ;
 int * VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 TYPE_1__ VAR_22 ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

void FUNC_15(struct drm_i915_private *VAR_23)
{
 struct intel_csr *VAR_24 = &VAR_23->csr;

 FUNC_3(&VAR_23->csr.work, VAR_21);

 if (!FUNC_2(VAR_23))
  return;
 FUNC_12(VAR_23);

 if (FUNC_4(VAR_23) >= 12) {
  VAR_24->fw_path = VAR_19;
  VAR_24->required_version = VAR_20;

  VAR_24->max_fw_size = VAR_6;
 } else if (FUNC_9(VAR_23, 11)) {
  VAR_24->fw_path = VAR_11;
  VAR_24->required_version = VAR_12;
  VAR_24->max_fw_size = VAR_10;
 } else if (FUNC_6(VAR_23)) {
  VAR_24->fw_path = VAR_4;
  VAR_24->required_version = VAR_5;
  VAR_24->max_fw_size = VAR_3;
 } else if (FUNC_8(VAR_23)) {
  VAR_24->fw_path = VAR_8;
  VAR_24->required_version = VAR_9;
  VAR_24->max_fw_size = VAR_7;
 } else if (FUNC_10(VAR_23) || FUNC_7(VAR_23)) {
  VAR_24->fw_path = VAR_14;
  VAR_24->required_version = VAR_15;
  VAR_24->max_fw_size = VAR_13;
 } else if (FUNC_11(VAR_23)) {
  VAR_24->fw_path = VAR_17;
  VAR_24->required_version = VAR_18;
  VAR_24->max_fw_size = VAR_16;
 } else if (FUNC_5(VAR_23)) {
  VAR_24->fw_path = VAR_1;
  VAR_24->required_version = VAR_2;
  VAR_24->max_fw_size = VAR_0;
 }

 if (VAR_22.dmc_firmware_path) {
  if (FUNC_14(VAR_22.dmc_firmware_path) == 0) {
   VAR_24->fw_path = ((void*)0);
   FUNC_1("Disabling CSR firmware and runtime PM\n");
   return;
  }

  VAR_24->fw_path = VAR_22.dmc_firmware_path;

  VAR_24->required_version = 0;
 }

 if (VAR_24->fw_path == ((void*)0)) {
  FUNC_0("No known CSR firmware for platform, disabling runtime PM\n");
  return;
 }

 FUNC_0("Loading %s\n", VAR_24->fw_path);
 FUNC_13(&VAR_23->csr.work);
}
