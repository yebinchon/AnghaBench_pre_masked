
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s16 ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1, u8 VAR_2, u8 VAR_3, s16 VAR_4)
{
 VAR_1 |= VAR_2 << 12 | VAR_3 << 16;
 if (VAR_4 >= 0)
  VAR_1 |= VAR_0;
 else
  VAR_4 = -VAR_4;
 return VAR_1 | (VAR_4 & 0xf0) << 4 | (VAR_4 & 0x0f);
}
