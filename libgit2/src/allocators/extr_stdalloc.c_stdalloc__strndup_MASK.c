
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;
 char* FUNC_3 (size_t,char const*,int) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_0, size_t VAR_1, const char *VAR_2, int VAR_3)
{
 size_t VAR_4 = 0, VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_2(VAR_0, VAR_1);

 if (FUNC_0(&VAR_5, VAR_4, 1) ||
  !(VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3)))
  return ((void*)0);

 if (VAR_4)
  FUNC_1(VAR_6, VAR_0, VAR_4);

 VAR_6[VAR_4] = '\0';

 return VAR_6;
}
