
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(const u8 *VAR_4, int *VAR_5, int *VAR_6)
{
 if (VAR_4[0] == VAR_1) {
  *VAR_5 = 3;
  *VAR_6 = *VAR_5 + VAR_4[2];
 } else if (VAR_4[0] == VAR_0) {

  *VAR_5 = 4;
  *VAR_6 = VAR_4[2];
  if (*VAR_6 == 0)
   *VAR_6 = 127;
  if (*VAR_6 < 4 || *VAR_6 > 127)
   return -VAR_3;
 } else {
  return -VAR_2;
 }

 return 0;
}
