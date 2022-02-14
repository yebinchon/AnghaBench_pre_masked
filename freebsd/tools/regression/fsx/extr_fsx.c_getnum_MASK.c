
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char**,int ) ;

int
FUNC_1(char *VAR_0, char **VAR_1)
{
 int VAR_2 = -1;

 *VAR_1 = (char *) 0;
 VAR_2 = FUNC_0(VAR_0, VAR_1, 0);
 if (*VAR_1)
  switch (**VAR_1) {
  case 'b':
  case 'B':
   VAR_2 *= 512;
   *VAR_1 = *VAR_1 + 1;
   break;
  case 'k':
  case 'K':
   VAR_2 *= 1024;
   *VAR_1 = *VAR_1 + 1;
   break;
  case 'm':
  case 'M':
   VAR_2 *= 1024*1024;
   *VAR_1 = *VAR_1 + 1;
   break;
  case 'w':
  case 'W':
   VAR_2 *= 4;
   *VAR_1 = *VAR_1 + 1;
   break;
  }
 return (VAR_2);
}
