
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct SRFBandMap {scalar_t__ m_RF_max; } ;



__attribute__((used)) static bool FUNC_0(struct SRFBandMap VAR_0[],
         u32 VAR_1, u8 *VAR_2)
{
 int VAR_3 = 0;

 while (VAR_3 < 7 && (VAR_1 > VAR_0[VAR_3].m_RF_max))
  VAR_3 += 1;
 if (VAR_3 == 7)
  return 0;
 *VAR_2 = VAR_3;
 return 1;
}
