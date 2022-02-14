
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_syncmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_syncmap**) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct i915_syncmap **VAR_1)
{
 FUNC_0(VAR_1);
 if (*VAR_1) {
  FUNC_1("sync not cleared after free\n");
  return -VAR_0;
 }

 return 0;
}
