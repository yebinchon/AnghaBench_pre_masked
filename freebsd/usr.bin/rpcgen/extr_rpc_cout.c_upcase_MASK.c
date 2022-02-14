
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1, *VAR_2;

 VAR_1 = (char *)FUNC_2(FUNC_0(VAR_0)+1);

 VAR_2 = VAR_1;
 while (*VAR_0 != '\0')
  *VAR_1++ = FUNC_1(*VAR_0++);

 *VAR_1 = '\0';
 return (VAR_2);
}
