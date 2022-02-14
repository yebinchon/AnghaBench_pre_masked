
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (char*,int *) ;
 char* FUNC_2 (int ,struct in6_addr*,char*,int) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_2, struct in6_addr *VAR_3)
{
 char VAR_4[VAR_1];
 const char *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4, VAR_1);
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_2, "{addr=%s}", VAR_5);
 else
  FUNC_1("{addr=???}", VAR_2);
}
