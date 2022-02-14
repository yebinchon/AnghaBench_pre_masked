
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct trapframe {unsigned int* fixreg; int cr; scalar_t__ srr0; } ;
struct fpn {int dummy; } ;
struct fpemu {struct fpn fe_f2; struct fpn fe_f1; struct fpn fe_f3; int fe_cx; } ;
typedef int fpemu ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct fpemu*,struct fpn*,int*) ;
 int FUNC_2 (struct fpemu*,struct fpn*) ;
 int FUNC_3 (void*,int*) ;
 int FUNC_4 (struct fpemu*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int,struct fpemu*,struct fpn**,int*) ;
 int FUNC_11 (struct fpemu*,struct fpn*,int,unsigned int,unsigned int) ;
 int FUNC_12 (int,int) ;
 unsigned int FUNC_13 (int) ;

void
FUNC_14(struct trapframe *VAR_9)
{
 struct fpemu VAR_10;
 struct fpn *VAR_11;
 uint32_t VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21, VAR_22;
 uint32_t VAR_23 = 0;
 uint32_t VAR_24[2];
 int VAR_25;
 int VAR_26;
 uint32_t VAR_27;

 VAR_26 = FUNC_3((void *)VAR_9->srr0, &VAR_12);

 if (VAR_26 != 0)
  return;
              ;

 if ((VAR_12 >> VAR_3) != VAR_7)
  return;

 VAR_27 = FUNC_5();






 VAR_17 = (VAR_12 >> 21) & 0x1f;
 VAR_15 = (VAR_12 >> 16) & 0x1f;
 VAR_16 = (VAR_12 >> 11) & 0x1f;
 VAR_18 = (VAR_12 >> 5) & 0x7;
 VAR_14 = 28 - (VAR_17 & 0x1f);

 VAR_13 = (VAR_12 & 0x7ff);

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 VAR_25 = 132;
 switch (VAR_18) {
 case 130:
  FUNC_7(VAR_27 | VAR_4);
  switch (VAR_13) {
  case 135:
   VAR_19 = FUNC_13(VAR_15) & ~(1U << 31);
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15] & ~(1U << 31);
   FUNC_12(VAR_17, VAR_19);
   break;
  case 134:
   VAR_19 = FUNC_13(VAR_15) | (1U << 31);
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15] | (1U << 31);
   FUNC_12(VAR_17, VAR_19);
   break;
  case 133:
   VAR_19 = FUNC_13(VAR_15) ^ (1U << 31);
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15] ^ (1U << 31);
   FUNC_12(VAR_17, VAR_19);
   break;
  default:

   FUNC_11(&VAR_10, &VAR_10.fe_f1, 131,
       FUNC_13(VAR_15), 0);
   FUNC_11(&VAR_10, &VAR_10.fe_f2, 131,
       FUNC_13(VAR_16), 0);
   VAR_19 = FUNC_10(VAR_13, &VAR_10, &VAR_11,
       &VAR_22);

   if (VAR_19 < 0)
    FUNC_12(VAR_17, VAR_22);

   VAR_23 = FUNC_0(VAR_10.fe_cx) << 16;

   FUNC_4(&VAR_10, 0, sizeof(VAR_10));


   FUNC_11(&VAR_10, &VAR_10.fe_f1, 131,
       VAR_9->fixreg[VAR_15], 0);
   FUNC_11(&VAR_10, &VAR_10.fe_f2, 131,
       VAR_9->fixreg[VAR_16], 0);
   VAR_23 |= FUNC_0(VAR_10.fe_cx);
   VAR_20 = FUNC_10(VAR_13, &VAR_10, &VAR_11,
       &VAR_9->fixreg[VAR_17]);
   if (VAR_13 == VAR_0 ||
       VAR_13 == VAR_1 ||
       VAR_13 == VAR_2) {
    VAR_21 = (VAR_19 << 3) | (VAR_20 << 2) |
        ((VAR_19 | VAR_20) << 1) | (VAR_19 & VAR_20);
    VAR_25 = 132;
   } else
    VAR_25 = 128;
   break;
  }
  goto end;

 case 129:
  switch (VAR_13) {
  case 139:
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15] & ~(1U << 31);
   break;
  case 137:
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15] | (1U << 31);
   break;
  case 136:
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15] ^ (1U << 31);
   break;
  case 138:
   FUNC_7(VAR_27 | VAR_4);
   FUNC_11(&VAR_10, &VAR_10.fe_f3, 152,
       FUNC_13(VAR_16), VAR_9->fixreg[VAR_16]);
   VAR_11 = &VAR_10.fe_f3;
   VAR_25 = 131;
   break;
  default:
   FUNC_11(&VAR_10, &VAR_10.fe_f1, 131,
       VAR_9->fixreg[VAR_15], 0);
   FUNC_11(&VAR_10, &VAR_10.fe_f2, 131,
       VAR_9->fixreg[VAR_16], 0);
   VAR_25 = 131;
  }
  break;
 case 151:
  FUNC_7(VAR_27 | VAR_4);
  switch (VAR_13) {
  case 143:
   VAR_19 = FUNC_13(VAR_15) & ~(1U << 31);
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15];
   FUNC_12(VAR_17, VAR_19);
   break;
  case 141:
   VAR_19 = FUNC_13(VAR_15) | (1U << 31);
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15];
   FUNC_12(VAR_17, VAR_19);
   break;
  case 140:
   VAR_19 = FUNC_13(VAR_15) ^ (1U << 31);
   VAR_9->fixreg[VAR_17] = VAR_9->fixreg[VAR_15];
   FUNC_12(VAR_17, VAR_19);
   break;
  case 142:
   FUNC_11(&VAR_10, &VAR_10.fe_f3, 131,
       VAR_9->fixreg[VAR_16], 0);
   VAR_11 = &VAR_10.fe_f3;
   VAR_25 = 152;
   break;
  default:
   FUNC_11(&VAR_10, &VAR_10.fe_f1, 152,
       FUNC_13(VAR_15), VAR_9->fixreg[VAR_15]);
   FUNC_11(&VAR_10, &VAR_10.fe_f2, 152,
       FUNC_13(VAR_16), VAR_9->fixreg[VAR_16]);
   VAR_25 = 152;
  }
  break;
 }
 switch (VAR_13) {
 case 142:
 case 138:

  break;
 default:
  VAR_21 = FUNC_10(VAR_13, &VAR_10, &VAR_11,
      &VAR_9->fixreg[VAR_17]);
  if (VAR_21 != -1)
   VAR_21 <<= 2;
  break;
 }

 switch (VAR_13 & VAR_6) {
 case 150:
 case 149:
 case 148:
  VAR_9->cr &= ~(0xf << VAR_14);
  VAR_9->cr |= (VAR_21 << VAR_14);
  break;
 case 145:
 case 144:
 case 147:
 case 146:
  break;
 default:
  switch (VAR_25) {
  case 132:
  case 128:
   break;
  case 131:
   VAR_9->fixreg[VAR_17] = FUNC_2(&VAR_10, VAR_11);
   break;
  case 152:
   FUNC_12(VAR_17, FUNC_1(&VAR_10, VAR_11, VAR_24));
   VAR_9->fixreg[VAR_17] = VAR_24[1];
   break;
  default:
   FUNC_9("Unknown storage width %d", VAR_25);
   break;
  }
 }

end:
 VAR_23 |= (FUNC_6(VAR_8) & ~VAR_5);
 FUNC_8(VAR_8, VAR_23);
 VAR_9->srr0 += 4;
 FUNC_7(VAR_27);

 return;
}
