
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int,int *,char*,int) ;

__attribute__((used)) static void FUNC_3(regex_t *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {

  char VAR_4[1024];
  FUNC_2(VAR_3, VAR_0, VAR_4, 1024);
  FUNC_0("invalid regex: %s", VAR_4);
 }
}
