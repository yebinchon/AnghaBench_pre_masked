
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct SMap2 {scalar_t__ m_Frequency; int m_Param2; int m_Param1; } ;



__attribute__((used)) static bool FUNC_0(struct SMap2 VAR_0[], u32 VAR_1,
         u8 *VAR_2, u8 *VAR_3)
{
 int VAR_4 = 0;

 while ((VAR_0[VAR_4].m_Frequency != 0) &&
        (VAR_1 > VAR_0[VAR_4].m_Frequency))
  VAR_4 += 1;
 if (VAR_0[VAR_4].m_Frequency == 0)
  return 0;
 *VAR_2 = VAR_0[VAR_4].m_Param1;
 *VAR_3 = VAR_0[VAR_4].m_Param2;
 return 1;
}
