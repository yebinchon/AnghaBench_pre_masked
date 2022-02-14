
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
 u32 VAR_5;





 if (VAR_2 == 0) {
  VAR_5 = (FUNC_0(VAR_0) >> 8) & 0x3f;
 } else {
  VAR_5 = (FUNC_0(VAR_0) >> 14) & 0x3f;
 }





 *VAR_3 = ((u64)VAR_1 * (2 + (VAR_5 & 0xf))) >> 1;





 *VAR_4 = *VAR_3 / (((VAR_5 >> 4) & 3) + 1);
}
