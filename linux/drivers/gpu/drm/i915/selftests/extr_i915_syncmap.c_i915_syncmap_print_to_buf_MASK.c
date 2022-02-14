
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_syncmap {struct i915_syncmap* parent; } ;


 int FUNC_0 (struct i915_syncmap*,char*,unsigned long*,int ,int,int ) ;

__attribute__((used)) static bool
FUNC_1(struct i915_syncmap *VAR_0, char *VAR_1, unsigned long VAR_2)
{
 if (!VAR_0)
  return 0;

 while (VAR_0->parent)
  VAR_0 = VAR_0->parent;

 FUNC_0(VAR_0, VAR_1, &VAR_2, 0, 1, 0);
 return 1;
}
