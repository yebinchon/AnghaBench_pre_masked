
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pt_regs {int dummy; } ;
struct fpustate {int dummy; } ;
typedef int s64 ;
typedef unsigned long s32 ;
typedef unsigned long s16 ;
struct TYPE_2__ {unsigned long* gsr; } ;







 struct fpustate* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* FUNC_3 () ;
 unsigned long* FUNC_4 (struct fpustate*,int ) ;
 unsigned long FUNC_5 (struct fpustate*,int ) ;
 unsigned long* FUNC_6 (struct fpustate*,int ) ;
 unsigned long FUNC_7 (struct fpustate*,int ) ;

__attribute__((used)) static void FUNC_8(struct pt_regs *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct fpustate *VAR_4 = VAR_0;
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_3()->gsr[0];
 VAR_8 = (VAR_7 >> 3) & (VAR_3 == 131 ? 0xf : 0x1f);
 switch (VAR_3) {
 case 131: {
  unsigned long VAR_10;

  VAR_6 = FUNC_5(VAR_4, FUNC_2(VAR_2));
  VAR_9 = 0;
  for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
   unsigned int VAR_11;
   s16 VAR_12 = (VAR_6 >> (VAR_10 * 16UL)) & 0xffffUL;
   int VAR_13 = VAR_12 << VAR_8;
   int VAR_14 = VAR_13 >> 7;

   VAR_11 = ((VAR_14 < 0) ?
          0 :
          (VAR_14 > 255) ?
          255 : VAR_14);

   VAR_9 |= (VAR_11 << (8 * VAR_10));
  }
  *FUNC_6(VAR_4, FUNC_0(VAR_2)) = VAR_9;
  break;
 }

 case 130: {
  unsigned long VAR_15;

  VAR_5 = FUNC_5(VAR_4, FUNC_1(VAR_2));
  VAR_6 = FUNC_5(VAR_4, FUNC_2(VAR_2));
  VAR_9 = (VAR_5 << 8) & ~(0x000000ff000000ffUL);
  for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {
   unsigned long VAR_16;
   s32 VAR_17 = (VAR_6 >> (VAR_15 * 32UL));
   s64 VAR_18 = VAR_17 << VAR_8;
   s64 VAR_19 = VAR_18 >> 23;

   VAR_16 = ((VAR_19 < 0) ?
          0 :
          (VAR_19 > 255) ?
          255 : VAR_19);

   VAR_9 |= (VAR_16 << (32 * VAR_15));
  }
  *FUNC_4(VAR_4, FUNC_0(VAR_2)) = VAR_9;
  break;
 }

 case 129: {
  unsigned long VAR_20;

  VAR_6 = FUNC_5(VAR_4, FUNC_2(VAR_2));

  VAR_9 = 0;
  for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
   long VAR_21;
   s32 VAR_22 = (VAR_6 >> (VAR_20 * 32UL));
   s64 VAR_23 = VAR_22 << VAR_8;
   s64 VAR_24 = VAR_23 >> 16;

   VAR_21 = ((VAR_24 < -32768) ?
          -32768 :
          (VAR_24 > 32767) ?
          32767 : VAR_24);

   VAR_9 |= ((VAR_21 & 0xffff) << (VAR_20 * 16));
  }
  *FUNC_6(VAR_4, FUNC_0(VAR_2)) = VAR_9;
  break;
 }

 case 132: {
  unsigned long VAR_25;

  VAR_6 = FUNC_7(VAR_4, FUNC_2(VAR_2));

  VAR_9 = 0;
  for (VAR_25 = 0; VAR_25 < 4; VAR_25++) {
   unsigned long VAR_26;
   u8 VAR_27 = (VAR_6 >> (VAR_25 * 8)) & 0xff;

   VAR_26 = VAR_27 << 4;

   VAR_9 |= (VAR_26 << (VAR_25 * 16));
  }
  *FUNC_4(VAR_4, FUNC_0(VAR_2)) = VAR_9;
  break;
 }

 case 128: {
  VAR_5 = FUNC_7(VAR_4, FUNC_1(VAR_2));
  VAR_6 = FUNC_7(VAR_4, FUNC_2(VAR_2));

  VAR_9 = (((VAR_6 & 0x000000ff) << 0) |
     ((VAR_5 & 0x000000ff) << 8) |
     ((VAR_6 & 0x0000ff00) << 8) |
     ((VAR_5 & 0x0000ff00) << 16) |
     ((VAR_6 & 0x00ff0000) << 16) |
     ((VAR_5 & 0x00ff0000) << 24) |
     ((VAR_6 & 0xff000000) << 24) |
     ((VAR_5 & 0xff000000) << 32));
  *FUNC_4(VAR_4, FUNC_0(VAR_2)) = VAR_9;
  break;
 }
 }
}
