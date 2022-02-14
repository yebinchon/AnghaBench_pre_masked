
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void FUNC_5(uint64_t VAR_5, int VAR_6, uint64_t VAR_7)
{
 u32 VAR_8;

 if (FUNC_0()) {
  VAR_8 = FUNC_2(VAR_5, VAR_0);
  if ((VAR_8 & 0x200) == 0) {
   VAR_8 |= 0x200;
   FUNC_4(VAR_5, VAR_0, VAR_8);
  }
 } else {
  VAR_8 = FUNC_2(VAR_5, VAR_4);
  if ((VAR_8 & 0x200) == 0) {
   VAR_8 |= 0x200;
   FUNC_4(VAR_5, VAR_4, VAR_8);
  }
 }

 VAR_8 = FUNC_2(VAR_5, 0x1);
 if ((VAR_8 & 0x0400) == 0) {
  VAR_8 |= 0x0400;
  FUNC_4(VAR_5, 0x1, VAR_8);
 }


 VAR_8 = FUNC_1(VAR_5, 0xf);
 VAR_8 &= ~0x1fu;
 VAR_8 |= (1 << 8) | VAR_6;
 FUNC_3(VAR_5, 0xf, VAR_8);


 FUNC_4(VAR_5, VAR_1, VAR_7 >> 32);
 FUNC_4(VAR_5, VAR_2, VAR_7 & 0xffffffff);


 VAR_8 = FUNC_2(VAR_5, VAR_3);
 if ((VAR_8 & (1 << 16)) == 0) {
  VAR_8 |= 0xb << 16;
  FUNC_4(VAR_5, VAR_3, VAR_8);
 }
}
