
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sseu_dev_info {int max_slices; int has_eu_pg; int has_subslice_pg; int has_slice_pg; int eu_per_subslice; int eu_total; int * subslice_mask; int slice_mask; } ;
struct drm_printer {int dummy; } ;


 int FUNC_0 (struct drm_printer*,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sseu_dev_info const*) ;
 int FUNC_3 (struct sseu_dev_info const*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct sseu_dev_info *VAR_0, struct drm_printer *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, "slice total: %u, mask=%04x\n",
     FUNC_1(VAR_0->slice_mask), VAR_0->slice_mask);
 FUNC_0(VAR_1, "subslice total: %u\n", FUNC_2(VAR_0));
 for (VAR_2 = 0; VAR_2 < VAR_0->max_slices; VAR_2++) {
  FUNC_0(VAR_1, "slice%d: %u subslices, mask=%04x\n",
      VAR_2, FUNC_3(VAR_0, VAR_2),
      VAR_0->subslice_mask[VAR_2]);
 }
 FUNC_0(VAR_1, "EU total: %u\n", VAR_0->eu_total);
 FUNC_0(VAR_1, "EU per subslice: %u\n", VAR_0->eu_per_subslice);
 FUNC_0(VAR_1, "has slice power gating: %s\n",
     FUNC_4(VAR_0->has_slice_pg));
 FUNC_0(VAR_1, "has subslice power gating: %s\n",
     FUNC_4(VAR_0->has_subslice_pg));
 FUNC_0(VAR_1, "has EU power gating: %s\n", FUNC_4(VAR_0->has_eu_pg));
}
