
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct tda10023_state {int sysclk; } ;
typedef int s32 ;
typedef int s16 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (struct tda10023_state*,int,int,int) ;
 int FUNC_3 (struct tda10023_state*,int,int) ;

__attribute__((used)) static int FUNC_4 (struct tda10023_state* VAR_0, u32 VAR_1)
{
 s32 VAR_2;
 s32 VAR_3;
 s16 VAR_4=0;
 u16 VAR_5 = 0;



 u32 VAR_6 = VAR_0->sysclk * 10;

 if (VAR_1 < (u32)(VAR_6/984)) {
  VAR_5=3;
  VAR_4=1;
 } else if (VAR_1 < (u32)(VAR_6/640)) {
  VAR_5=3;
  VAR_4=0;
 } else if (VAR_1 < (u32)(VAR_6/492)) {
  VAR_5=2;
  VAR_4=1;
 } else if (VAR_1 < (u32)(VAR_6/320)) {
  VAR_5=2;
  VAR_4=0;
 } else if (VAR_1 < (u32)(VAR_6/246)) {
  VAR_5=1;
  VAR_4=1;
 } else if (VAR_1 < (u32)(VAR_6/160)) {
  VAR_5=1;
  VAR_4=0;
 } else if (VAR_1 < (u32)(VAR_6/123)) {
  VAR_5=0;
  VAR_4=1;
 }

 VAR_3 = (VAR_0->sysclk)*16;
 VAR_3>>=VAR_5;
 VAR_3 +=VAR_1/2;
 VAR_3 /=VAR_1;

 if (VAR_3>255)
  VAR_3=255;

 {
  u64 VAR_7;

  VAR_7=1<<(24+VAR_5);
  VAR_7*=VAR_1;
  FUNC_0(VAR_7, VAR_0->sysclk);

  VAR_2=(s32)VAR_7;
 }
 FUNC_1("Symbolrate %i, BDR %i BDRI %i, NDEC %i\n",
  VAR_1, VAR_2, VAR_3, VAR_5);
 FUNC_2 (VAR_0, 0x03, 0xc0, VAR_5<<6);
 FUNC_3 (VAR_0, 0x0a, VAR_2&255);
 FUNC_3 (VAR_0, 0x0b, (VAR_2>>8)&255);
 FUNC_3 (VAR_0, 0x0c, (VAR_2>>16)&31);
 FUNC_3 (VAR_0, 0x0d, VAR_3);
 FUNC_3 (VAR_0, 0x3d, (VAR_4<<7));
 return 0;
}
