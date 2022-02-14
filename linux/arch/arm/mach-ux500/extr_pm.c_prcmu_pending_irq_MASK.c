
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

bool FUNC_1(void)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0 - 1; VAR_5++) {
  VAR_3 = FUNC_0(VAR_2 + VAR_5 * 4);
  VAR_4 = FUNC_0(VAR_1 + VAR_5 * 4);
  if (VAR_3 & VAR_4)
   return 1;
 }

 return 0;
}
