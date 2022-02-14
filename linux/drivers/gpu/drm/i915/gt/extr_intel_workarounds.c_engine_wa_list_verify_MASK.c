
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i915_vma {int obj; int i915; } ;
typedef struct i915_vma u32 ;
struct intel_context {TYPE_3__* engine; } ;
struct i915_wa_list {unsigned int count; int name; struct i915_wa* list; } ;
struct i915_wa {int reg; } ;
struct i915_request {int obj; int i915; } ;
struct TYPE_6__ {TYPE_2__* gt; } ;
struct TYPE_5__ {TYPE_1__* ggtt; } ;
struct TYPE_4__ {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int FUNC_1 (struct i915_vma*) ;
 struct i915_vma* FUNC_2 (int *,unsigned int) ;
 struct i915_vma* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i915_vma*) ;
 scalar_t__ FUNC_7 (struct i915_vma*,int ,int) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*) ;
 struct i915_vma* FUNC_10 (struct intel_context*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct i915_vma*,struct i915_wa_list const* const,struct i915_vma*) ;
 int FUNC_13 (struct i915_wa const*,struct i915_vma,int ,char const*) ;

__attribute__((used)) static int FUNC_14(struct intel_context *VAR_4,
     const struct i915_wa_list * const VAR_5,
     const char *VAR_6)
{
 const struct i915_wa *VAR_7;
 struct i915_request *VAR_8;
 struct i915_vma *VAR_9;
 unsigned int VAR_10;
 u32 *VAR_11;
 int VAR_12;

 if (!VAR_5->count)
  return 0;

 VAR_9 = FUNC_2(&VAR_4->engine->gt->ggtt->vm, VAR_5->count);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_8 = FUNC_10(VAR_4);
 if (FUNC_0(VAR_8)) {
  VAR_12 = FUNC_1(VAR_8);
  goto err_vma;
 }

 VAR_12 = FUNC_12(VAR_8, VAR_5, VAR_9);
 if (VAR_12)
  goto err_vma;

 FUNC_6(VAR_8);
 if (FUNC_7(VAR_8, 0, VAR_2 / 5) < 0) {
  VAR_12 = -VAR_1;
  goto err_vma;
 }

 VAR_11 = FUNC_3(VAR_9->obj, VAR_3);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto err_vma;
 }

 VAR_12 = 0;
 for (VAR_10 = 0, VAR_7 = VAR_5->list; VAR_10 < VAR_5->count; VAR_10++, VAR_7++) {
  if (FUNC_11(VAR_8->i915, FUNC_5(VAR_7->reg)))
   continue;

  if (!FUNC_13(VAR_7, VAR_11[VAR_10], VAR_5->name, VAR_6))
   VAR_12 = -VAR_0;
 }

 FUNC_4(VAR_9->obj);

err_vma:
 FUNC_9(VAR_9);
 FUNC_8(VAR_9);
 return VAR_12;
}
