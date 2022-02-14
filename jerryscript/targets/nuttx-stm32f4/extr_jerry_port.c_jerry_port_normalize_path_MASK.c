
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*) ;

size_t
FUNC_2 (const char *VAR_0,
                           char *VAR_1,
                           size_t VAR_2,
                           char *VAR_3)
{
  (void) VAR_3;

  size_t VAR_4 = FUNC_1 (VAR_0);
  if (VAR_4 + 1 > VAR_2)
  {
    return 0;
  }


  FUNC_0 (VAR_1, VAR_0);
  return VAR_4;
}
