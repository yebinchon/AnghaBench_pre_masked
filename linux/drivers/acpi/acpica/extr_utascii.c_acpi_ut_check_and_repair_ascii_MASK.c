
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(u8 *VAR_0, char *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1[VAR_3] = (char)VAR_0[VAR_3];

  if (!VAR_0[VAR_3]) {
   return;
  }
  if (!FUNC_0(VAR_0[VAR_3])) {
   VAR_1[VAR_3] = ' ';
  }
 }
}
