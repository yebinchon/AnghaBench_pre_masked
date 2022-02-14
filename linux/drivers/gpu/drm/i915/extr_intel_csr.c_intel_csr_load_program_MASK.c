
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t* dmc_payload; size_t dmc_fw_size; size_t mmio_count; scalar_t__ dc_state; int * mmiodata; int * mmioaddr; } ;
struct drm_i915_private {TYPE_1__ csr; int runtime_pm; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(struct drm_i915_private *VAR_0)
{
 u32 *VAR_1 = VAR_0->csr.dmc_payload;
 u32 VAR_2, VAR_3;

 if (!FUNC_2(VAR_0)) {
  FUNC_1("No CSR support available for this platform\n");
  return;
 }

 if (!VAR_0->csr.dmc_payload) {
  FUNC_1("Tried to program CSR with empty payload\n");
  return;
 }

 VAR_3 = VAR_0->csr.dmc_fw_size;
 FUNC_5(&VAR_0->runtime_pm);

 FUNC_7();

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_4(FUNC_0(VAR_2), VAR_1[VAR_2]);

 FUNC_8();

 for (VAR_2 = 0; VAR_2 < VAR_0->csr.mmio_count; VAR_2++) {
  FUNC_3(VAR_0->csr.mmioaddr[VAR_2],
      VAR_0->csr.mmiodata[VAR_2]);
 }

 VAR_0->csr.dc_state = 0;

 FUNC_6(VAR_0);
}
