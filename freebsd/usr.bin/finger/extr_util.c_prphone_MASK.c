
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

char *
FUNC_1(char *VAR_0)
{
 char *VAR_1;
 int VAR_2;
 static char VAR_3[20];


 for (VAR_1 = VAR_0; *VAR_1; ++VAR_1)
  if (!FUNC_0(*VAR_1))
   return(VAR_0);
 VAR_2 = VAR_1 - VAR_0;
 VAR_1 = VAR_3;
 switch(VAR_2) {
 case 11:
  *VAR_1++ = '+';
  *VAR_1++ = *VAR_0++;
  *VAR_1++ = '-';

 case 10:
  *VAR_1++ = *VAR_0++;
  *VAR_1++ = *VAR_0++;
  *VAR_1++ = *VAR_0++;
  *VAR_1++ = '-';

 case 7:
  *VAR_1++ = *VAR_0++;
  *VAR_1++ = *VAR_0++;
  *VAR_1++ = *VAR_0++;
  break;
 case 5:
 case 4:
  *VAR_1++ = 'x';
  *VAR_1++ = *VAR_0++;
  break;
 default:
  return(VAR_0);
 }
 if (VAR_2 != 4) {
     *VAR_1++ = '-';
     *VAR_1++ = *VAR_0++;
 }
 *VAR_1++ = *VAR_0++;
 *VAR_1++ = *VAR_0++;
 *VAR_1++ = *VAR_0++;
 *VAR_1 = '\0';
 return(VAR_3);
}
