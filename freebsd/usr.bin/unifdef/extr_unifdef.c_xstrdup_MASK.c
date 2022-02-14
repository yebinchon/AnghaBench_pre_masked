
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char const*) ;

__attribute__((used)) static const char *
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 char *VAR_3;

 if (VAR_1 < VAR_0) FUNC_0();
 VAR_2 = (size_t)(VAR_1 - VAR_0) + 1;
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_1(2, "malloc");
 FUNC_3(VAR_3, VAR_2, "%s", VAR_0);
 return (VAR_3);
}
