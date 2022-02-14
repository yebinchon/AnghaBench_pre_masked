
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ m_high; scalar_t__ m_low; int member_1; int member_0; } ;
typedef TYPE_1__ uint128_t ;
typedef scalar_t__ u64 ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static void FUNC_2(u64 *VAR_0, const u64 *VAR_1, const u64 *VAR_2,
       unsigned int VAR_3)
{
 uint128_t VAR_4 = { 0, 0 };
 u64 VAR_5 = 0;
 unsigned int VAR_6, VAR_7;




 for (VAR_7 = 0; VAR_7 < VAR_3 * 2 - 1; VAR_7++) {
  unsigned int VAR_8;

  if (VAR_7 < VAR_3)
   VAR_8 = 0;
  else
   VAR_8 = (VAR_7 + 1) - VAR_3;

  for (VAR_6 = VAR_8; VAR_6 <= VAR_7 && VAR_6 < VAR_3; VAR_6++) {
   uint128_t VAR_9;

   VAR_9 = FUNC_1(VAR_1[VAR_6], VAR_2[VAR_7 - VAR_6]);

   VAR_4 = FUNC_0(VAR_4, VAR_9);
   VAR_5 += (VAR_4 < VAR_9.m_high);
  }

  VAR_0[VAR_7] = VAR_4;
  VAR_4 = VAR_4;
  VAR_4 = VAR_5;
  VAR_5 = 0;
 }

 VAR_0[VAR_3 * 2 - 1] = VAR_4;
}
