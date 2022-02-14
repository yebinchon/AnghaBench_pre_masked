
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char const*) ;
 void* VAR_0 ;
 int FUNC_1 (void*,char const*) ;

int
FUNC_2 (const char *VAR_1)
{
  int VAR_2 = -1;
  void *VAR_3 = VAR_0;

  if (!VAR_3)
    return -1;

  if ((VAR_2 = FUNC_0 (VAR_3, VAR_1)) != -1)
    return VAR_2;

  return FUNC_1 (VAR_3, VAR_1);
}
