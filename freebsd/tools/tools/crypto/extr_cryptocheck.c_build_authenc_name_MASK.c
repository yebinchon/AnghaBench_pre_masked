
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alg {int dummy; } ;


 struct alg* FUNC_0 (struct alg*,struct alg*) ;
 int FUNC_1 (int,char*,char const*) ;
 struct alg* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*,int) ;

__attribute__((used)) static struct alg *
FUNC_6(const char *VAR_0)
{
 struct alg *VAR_1, *VAR_2;
 const char *VAR_3;
 char *VAR_4, *VAR_5;

 VAR_4 = FUNC_4(VAR_0, '+');
 VAR_5 = FUNC_5(VAR_0, VAR_4 - VAR_0);
 VAR_3 = VAR_4 + 1;
 VAR_1 = FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 if (VAR_1 == ((void*)0))
  FUNC_1(1, "Invalid cipher %s", VAR_5);
 VAR_2 = FUNC_2(VAR_3);
 if (VAR_2 == ((void*)0))
  FUNC_1(1, "Invalid hash %s", VAR_3);
 return (FUNC_0(VAR_1, VAR_2));
}
