
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i915_request {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int const VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i915_request*,int *) ;
 int * FUNC_4 (struct i915_request*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct i915_request *VAR_4,
         u64 VAR_5, u32 VAR_6,
         const unsigned int VAR_7)
{
 u32 *VAR_8;

 VAR_8 = FUNC_4(VAR_4, 4);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);
 *VAR_8++ = VAR_2 | VAR_1;


 *VAR_8++ = VAR_3 |
  (VAR_7 & VAR_0 ? 0 : FUNC_0(8));
 *VAR_8++ = FUNC_5(VAR_5);
 *VAR_8++ = FUNC_6(VAR_5);

 FUNC_3(VAR_4, VAR_8);

 return 0;
}
