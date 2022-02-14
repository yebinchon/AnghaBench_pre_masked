
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int * const) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(u32 * const VAR_1, u64 VAR_2)
{
 u32 *VAR_3 = FUNC_2(VAR_1);


 if (VAR_0) {
  *VAR_3 = FUNC_1(FUNC_3(VAR_2));
  *(++VAR_3) = FUNC_1(FUNC_4(VAR_2));
 } else {
  *VAR_3 = FUNC_1(FUNC_4(VAR_2));
  *(++VAR_3) = FUNC_1(FUNC_3(VAR_2));
 }

 (*VAR_1) = FUNC_1(FUNC_0(*VAR_1) + 2);
}
