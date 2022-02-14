
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_syncmap {int prefix; scalar_t__ bitmap; scalar_t__ height; struct i915_syncmap* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i915_syncmap*,int ) ;
 struct i915_syncmap* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct i915_syncmap *
FUNC_3(struct i915_syncmap *VAR_2, u64 VAR_3)
{
 struct i915_syncmap *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4) + VAR_1 * sizeof(u32), VAR_0);
 if (FUNC_2(!VAR_4))
  return ((void*)0);

 VAR_4->parent = VAR_2;
 VAR_4->height = 0;
 VAR_4->bitmap = 0;
 VAR_4->prefix = FUNC_0(VAR_4, VAR_3);
 return VAR_4;
}
