
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_0(int VAR_2, char *VAR_3, int VAR_4)
{
 register int VAR_5;

 for (VAR_5 = VAR_1; --VAR_5;) {
  VAR_2 <<= 1;
  *VAR_3++ = VAR_2 & 0200 ? VAR_4 : VAR_0;
 }
 return (VAR_3);
}
