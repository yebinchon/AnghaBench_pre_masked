
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_2, u8 VAR_3, u8 VAR_4, s16 VAR_5)
{
 VAR_2 |= VAR_3 << 12 | VAR_4 << 16;
 if (VAR_5 >= 0)
  VAR_2 |= VAR_1;
 else
  VAR_5 = -VAR_5;
 return VAR_2 | (VAR_5 & VAR_0);
}
