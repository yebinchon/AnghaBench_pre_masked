
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,size_t) ;
 scalar_t__ FUNC_2 (char const*,int *,int) ;

int
FUNC_3(const char *VAR_2)
{
    size_t VAR_3;

    VAR_3 = FUNC_0(VAR_2);
    if (VAR_3 != 0)
    {
 if (FUNC_1(VAR_2, "infinity", VAR_3) == 0 ||
     FUNC_1(VAR_2, "all", VAR_3) == 0 ||
     FUNC_1(VAR_2, "maximum", VAR_3) == 0)
 {
     return(VAR_0);
 }
 else if (VAR_2[0] == '-')
 {
     return(VAR_1);
 }
 else
 {
  return((int)FUNC_2(VAR_2, ((void*)0), 10));
 }
    }
    return(0);
}
