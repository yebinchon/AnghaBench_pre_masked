
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,char const*,int) ;

__attribute__((used)) static int
FUNC_2 (void *VAR_0, const char *VAR_1)
{
  int VAR_2 = 0, VAR_3 = 0;

  if (!VAR_0)
    return -1;

  VAR_2 = FUNC_0 (VAR_0);

  VAR_3 = VAR_2 > 0 ? VAR_2 + 1 : 1;

  if (FUNC_1 (VAR_0, VAR_1, VAR_3) == -1)
    return -1;

  return VAR_3;
}
