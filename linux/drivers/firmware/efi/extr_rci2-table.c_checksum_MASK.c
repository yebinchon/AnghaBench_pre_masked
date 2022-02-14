
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u16 FUNC_0(void)
{
 u8 VAR_2 = VAR_1 % 2;
 u32 VAR_3 = VAR_1;
 u16 *VAR_4 = (u16 *)VAR_0;
 u8 VAR_5[2] = {0};
 u32 VAR_6 = 0;
 u16 VAR_7 = 0;

 if (VAR_2)
  VAR_3 -= 1;

 while (VAR_6 < VAR_3) {
  VAR_7 += *VAR_4;
  VAR_6 += 2;
  VAR_4++;
 }

 if (VAR_2) {
  VAR_5[0] = *(u8 *)VAR_4;
  VAR_7 += *(u16 *)(VAR_5);
 }

 return VAR_7;
}
