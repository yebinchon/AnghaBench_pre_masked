
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_engine_cs {int id; int name; } ;
struct drm_i915_reg_descriptor {int addr; } ;


 int FUNC_0 (char*,int ,int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct intel_engine_cs *VAR_0,
    const struct drm_i915_reg_descriptor *VAR_1,
    int VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;
 bool VAR_5 = 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  u32 VAR_6 = FUNC_1(VAR_1[VAR_3].addr);

  if (VAR_6 < VAR_4) {
   FUNC_0("CMD: %s [%d] register table not sorted: "
      "entry=%d reg=0x%08X prev=0x%08X\n",
      VAR_0->name, VAR_0->id,
      VAR_3, VAR_6, VAR_4);
   VAR_5 = 0;
  }

  VAR_4 = VAR_6;
 }

 return VAR_5;
}
