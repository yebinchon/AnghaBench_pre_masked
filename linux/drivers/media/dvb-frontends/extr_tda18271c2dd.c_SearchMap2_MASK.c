
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct SMapI {scalar_t__ m_Frequency; int m_Param; } ;
typedef int s32 ;



__attribute__((used)) static bool FUNC_0(struct SMapI VAR_0[],
         u32 VAR_1, s32 *VAR_2)
{
 int VAR_3 = 0;

 while ((VAR_0[VAR_3].m_Frequency != 0) &&
        (VAR_1 > VAR_0[VAR_3].m_Frequency))
  VAR_3 += 1;
 if (VAR_0[VAR_3].m_Frequency == 0)
  return 0;
 *VAR_2 = VAR_0[VAR_3].m_Param;
 return 1;
}
