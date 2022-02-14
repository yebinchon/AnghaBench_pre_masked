
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_copy ;


 long FUNC_0 (int ) ;
 size_t FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;

long FUNC_3(const char *VAR_0)
{

 char VAR_1[32];
 size_t VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0, sizeof(VAR_1));
 if (VAR_2 >= sizeof(VAR_1))
  return 0;

 return FUNC_0(FUNC_2(VAR_1));
}
