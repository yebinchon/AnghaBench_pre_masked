
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (unsigned long) ;

int FUNC_2(const u32 *VAR_3, unsigned int VAR_4,
  unsigned long VAR_5, unsigned long VAR_6,
  unsigned long *VAR_7, unsigned int *VAR_8)
{
 if (FUNC_0(VAR_4 < 1 || VAR_4 > 2))
  return -VAR_0;
 if (VAR_4 == 2 && VAR_3[1] == 1) {
  VAR_5 = FUNC_1(VAR_6);
  if (VAR_5 < VAR_2)
   *VAR_7 = VAR_5;
  else
   return -VAR_0;
 } else {
  *VAR_7 = VAR_5;
 }
 *VAR_8 = VAR_1;
 return 0;
}
