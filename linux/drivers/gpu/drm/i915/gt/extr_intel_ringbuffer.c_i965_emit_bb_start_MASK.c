
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_request {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i915_request*,int *) ;
 int * FUNC_3 (struct i915_request*,int) ;

__attribute__((used)) static int
FUNC_4(struct i915_request *VAR_4,
     u64 VAR_5, u32 VAR_6,
     unsigned int VAR_7)
{
 u32 *VAR_8;

 VAR_8 = FUNC_3(VAR_4, 2);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 *VAR_8++ = VAR_1 | VAR_2 | (VAR_7 &
  VAR_0 ? 0 : VAR_3);
 *VAR_8++ = VAR_5;
 FUNC_2(VAR_4, VAR_8);

 return 0;
}
