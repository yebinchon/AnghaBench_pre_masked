
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (scalar_t__* const) ;

__attribute__((used)) static inline void FUNC_3(u32 * const VAR_0, u32 VAR_1)
{
 u32 *VAR_2 = FUNC_2(VAR_0);

 *VAR_2 = FUNC_1(VAR_1);

 (*VAR_0) = FUNC_1(FUNC_0(*VAR_0) + 1);
}
