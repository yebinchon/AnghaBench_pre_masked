
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char,int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;

void FUNC_2(char VAR_5)
{
 int VAR_6 = 0;



 if (!VAR_0)
  return;

 switch (VAR_5) {
 case '\b':
  if (VAR_1 > 0)
   --VAR_1;
  break;
 case '\t':
  VAR_1 = (VAR_1 & -8) + 8;
  break;
 case '\r':
  VAR_1 = 0;
  break;
 case '\n':
  VAR_1 = 0;
  VAR_2++;
  VAR_6 = 1;
  break;
 default:
  FUNC_0(VAR_5, VAR_1++, VAR_2);
 }
 if (VAR_1 >= VAR_3) {
  VAR_1 = 0;
  VAR_2++;
  VAR_6 = 1;
 }

 while (VAR_2 >= VAR_4) {
  FUNC_1();
  VAR_2--;
 }
}
