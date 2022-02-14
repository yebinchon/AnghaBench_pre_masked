
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char const*,int *,char const*,char*,int,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, const char *VAR_1,
        char VAR_2[2], bool VAR_3)
{
 char VAR_4[10];
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, ((void*)0), VAR_1, VAR_4, sizeof(VAR_4), VAR_3);
 if (VAR_5 < 0)
  return;
 if (VAR_4[0] == '0')
  return;
 if (FUNC_3(VAR_4) > 2) {
  FUNC_2("alpha2 is too long %s\n", VAR_4);
  return;
 }
 FUNC_1(VAR_2, VAR_4, 2);
}
