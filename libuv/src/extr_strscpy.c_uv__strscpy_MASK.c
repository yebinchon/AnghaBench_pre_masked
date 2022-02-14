
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;

ssize_t FUNC_0(char* VAR_2, const char* VAR_3, size_t VAR_4) {
  size_t VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    if ('\0' == (VAR_2[VAR_5] = VAR_3[VAR_5]))
      return VAR_5 > VAR_0 ? VAR_1 : (ssize_t) VAR_5;

  if (VAR_5 == 0)
    return 0;

  VAR_2[--VAR_5] = '\0';

  return VAR_1;
}
