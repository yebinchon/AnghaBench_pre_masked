
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,size_t,char*,char const*,char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 int VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_2(((void*)0), 0, "%s%s", VAR_0, VAR_1);
 if (VAR_3 < 0)
  FUNC_0(2, "snprintf");
 VAR_4 = (size_t)VAR_3 + 1;
 VAR_2 = (char *)FUNC_1(VAR_4);
 if (VAR_2 == ((void*)0))
  FUNC_0(2, "malloc");
 FUNC_2(VAR_2, VAR_4, "%s%s", VAR_0, VAR_1);
 return (VAR_2);
}
