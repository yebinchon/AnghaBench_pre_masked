
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 char* FUNC_0 (char*,int) ;

char *FUNC_1(long VAR_2) {
 char VAR_3[25], *VAR_4 = VAR_3 + sizeof (VAR_3);
 unsigned long VAR_5;

 if (VAR_2 == VAR_1)
  VAR_5 = (unsigned long)VAR_0 + 1;
 else if (VAR_2 < 0)
  VAR_5 = -VAR_2;
 else
  VAR_5 = VAR_2;
 do
  *--VAR_4 = VAR_5%10 + '0';
 while ((VAR_5 /= 10) != 0);
 if (VAR_2 < 0)
  *--VAR_4 = '-';
 return FUNC_0(VAR_4, VAR_3 + sizeof (VAR_3) - VAR_4);
}
