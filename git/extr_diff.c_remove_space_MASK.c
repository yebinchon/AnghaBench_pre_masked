
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, int VAR_1)
{
 int VAR_2;
 char *VAR_3 = VAR_0;
 unsigned char VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  if (!FUNC_0((VAR_4 = VAR_0[VAR_2])))
   *VAR_3++ = VAR_4;

 return VAR_3 - VAR_0;
}
