
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_syncmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i915_syncmap**) ;
 int FUNC_1 (struct i915_syncmap**) ;
 scalar_t__ FUNC_2 (struct i915_syncmap*,char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct i915_syncmap *VAR_2, int VAR_3)
{
 char *VAR_4;

 if (!VAR_3)
  return FUNC_0(&VAR_2);

 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_4)
  goto skip;

 if (FUNC_2(VAR_2, VAR_4, VAR_1))
  FUNC_5("%s", VAR_4);

 FUNC_3(VAR_4);

skip:
 FUNC_1(&VAR_2);
 return VAR_3;
}
