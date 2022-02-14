
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int m_high; int m_low; int member_1; int member_0; } ;
typedef TYPE_1__ uint128_t ;
typedef int u64 ;


 TYPE_1__ FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (int const,int const) ;

__attribute__((used)) static void FUNC_2(u64 *VAR_0, const u64 *VAR_1, unsigned int VAR_2)
{
 uint128_t VAR_3 = { 0, 0 };
 u64 VAR_4 = 0;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2 * 2 - 1; VAR_6++) {
  unsigned int VAR_7;

  if (VAR_6 < VAR_2)
   VAR_7 = 0;
  else
   VAR_7 = (VAR_6 + 1) - VAR_2;

  for (VAR_5 = VAR_7; VAR_5 <= VAR_6 && VAR_5 <= VAR_6 - VAR_5; VAR_5++) {
   uint128_t VAR_8;

   VAR_8 = FUNC_1(VAR_1[VAR_5], VAR_1[VAR_6 - VAR_5]);

   if (VAR_5 < VAR_6 - VAR_5) {
    VAR_4 += VAR_8.m_high >> 63;
    VAR_8.m_high = (VAR_8.m_high << 1) |
       (VAR_8.m_low >> 63);
    VAR_8.m_low <<= 1;
   }

   VAR_3 = FUNC_0(VAR_3, VAR_8);
   VAR_4 += (VAR_3 < VAR_8.m_high);
  }

  VAR_0[VAR_6] = VAR_3;
  VAR_3 = VAR_3;
  VAR_3 = VAR_4;
  VAR_4 = 0;
 }

 VAR_0[VAR_2 * 2 - 1] = VAR_3;
}
