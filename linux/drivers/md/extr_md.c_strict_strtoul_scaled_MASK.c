
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char const) ;

int FUNC_2(const char *VAR_1, unsigned long *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = 0;
 long VAR_5 = -1;
 while (FUNC_1(*VAR_1) || (*VAR_1 == '.' && VAR_5 < 0)) {
  if (*VAR_1 == '.')
   VAR_5 = 0;
  else if (VAR_5 < VAR_3) {
   unsigned int VAR_6;
   VAR_6 = *VAR_1 - '0';
   VAR_4 = VAR_4 * 10 + VAR_6;
   if (VAR_5 >= 0)
    VAR_5++;
  }
  VAR_1++;
 }
 if (*VAR_1 == '\n')
  VAR_1++;
 if (*VAR_1)
  return -VAR_0;
 if (VAR_5 < 0)
  VAR_5 = 0;
 *VAR_2 = VAR_4 * FUNC_0(10, VAR_3 - VAR_5);
 return 0;
}
