
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(u64 *VAR_5, u64 *VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;






 if (*VAR_6 == 0xf) {
  *VAR_5 = *VAR_5 | VAR_4;
  *VAR_6 = VAR_3;
  return VAR_8;
 }
 if (FUNC_1(*VAR_5) != FUNC_0(*VAR_5)) {
  VAR_8 = VAR_1;
 } else if ((VAR_7 & VAR_2) &&
  FUNC_1(*VAR_5) == 0) {
  VAR_8 = VAR_0;
 }

 return VAR_8;
}
