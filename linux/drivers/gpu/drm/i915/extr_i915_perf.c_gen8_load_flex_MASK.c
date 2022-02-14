
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_context {int dummy; } ;
struct i915_request {int dummy; } ;
struct flex {int value; int reg; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct i915_request*,int *) ;
 int * FUNC_6 (struct i915_request*,int) ;

__attribute__((used)) static int
FUNC_7(struct i915_request *VAR_1,
        struct intel_context *VAR_2,
        const struct flex *VAR_3, unsigned int VAR_4)
{
 u32 *VAR_5;

 FUNC_0(!VAR_4 || VAR_4 > 63);

 VAR_5 = FUNC_6(VAR_1, 2 * VAR_4 + 2);
 if (FUNC_1(VAR_5))
  return FUNC_3(VAR_5);

 *VAR_5++ = FUNC_2(VAR_4);
 do {
  *VAR_5++ = FUNC_4(VAR_3->reg);
  *VAR_5++ = VAR_3->value;
 } while (VAR_3++, --VAR_4);
 *VAR_5++ = VAR_0;

 FUNC_5(VAR_1, VAR_5);

 return 0;
}
