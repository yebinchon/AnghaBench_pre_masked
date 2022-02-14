
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline u8 FUNC_0(u8 VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;



 VAR_7 = ((VAR_6 & 0xc0) >> 4) | (VAR_6 & ~(0xc0 >> 4));

 VAR_7 = ((VAR_7 & 0x28) >> 2) | (VAR_7 & ~(0x28 >> 2));

 VAR_7 = (VAR_7 & 0x1e) >> 1;



 VAR_8 = ((VAR_6 & 0x03) << 4) | (VAR_6 & ~(0x03 << 4));

 VAR_8 = ((VAR_8 & 0x14) << 2) | (VAR_8 & ~(0x14 << 2));

 VAR_8 = (VAR_8 & 0x78) << 1;

 return VAR_7 | VAR_8;
}
