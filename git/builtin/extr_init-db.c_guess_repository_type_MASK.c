
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2;
 int VAR_3;





 if (!FUNC_1(".", VAR_0))
  return 1;
 VAR_2 = FUNC_3();
 VAR_3 = !FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_2);
 if (VAR_3)
  return 1;



 if (!FUNC_1(VAR_0, ".git"))
  return 0;
 VAR_1 = FUNC_2(VAR_0, '/');
 if (VAR_1 && !FUNC_1(VAR_1, "/.git"))
  return 0;





 return 1;
}
