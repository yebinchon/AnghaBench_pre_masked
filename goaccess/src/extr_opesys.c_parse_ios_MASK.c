
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 char* FUNC_0 (char*,char,char) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3 (char *VAR_0, int VAR_1)
{
  char *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
  ptrdiff_t VAR_4;

  VAR_2 = VAR_0;
  if ((VAR_2 = FUNC_2 (VAR_0, " OS ")) == ((void*)0))
    goto out;

  if ((VAR_4 = VAR_2 - VAR_0) <= 0)
    goto out;

  if ((VAR_3 = FUNC_2 (VAR_2, " like Mac")) == ((void*)0))
    goto out;

  *VAR_3 = 0;
  FUNC_1 (VAR_0 + VAR_1, VAR_0 + VAR_4, VAR_4);
  return FUNC_0 (VAR_0, '_', '.');

out:
  VAR_0[VAR_1] = 0;
  return VAR_0;
}
