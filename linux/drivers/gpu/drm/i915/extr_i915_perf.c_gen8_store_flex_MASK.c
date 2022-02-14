
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_context {int state; } ;
struct i915_request {int dummy; } ;
struct flex {int offset; int value; } ;


 scalar_t__ FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i915_request*,int*) ;
 int* FUNC_4 (struct i915_request*,int) ;

__attribute__((used)) static int
FUNC_5(struct i915_request *VAR_4,
  struct intel_context *VAR_5,
  const struct flex *VAR_6, unsigned int VAR_7)
{
 u32 VAR_8;
 u32 *VAR_9;

 VAR_9 = FUNC_4(VAR_4, 4 * VAR_7);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_8 = FUNC_2(VAR_5->state) + VAR_0 * VAR_3;
 do {
  *VAR_9++ = VAR_1 | VAR_2;
  *VAR_9++ = VAR_8 + (VAR_6->offset + 1) * sizeof(u32);
  *VAR_9++ = 0;
  *VAR_9++ = VAR_6->value;
 } while (VAR_6++, --VAR_7);

 FUNC_3(VAR_4, VAR_9);

 return 0;
}
