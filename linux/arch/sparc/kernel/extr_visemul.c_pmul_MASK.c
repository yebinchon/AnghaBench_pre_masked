
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pt_regs {int dummy; } ;
struct fpustate {int dummy; } ;
typedef int s16 ;
 struct fpustate* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned long* FUNC_3 (struct fpustate*,int ) ;
 unsigned long FUNC_4 (struct fpustate*,int ) ;
 unsigned long FUNC_5 (struct fpustate*,int ) ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct fpustate *VAR_4 = VAR_0;
 unsigned long VAR_5, VAR_6, VAR_7;

 switch (VAR_3) {
 case 130: {
  unsigned long VAR_8;

  VAR_5 = FUNC_5(VAR_4, FUNC_1(VAR_2));
  VAR_6 = FUNC_4(VAR_4, FUNC_2(VAR_2));

  VAR_7 = 0;
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   u16 VAR_9 = (VAR_5 >> (VAR_8 * 8)) & 0x00ff;
   s16 VAR_10 = (VAR_6 >> (VAR_8 * 16)) & 0xffff;
   u32 VAR_11 = VAR_9 * VAR_10;
   u16 VAR_12 = ((VAR_11 & 0x00ffff00) >> 8);


   if (VAR_11 & 0x80)
    VAR_12++;
   VAR_7 |= ((VAR_12 & 0xffffUL) << (VAR_8 * 16UL));
  }

  *FUNC_3(VAR_4, FUNC_0(VAR_2)) = VAR_7;
  break;
 }

 case 131:
 case 132: {
  unsigned long VAR_13;
  s16 VAR_14;

  VAR_5 = FUNC_5(VAR_4, FUNC_1(VAR_2));
  VAR_6 = FUNC_5(VAR_4, FUNC_2(VAR_2));

  VAR_7 = 0;
  VAR_14 = VAR_6 >> (VAR_3 == 131 ? 16 : 0);
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   u16 VAR_15 = (VAR_5 >> (VAR_13 * 8)) & 0x00ff;
   u32 VAR_16 = VAR_15 * VAR_14;
   u16 VAR_17 = ((VAR_16 & 0x00ffff00) >> 8);


   if (VAR_16 & 0x80)
    VAR_17++;
   VAR_7 |= ((VAR_17 & 0xffffUL) << (VAR_13 * 16UL));
  }

  *FUNC_3(VAR_4, FUNC_0(VAR_2)) = VAR_7;
  break;
 }

 case 134:
 case 133: {
  unsigned long VAR_18, VAR_19;

  VAR_5 = FUNC_4(VAR_4, FUNC_1(VAR_2));
  VAR_6 = FUNC_4(VAR_4, FUNC_2(VAR_2));

  VAR_7 = 0;
  VAR_19 = (VAR_3 == 134) ? 8 : 0;
  for (VAR_18 = 0; VAR_18 < 4; VAR_18++) {
   u16 VAR_20;
   s16 VAR_21;
   u32 VAR_22;
   u16 VAR_23;

   VAR_20 = ((VAR_5 >> ((16 * VAR_18) + VAR_19)) & 0x00ff);
   VAR_21 = ((VAR_6 >> (16 * VAR_18)) & 0xffff);
   VAR_22 = VAR_20 * VAR_21;
   VAR_23 = ((VAR_22 & 0x00ffff00) >> 8);


   if (VAR_22 & 0x80)
    VAR_23++;
   VAR_7 |= ((VAR_23 & 0xffffUL) << (VAR_18 * 16UL));
  }

  *FUNC_3(VAR_4, FUNC_0(VAR_2)) = VAR_7;
  break;
 }

 case 129:
 case 128: {
  unsigned long VAR_24, VAR_25;

  VAR_5 = FUNC_5(VAR_4, FUNC_1(VAR_2));
  VAR_6 = FUNC_5(VAR_4, FUNC_2(VAR_2));

  VAR_7 = 0;
  VAR_25 = (VAR_3 == 129) ? 8 : 0;
  for (VAR_24 = 0; VAR_24 < 2; VAR_24++) {
   u16 VAR_26;
   s16 VAR_27;
   u32 VAR_28;
   u16 VAR_29;

   VAR_26 = ((VAR_5 >> ((16 * VAR_24) + VAR_25)) & 0x00ff);
   VAR_27 = ((VAR_6 >> (16 * VAR_24)) & 0xffff);
   VAR_28 = VAR_26 * VAR_27;
   VAR_29 = ((VAR_28 & 0x00ffff00) >> 8);


   if (VAR_28 & 0x80)
    VAR_29++;
   VAR_7 |= ((VAR_29 & 0xffffUL) <<
       ((VAR_24 * 32UL) + 7UL));
  }
  *FUNC_3(VAR_4, FUNC_0(VAR_2)) = VAR_7;
  break;
 }
 }
}
