
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_3, unsigned long VAR_4,
   u32 *VAR_5, u32 *VAR_6)
{
 u32 VAR_7, VAR_8;
 unsigned long VAR_9;

 if (VAR_3 < VAR_1)
  VAR_3 = VAR_1;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 for (VAR_7 = 1; VAR_7 <= 6; VAR_7++) {
  if ((VAR_3 * (1 << VAR_7)) >= VAR_2)
   break;
 }

 VAR_9 = VAR_3 * (1 << VAR_7);
 VAR_8 = (VAR_9 + (VAR_4 / 2)) / VAR_4;
 VAR_8--;

 *VAR_5 = VAR_7;
 *VAR_6 = VAR_8;
}
