
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const char VAR_1[])
{
 register int VAR_2;
 register const char *VAR_3;

 for (VAR_3 = VAR_1, VAR_2 = 0; *VAR_3; VAR_2 = (VAR_2 << 2) + *VAR_3++)
  ;
 return((VAR_2 & 0x7fffffff) % VAR_0);
}
