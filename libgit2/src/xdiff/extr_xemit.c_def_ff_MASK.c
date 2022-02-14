
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,char const*,long) ;

__attribute__((used)) static long FUNC_3(const char *VAR_0, long VAR_1, char *VAR_2, long VAR_3, void *VAR_4)
{
 (void)VAR_4;

 if (VAR_1 > 0 &&
   (FUNC_0((unsigned char)*VAR_0) ||
    *VAR_0 == '_' ||
    *VAR_0 == '$')) {
  if (VAR_1 > VAR_3)
   VAR_1 = VAR_3;
  while (0 < VAR_1 && FUNC_1((unsigned char)VAR_0[VAR_1 - 1]))
   VAR_1--;
  FUNC_2(VAR_2, VAR_0, VAR_1);
  return VAR_1;
 }
 return -1;
}
