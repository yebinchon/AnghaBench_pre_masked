
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static u8 FUNC_0(u16 VAR_0, u16 VAR_1)
{
 u8 VAR_2;
 u16 VAR_3 = VAR_0 / VAR_1;

 if (VAR_3 >= 16)
  return 0;
 VAR_2 = 4;
 while (VAR_3 > 1) {
  VAR_3 >>= 1;
  --VAR_2;
 }
 return VAR_2;
}
