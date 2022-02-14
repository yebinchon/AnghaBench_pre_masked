
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;

void
FUNC_1(const char *VAR_1)
{
 char VAR_2 = 0;
 unsigned int VAR_3 = 0;

 if (*VAR_1 == '+' || *VAR_1 == '-')
  VAR_2 = *VAR_1++;
 while (*VAR_1)
  VAR_3 |= FUNC_0(*VAR_1++);
 switch(VAR_2) {
 case 0:
  VAR_0 = VAR_3;
  break;
 case '+':
  VAR_0 |= VAR_3;
  break;
 case '-':
  VAR_0 &= ~VAR_3;
  break;
 }
}
