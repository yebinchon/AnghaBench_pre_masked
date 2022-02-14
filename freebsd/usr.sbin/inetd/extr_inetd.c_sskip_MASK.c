
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char**) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static char *
FUNC_3(char **VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_2, "%s: syntax error", VAR_0);
  FUNC_0(VAR_1);
 }
 return (VAR_4);
}
