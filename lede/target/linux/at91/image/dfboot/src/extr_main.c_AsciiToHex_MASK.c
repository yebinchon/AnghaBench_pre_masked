
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(char *VAR_0, unsigned int *VAR_1)
{
 int VAR_2;

 *VAR_1=0;

 if(VAR_0[0] == '0' && ((VAR_0[1] == 'x') || (VAR_0[1] == 'X')))
  VAR_0+=2;
 VAR_2 = 0;
 while((VAR_2 < 8) && (VAR_0[VAR_2] !=0))
 {
  *VAR_1 <<= 4;
  if ( (VAR_0[VAR_2] >= '0') && (VAR_0[VAR_2] <='9'))
   *VAR_1 += (VAR_0[VAR_2] - '0');
  else
   if ((VAR_0[VAR_2] >= 'a') && (VAR_0[VAR_2] <='f'))
    *VAR_1 += (VAR_0[VAR_2] - 0x57);
   else
    if ((VAR_0[VAR_2] >= 'A') && (VAR_0[VAR_2] <='F'))
     *VAR_1 += (VAR_0[VAR_2] - 0x37);
   else
    return 0;
  VAR_2++;
 }

 return 1;
}
