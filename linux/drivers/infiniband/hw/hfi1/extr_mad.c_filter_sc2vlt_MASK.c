
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2, bool VAR_3)
{
 int VAR_4;
 u8 *VAR_5 = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_4 == 15)
   continue;

  if (VAR_3) {
   if ((VAR_5[VAR_4] & 0x1f) == 0xf)
    VAR_5[VAR_4] = VAR_0;
  } else {
   if ((VAR_5[VAR_4] & 0x1f) == VAR_0)
    VAR_5[VAR_4] = 0xf;
  }
 }
}
