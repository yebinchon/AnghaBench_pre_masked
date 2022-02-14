
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static bool FUNC_3(char *VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 int VAR_5;


 VAR_3 = FUNC_2(VAR_2, '(');
 if (!VAR_3++)
  return 0;


 VAR_4 = FUNC_1(VAR_3, ')');
 if (!VAR_4)
  return 0;

 VAR_5 = VAR_4 - VAR_3;
 if (VAR_5 >= VAR_0)
  return 0;

 FUNC_0(VAR_1, VAR_3, VAR_5);
 VAR_1[VAR_5] = '\0';
 return 1;
}
