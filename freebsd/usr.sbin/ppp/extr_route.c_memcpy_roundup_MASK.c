
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (char*,void const*,size_t) ;
 int FUNC_2 (char*,char,size_t) ;

__attribute__((used)) static size_t
FUNC_3(char *VAR_0, const void *VAR_1, size_t VAR_2)
{
  size_t VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  FUNC_1(VAR_0, VAR_1, VAR_2);
  if (VAR_3 > VAR_2)
    FUNC_2(VAR_0 + VAR_2, '\0', VAR_3 - VAR_2);

  return VAR_3;
}
