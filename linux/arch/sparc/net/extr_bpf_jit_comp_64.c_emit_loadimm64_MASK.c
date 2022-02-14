
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct jit_ctx {int tmp_1_used; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,int,int*,int*,int*) ;
 unsigned int* VAR_7 ;
 scalar_t__ FUNC_6 (int,int) ;
 void* FUNC_7 (int,int,int,int) ;
 int FUNC_8 (int,struct jit_ctx*) ;
 int FUNC_9 (int ,unsigned int,int,struct jit_ctx*) ;
 void FUNC_10 (int,unsigned int,struct jit_ctx*) ;
 void FUNC_11 (int,unsigned int,struct jit_ctx*) ;
 scalar_t__ FUNC_12 (unsigned long) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int,int,unsigned int,int,struct jit_ctx*) ;

__attribute__((used)) static void FUNC_15(u64 VAR_8, unsigned int VAR_9, struct jit_ctx *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = VAR_7[VAR_5];
 u32 VAR_15 = (VAR_8 & 0xffffffff);
 u32 VAR_16 = (VAR_8 >> 32);




 if (VAR_16 == 0xffffffff && (VAR_15 & 0x80000000))
  return FUNC_11(VAR_8, VAR_9, VAR_10);
 if (VAR_16 == 0x00000000)
  return FUNC_10(VAR_8, VAR_9, VAR_10);

 FUNC_5(VAR_16, VAR_15, &VAR_13,
          &VAR_12, &VAR_11);
 if (((VAR_13 == 63 || VAR_12 == 0) &&
      VAR_11 != 0) ||
     ((VAR_13 - VAR_12) < 12)) {
  int VAR_17 = VAR_12;
  long VAR_18 = -1;

  if ((VAR_13 != 63 && VAR_12 != 0) ||
      VAR_11 == 0) {
   VAR_18 =
    FUNC_7(VAR_16, VAR_15,
        VAR_12, 0);
  } else if (VAR_12 == 0)
   VAR_17 = -(63 - VAR_13);

  FUNC_8(VAR_2 | VAR_1 | FUNC_1(VAR_0) | FUNC_3(VAR_18) | FUNC_0(VAR_9), VAR_10);
  if (VAR_17 > 0)
   FUNC_9(VAR_3, VAR_9, VAR_17, VAR_10);
  else if (VAR_17 < 0)
   FUNC_9(VAR_4, VAR_9, -VAR_17, VAR_10);

  return;
 }







 if ((VAR_13 - VAR_12) < 21) {
  unsigned long VAR_19 =
   FUNC_7(VAR_16, VAR_15,
       VAR_12, 10);

  FUNC_8(FUNC_4(VAR_19, VAR_9), VAR_10);




  if (VAR_12 < 10)
   FUNC_9(VAR_4, VAR_9, 10 - VAR_12, VAR_10);
  else if (VAR_12 > 10)
   FUNC_9(VAR_3, VAR_9, VAR_12 - 10, VAR_10);
  return;
 }


 if (VAR_15 == 0) {
  FUNC_10(VAR_16, VAR_9, VAR_10);
  FUNC_9(VAR_3, VAR_9, 32, VAR_10);
  return;
 }




 if (FUNC_6((~VAR_16) & 0xffffffff,
         (~VAR_15) & 0xfffffc00)) {



  unsigned long VAR_20 = VAR_15 & 0x3ff;

  if ((((~VAR_16) & 0xffffffff) == 0 &&
       ((~VAR_15) & 0x80000000) == 0) ||
      (((~VAR_16) & 0xffffffff) == 0xffffffff &&
       ((~VAR_15) & 0x80000000) != 0)) {
   unsigned long VAR_21 = (~VAR_15 & 0xffffffff);

   if ((FUNC_12(VAR_21) &&
        (~VAR_16 & 0xffffffff) == 0)) {
    FUNC_8(FUNC_4(VAR_21, VAR_9), VAR_10);
   } else if (FUNC_13(VAR_21)) {
    FUNC_8(VAR_2 | VAR_1 | FUNC_1(VAR_0) | FUNC_3(VAR_21) | FUNC_0(VAR_9), VAR_10);
   } else {
    FUNC_15(VAR_21, VAR_9, VAR_10);
   }
  } else {
   u64 VAR_22 = ((~VAR_15) & 0xfffffc00) |
    (((unsigned long)((~VAR_16) & 0xffffffff))<<32);
   FUNC_15(VAR_22, VAR_9, VAR_10);
  }

  VAR_15 = -0x400 | VAR_20;

  FUNC_8(VAR_6 | VAR_1 | FUNC_1(VAR_9) | FUNC_3(VAR_15) | FUNC_0(VAR_9), VAR_10);
  return;
 }





 if ((VAR_13 - VAR_12) < 32) {
  unsigned long VAR_23 =
   FUNC_7(VAR_16, VAR_15,
       VAR_12, 0);




  FUNC_14(VAR_23, 0, VAR_9,
           VAR_12, VAR_10);
  return;
 }






 if (FUNC_13(VAR_15) && ((int)VAR_15 > 0)) {
  FUNC_14(VAR_16, VAR_15,
           VAR_9, 32, VAR_10);
  return;
 }


 VAR_10->tmp_1_used = 1;

 FUNC_10(VAR_16, VAR_14, VAR_10);
 FUNC_10(VAR_15, VAR_9, VAR_10);
 FUNC_9(VAR_3, VAR_14, 32, VAR_10);
 FUNC_8(VAR_2 | FUNC_1(VAR_9) | FUNC_2(VAR_14) | FUNC_0(VAR_9), VAR_10);
}
