
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {unsigned long* hang_timestamp; int file_priv; int guilty_count; int name; } ;


 int FUNC_0 (unsigned long*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct i915_gem_context*) ;
 int FUNC_6 (struct i915_gem_context*) ;
 int FUNC_7 (struct i915_gem_context*) ;
 int FUNC_8 (struct i915_gem_context*) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_9 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool FUNC_10(struct i915_gem_context *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;
 int VAR_5;

 FUNC_3(&VAR_2->guilty_count);


 if (!FUNC_6(VAR_2))
  return 0;


 VAR_3 = VAR_2->hang_timestamp[0];
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->hang_timestamp) - 1; VAR_5++)
  VAR_2->hang_timestamp[VAR_5] = VAR_2->hang_timestamp[VAR_5 + 1];
 VAR_2->hang_timestamp[VAR_5] = VAR_1;


 VAR_4 = !FUNC_7(VAR_2);
 if (FUNC_9(VAR_1, VAR_3 + VAR_0))
  VAR_4 = 1;
 if (VAR_4) {
  FUNC_1("context %s: guilty %d, banned\n",
     VAR_2->name, FUNC_4(&VAR_2->guilty_count));
  FUNC_8(VAR_2);
 }

 if (!FUNC_2(VAR_2->file_priv))
  FUNC_5(VAR_2->file_priv, VAR_2);

 return VAR_4;
}
