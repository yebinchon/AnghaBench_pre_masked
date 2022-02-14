
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* (* wa_bb_func_t ) (struct intel_engine_cs*,void*) ;
struct page {int dummy; } ;
struct i915_wa_ctx_bb {int offset; int size; } ;
struct i915_ctx_workarounds {TYPE_1__* vma; struct i915_wa_ctx_bb per_ctx; struct i915_wa_ctx_bb indirect_ctx; } ;
struct intel_engine_cs {scalar_t__ class; int i915; struct i915_ctx_workarounds wa_ctx; } ;
struct TYPE_2__ {int obj; } ;


 unsigned int FUNC_0 (void* (*) (struct intel_engine_cs*,void*)) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 void* FUNC_7 (struct intel_engine_cs*,void*) ;
 void* FUNC_8 (struct intel_engine_cs*,void*) ;
 void* FUNC_9 (struct intel_engine_cs*,void*) ;
 struct page* FUNC_10 (int ,int ) ;
 void* FUNC_11 (struct page*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct intel_engine_cs*) ;
 int FUNC_14 (struct intel_engine_cs*) ;
 void* FUNC_15 (struct intel_engine_cs*,void*) ;

__attribute__((used)) static int FUNC_16(struct intel_engine_cs *VAR_4)
{
 struct i915_ctx_workarounds *VAR_5 = &VAR_4->wa_ctx;
 struct i915_wa_ctx_bb *VAR_6[2] = { &VAR_5->indirect_ctx,
         &VAR_5->per_ctx };
 wa_bb_func_t VAR_7[2];
 struct page *VAR_8;
 void *VAR_9, *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (VAR_4->class != VAR_3)
  return 0;

 switch (FUNC_4(VAR_4->i915)) {
 case 12:
 case 11:
  return 0;
 case 10:
  VAR_7[0] = FUNC_7;
  VAR_7[1] = ((void*)0);
  break;
 case 9:
  VAR_7[0] = FUNC_9;
  VAR_7[1] = ((void*)0);
  break;
 case 8:
  VAR_7[0] = FUNC_8;
  VAR_7[1] = ((void*)0);
  break;
 default:
  FUNC_6(FUNC_4(VAR_4->i915));
  return 0;
 }

 VAR_12 = FUNC_14(VAR_4);
 if (VAR_12) {
  FUNC_2("Failed to setup context WA page: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_8 = FUNC_10(VAR_5->vma->obj, 0);
 VAR_9 = VAR_10 = FUNC_11(VAR_8);






 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {
  VAR_6[VAR_11]->offset = VAR_10 - VAR_9;
  if (FUNC_3(!FUNC_5(VAR_6[VAR_11]->offset,
        VAR_0))) {
   VAR_12 = -VAR_2;
   break;
  }
  if (VAR_7[VAR_11])
   VAR_10 = VAR_7[VAR_11](VAR_4, VAR_10);
  VAR_6[VAR_11]->size = VAR_10 - (VAR_9 + VAR_6[VAR_11]->offset);
 }

 FUNC_1(VAR_10 - VAR_9 > VAR_1);

 FUNC_12(VAR_9);
 if (VAR_12)
  FUNC_13(VAR_4);

 return VAR_12;
}
