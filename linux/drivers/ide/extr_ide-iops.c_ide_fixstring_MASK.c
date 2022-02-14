
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u16 ;


 int FUNC_0 (int *) ;

void FUNC_1(u8 *VAR_0, const int VAR_1, const int VAR_2)
{
 u8 *VAR_3, *VAR_4 = &VAR_0[VAR_1 & ~1];

 if (VAR_2) {

  for (VAR_3 = VAR_0 ; VAR_3 != VAR_4 ; VAR_3 += 2)
   FUNC_0((u16 *) VAR_3);
 }


 VAR_3 = VAR_0;
 while (VAR_0 != VAR_4 && *VAR_0 == ' ')
  ++VAR_0;

 while (VAR_0 != VAR_4 && *VAR_0) {
  if (*VAR_0++ != ' ' || (VAR_0 != VAR_4 && *VAR_0 && *VAR_0 != ' '))
   *VAR_3++ = *(VAR_0-1);
 }

 while (VAR_3 != VAR_4)
  *VAR_3++ = '\0';
}
