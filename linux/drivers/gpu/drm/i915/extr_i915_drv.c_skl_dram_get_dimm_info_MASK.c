
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_i915_private {int dummy; } ;
struct dram_dimm_info {int ranks; int width; int size; } ;


 int FUNC_0 (char*,int,char,int ,int ,int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dram_dimm_info*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct drm_i915_private *VAR_0,
         struct dram_dimm_info *VAR_1,
         int VAR_2, char VAR_3, u16 VAR_4)
{
 if (FUNC_1(VAR_0) >= 10) {
  VAR_1->size = FUNC_3(VAR_4);
  VAR_1->width = FUNC_4(VAR_4);
  VAR_1->ranks = FUNC_2(VAR_4);
 } else {
  VAR_1->size = FUNC_6(VAR_4);
  VAR_1->width = FUNC_7(VAR_4);
  VAR_1->ranks = FUNC_5(VAR_4);
 }

 FUNC_0("CH%u DIMM %c size: %u GB, width: X%u, ranks: %u, 16Gb DIMMs: %s\n",
        VAR_2, VAR_3, VAR_1->size, VAR_1->width, VAR_1->ranks,
        FUNC_9(FUNC_8(VAR_1)));
}
