
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tda8083_state {int dummy; } ;
typedef int ratio ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_2 (struct tda8083_state* VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 u8 VAR_4;

 if (VAR_1 > 32000000)
  VAR_1 = 32000000;
 if (VAR_1 < 500000)
  VAR_1 = 500000;

 VAR_4 = 0;
 if (VAR_1 < 24000000)
  VAR_4 = 2;
 if (VAR_1 < 16000000)
  VAR_4 = 3;

 VAR_3 = 31250 << 16;
 VAR_2 = VAR_3 / VAR_1;

 VAR_3 = (VAR_3 % VAR_1) << 8;
 VAR_2 = (VAR_2 << 8) + VAR_3 / VAR_1;

 VAR_3 = (VAR_3 % VAR_1) << 8;
 VAR_2 = (VAR_2 << 8) + VAR_3 / VAR_1;

 FUNC_0("tda8083: ratio == %08x\n", (unsigned int) VAR_2);

 FUNC_1 (VAR_0, 0x05, VAR_4);
 FUNC_1 (VAR_0, 0x02, (VAR_2 >> 16) & 0xff);
 FUNC_1 (VAR_0, 0x03, (VAR_2 >> 8) & 0xff);
 FUNC_1 (VAR_0, 0x04, (VAR_2 ) & 0xff);

 FUNC_1 (VAR_0, 0x00, 0x3c);
 FUNC_1 (VAR_0, 0x00, 0x04);

 return 1;
}
