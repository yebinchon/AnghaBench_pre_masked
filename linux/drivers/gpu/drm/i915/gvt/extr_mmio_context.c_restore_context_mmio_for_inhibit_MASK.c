
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {int id; struct intel_gvt* gvt; } ;
struct TYPE_3__ {int* ctx_mmio_count; struct engine_mmio* mmio; } ;
struct intel_gvt {TYPE_1__ engine_mmio_list; } ;
struct i915_request {TYPE_2__* engine; } ;
struct engine_mmio {int ring_id; int mask; int reg; int in_context; } ;
struct TYPE_4__ {int id; int (* emit_flush ) (struct i915_request*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct i915_request*,int *) ;
 int * FUNC_7 (struct i915_request*,int) ;
 int FUNC_8 (struct i915_request*,int ) ;
 int FUNC_9 (struct i915_request*,int ) ;
 int FUNC_10 (struct intel_vgpu*,int ) ;

__attribute__((used)) static int
FUNC_11(struct intel_vgpu *VAR_2,
     struct i915_request *VAR_3)
{
 u32 *VAR_4;
 int VAR_5;
 struct engine_mmio *VAR_6;
 struct intel_gvt *VAR_7 = VAR_2->gvt;
 int VAR_8 = VAR_3->engine->id;
 int VAR_9 = VAR_7->engine_mmio_list.ctx_mmio_count[VAR_8];

 if (VAR_9 == 0)
  return 0;

 VAR_5 = VAR_3->engine->emit_flush(VAR_3, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_7(VAR_3, VAR_9 * 2 + 2);
 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4);

 *VAR_4++ = FUNC_1(VAR_9);
 for (VAR_6 = VAR_7->engine_mmio_list.mmio;
      FUNC_5(VAR_6->reg); VAR_6++) {
  if (VAR_6->ring_id != VAR_8 ||
      !VAR_6->in_context)
   continue;

  *VAR_4++ = FUNC_4(VAR_6->reg);
  *VAR_4++ = FUNC_10(VAR_2, VAR_6->reg) |
    (VAR_6->mask << 16);
  FUNC_3("add lri reg pair 0x%x:0x%x in inhibit ctx, vgpu:%d, rind_id:%d\n",
         *(VAR_4-2), *(VAR_4-1), VAR_2->id, VAR_8);
 }

 *VAR_4++ = VAR_1;
 FUNC_6(VAR_3, VAR_4);

 VAR_5 = VAR_3->engine->emit_flush(VAR_3, VAR_0);
 if (VAR_5)
  return VAR_5;

 return 0;
}
