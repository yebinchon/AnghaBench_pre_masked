
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,unsigned long) ;

__attribute__((used)) static char *FUNC_1(const char *VAR_0, unsigned long VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_0, VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2[VAR_3] == '\n')
   VAR_2[VAR_3] = ' ';

 return VAR_2;
}
