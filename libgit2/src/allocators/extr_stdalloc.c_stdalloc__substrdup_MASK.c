
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (size_t,char const*,int) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, size_t VAR_1, const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 size_t VAR_5;

 if (FUNC_0(&VAR_5, VAR_1, 1) ||
  !(VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3)))
  return ((void*)0);

 FUNC_1(VAR_4, VAR_0, VAR_1);
 VAR_4[VAR_1] = '\0';
 return VAR_4;
}
