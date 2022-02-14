
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
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void FUNC_5(uint64_t VAR_7, int VAR_8, uint64_t VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_2(VAR_7, 0x2C);
 if ((VAR_10 & 0x80000000U) == 0) {
  VAR_10 |= 0x80000000U;
  FUNC_4(VAR_7, 0x2C, VAR_10);
 }

 if (FUNC_0()) {
  VAR_10 = FUNC_2(VAR_7, VAR_3);
  if ((VAR_10 & 0x200) == 0) {
   VAR_10 |= 0x200;
   FUNC_4(VAR_7, VAR_3, VAR_10);
  }
 } else {
  VAR_10 = FUNC_2(VAR_7, VAR_6);
  if ((VAR_10 & 0x200) == 0) {
   VAR_10 |= 0x200;
   FUNC_4(VAR_7, VAR_6, VAR_10);
  }
 }

 VAR_10 = FUNC_2(VAR_7, 0x1);
 if ((VAR_10 & 0x0400) == 0) {
  VAR_10 |= 0x0400;
  FUNC_4(VAR_7, 0x1, VAR_10);
 }


 VAR_10 = FUNC_1(VAR_7, 0xf);
 VAR_10 &= ~0x1fu;
 VAR_10 |= (1 << 8) | VAR_8;
 FUNC_3(VAR_7, 0xf, VAR_10);

 if (FUNC_0()) {

  FUNC_4(VAR_7, VAR_1,
    VAR_9 >> 8);
  FUNC_4(VAR_7, VAR_2,
    (VAR_9 + VAR_0) >> 8);
 } else {

  FUNC_4(VAR_7, VAR_4,
    VAR_9 >> 8);
  FUNC_4(VAR_7, VAR_5,
    (VAR_9 + VAR_0) >> 8);
 }
}
