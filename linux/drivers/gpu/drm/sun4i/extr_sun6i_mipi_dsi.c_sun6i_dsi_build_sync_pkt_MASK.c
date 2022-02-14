
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 u32 VAR_4 = VAR_0 & 0x3f;

 VAR_4 |= (VAR_1 & 3) << 6;
 VAR_4 |= (VAR_2 & 0xff) << 8;
 VAR_4 |= (VAR_3 & 0xff) << 16;
 VAR_4 |= FUNC_0(VAR_4) << 24;

 return VAR_4;
}
