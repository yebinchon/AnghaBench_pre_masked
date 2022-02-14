
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int
FUNC_1(const char *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return (VAR_2);

 if (FUNC_0(VAR_3, "on") == 0 ||
     FUNC_0(VAR_3, "yes") == 0)
  return (VAR_1);

 if (FUNC_0(VAR_3, "off") == 0 ||
     FUNC_0(VAR_3, "no") == 0)
  return (VAR_0);

 return (VAR_2);
}
