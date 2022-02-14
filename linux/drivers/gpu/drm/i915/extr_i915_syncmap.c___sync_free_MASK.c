
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_syncmap {unsigned int bitmap; scalar_t__ height; } ;


 struct i915_syncmap** FUNC_0 (struct i915_syncmap*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct i915_syncmap*) ;

__attribute__((used)) static void FUNC_3(struct i915_syncmap *VAR_0)
{
 if (VAR_0->height) {
  unsigned int VAR_1;

  while ((VAR_1 = FUNC_1(VAR_0->bitmap))) {
   VAR_0->bitmap &= ~0u << VAR_1;
   FUNC_3(FUNC_0(VAR_0)[VAR_1 - 1]);
  }
 }

 FUNC_2(VAR_0);
}
