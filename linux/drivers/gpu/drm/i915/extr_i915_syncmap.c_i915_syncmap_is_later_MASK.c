
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_syncmap {scalar_t__ prefix; int bitmap; int height; struct i915_syncmap* parent; } ;


 int FUNC_0 (unsigned int) ;
 size_t FUNC_1 (struct i915_syncmap*,int ) ;
 scalar_t__ FUNC_2 (struct i915_syncmap*,int ) ;
 struct i915_syncmap** FUNC_3 (struct i915_syncmap*) ;
 unsigned int FUNC_4 (struct i915_syncmap*,int ) ;
 scalar_t__ FUNC_5 (struct i915_syncmap*,int ) ;
 int * FUNC_6 (struct i915_syncmap*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;

bool FUNC_9(struct i915_syncmap **VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct i915_syncmap *VAR_3;
 unsigned int VAR_4;

 VAR_3 = *VAR_0;
 if (!VAR_3)
  return 0;

 if (FUNC_7(FUNC_5(VAR_3, VAR_1) == VAR_3->prefix))
  goto found;


 do {
  VAR_3 = VAR_3->parent;
  if (!VAR_3)
   return 0;

  if (FUNC_2(VAR_3, VAR_1) == VAR_3->prefix)
   break;
 } while (1);


 do {
  if (!VAR_3->height)
   break;

  VAR_3 = FUNC_3(VAR_3)[FUNC_1(VAR_3, VAR_1)];
  if (!VAR_3)
   return 0;

  if (FUNC_2(VAR_3, VAR_1) != VAR_3->prefix)
   return 0;
 } while (1);

 *VAR_0 = VAR_3;
found:
 VAR_4 = FUNC_4(VAR_3, VAR_1);
 if (!(VAR_3->bitmap & FUNC_0(VAR_4)))
  return 0;

 return FUNC_8(FUNC_6(VAR_3)[VAR_4], VAR_2);
}
