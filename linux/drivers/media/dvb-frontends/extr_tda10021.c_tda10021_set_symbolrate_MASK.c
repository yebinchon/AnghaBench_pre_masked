
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tda10021_state {int dummy; } ;
typedef int s32 ;
typedef int s16 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tda10021_state*,int,int) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_2 (struct tda10021_state* VAR_3, u32 VAR_4)
{
 s32 VAR_5;
 s32 VAR_6;
 s16 VAR_7=0;
 u16 VAR_8 = 0;
 u32 VAR_9, VAR_10;

 if (VAR_4 > VAR_1/2)
  VAR_4 = VAR_1/2;
 if (VAR_4 < 500000)
  VAR_4 = 500000;

 if (VAR_4 < VAR_1/16) VAR_8 = 1;
 if (VAR_4 < VAR_1/32) VAR_8 = 2;
 if (VAR_4 < VAR_1/64) VAR_8 = 3;

 if (VAR_4 < (u32)(VAR_1/12.3)) VAR_7 = 1;
 if (VAR_4 < (u32)(VAR_1/16)) VAR_7 = 0;
 if (VAR_4 < (u32)(VAR_1/24.6)) VAR_7 = 1;
 if (VAR_4 < (u32)(VAR_1/32)) VAR_7 = 0;
 if (VAR_4 < (u32)(VAR_1/49.2)) VAR_7 = 1;
 if (VAR_4 < (u32)(VAR_1/64)) VAR_7 = 0;
 if (VAR_4 < (u32)(VAR_1/98.4)) VAR_7 = 1;

 VAR_4 <<= VAR_8;
 VAR_10 = (VAR_4 << 4) / VAR_0;
 VAR_9 = ((VAR_4 << 4) % VAR_0) << 8;
 VAR_10 = (VAR_10 << 8) + VAR_9 / VAR_0;
 VAR_9 = (VAR_9 % VAR_0) << 8;
 VAR_10 = (VAR_10 << 8) + FUNC_0(VAR_9, VAR_0);

 VAR_5 = VAR_10;
 VAR_6 = (((VAR_1 << 5) / VAR_4) + 1) / 2;

 if (VAR_6 > 0xFF)
  VAR_6 = 0xFF;

 VAR_7 = (VAR_7 << 4) | VAR_2[0x0E];

 VAR_8 = (VAR_8 << 6) | VAR_2[0x03];

 FUNC_1 (VAR_3, 0x03, VAR_8);
 FUNC_1 (VAR_3, 0x0a, VAR_5&0xff);
 FUNC_1 (VAR_3, 0x0b, (VAR_5>> 8)&0xff);
 FUNC_1 (VAR_3, 0x0c, (VAR_5>>16)&0x3f);

 FUNC_1 (VAR_3, 0x0d, VAR_6);
 FUNC_1 (VAR_3, 0x0e, VAR_7);

 return 0;
}
