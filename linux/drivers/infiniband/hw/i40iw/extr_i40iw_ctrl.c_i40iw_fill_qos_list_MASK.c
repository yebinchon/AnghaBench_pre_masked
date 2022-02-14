
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(u16 *VAR_2)
{
 u16 VAR_3 = VAR_2[0];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2[VAR_4] == VAR_1)
   VAR_2[VAR_4] = VAR_3;
  else
   VAR_3 = VAR_2[VAR_4];
 }
}
