
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;

bool FUNC_1(void)
{
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  VAR_4 = FUNC_0(VAR_3 + VAR_1 + VAR_6 * 4);
  VAR_5 = FUNC_0(VAR_3 + VAR_0 + VAR_6 * 4);

  if (VAR_4 & VAR_5)
   return 1;
 }

 return 0;
}
