
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u16 *VAR_0, u32 *VAR_1,
        unsigned int VAR_2,
        bool VAR_3)
{
 unsigned int VAR_4;
 u16 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = ((VAR_1[VAR_4] & 0x00F80000) >> 8) |
   ((VAR_1[VAR_4] & 0x0000FC00) >> 5) |
   ((VAR_1[VAR_4] & 0x000000F8) >> 3);
  if (VAR_3)
   VAR_0[VAR_4] = FUNC_0(VAR_5);
  else
   VAR_0[VAR_4] = VAR_5;
 }
}
