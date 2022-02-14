
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,char const*) ;
 int * FUNC_1 (char const*,char*) ;
 int * VAR_0 ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static FILE *
FUNC_3(const char *VAR_1)
{
 FILE *VAR_2;

 if (!FUNC_2(VAR_1, "-"))
  return (VAR_0);
 if ((VAR_2 = FUNC_1(VAR_1, "r")) == ((void*)0)) {
  FUNC_0(1, "%s", VAR_1);
 }
 return (VAR_2);
}
