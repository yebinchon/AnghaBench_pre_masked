
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;
 char* FUNC_2 (char*,size_t) ;

__attribute__((used)) static void
FUNC_3 (char **VAR_0, const char *VAR_1)
{
  size_t VAR_2 = FUNC_1 (*VAR_0);
  size_t VAR_3 = FUNC_1 (VAR_1);
  size_t VAR_4 = VAR_2 + VAR_3;

  char *VAR_5 = FUNC_2 (*VAR_0, VAR_4 + 1);
  FUNC_0 (VAR_5 + VAR_2, VAR_1, VAR_3 + 1);
  *VAR_0 = VAR_5;
}
