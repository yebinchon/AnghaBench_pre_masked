
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (char const*,char*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2 * 2; VAR_3++)
  if (!FUNC_0((unsigned char)VAR_0[VAR_3]))
   return (1);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(&VAR_0[VAR_3 * 2], "%02hhx", &VAR_1[VAR_3]);
 return (0);
}
