
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pt_regs {int msr; unsigned long* gpr; unsigned long dar; int ccr; int xer; } ;
struct instruction_op {int type; unsigned int ea; size_t reg; unsigned long val; int vsx_flags; int update_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (unsigned long,unsigned long,int,char*) ;
 int FUNC_3 (unsigned long,unsigned long,int,char*,unsigned int) ;
 int FUNC_4 (struct pt_regs*,unsigned long,int) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,unsigned long,int,struct pt_regs*) ;
 int FUNC_7 (int *,unsigned long,int,struct pt_regs*) ;
 int FUNC_8 (unsigned long*,int) ;
 int FUNC_9 (struct instruction_op*,unsigned long,struct pt_regs*,int) ;
 int FUNC_10 (struct instruction_op*,unsigned long,struct pt_regs*,int) ;
 int FUNC_11 (unsigned long,unsigned long*) ;
 int FUNC_12 (unsigned long*,int) ;
 int FUNC_13 (unsigned long,unsigned long,unsigned long,unsigned int*) ;
 int FUNC_14 (size_t,unsigned long,int,struct pt_regs*,int) ;
 int FUNC_15 (int,unsigned long,int,struct pt_regs*,int) ;
 int FUNC_16 (struct instruction_op*,unsigned long,struct pt_regs*,int) ;
 int FUNC_17 (struct instruction_op*,unsigned long,struct pt_regs*,int) ;
 int FUNC_18 (struct pt_regs*,unsigned long,size_t,int) ;
 int FUNC_19 (struct pt_regs*,unsigned long,int,int) ;
 int FUNC_20 (unsigned long,struct pt_regs*) ;
 int FUNC_21 (unsigned long*,unsigned long,int,struct pt_regs*) ;
 unsigned long FUNC_22 (int,unsigned int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (unsigned long,unsigned long,int,struct pt_regs*) ;

int FUNC_25(struct pt_regs *VAR_14, struct instruction_op *VAR_15)
{
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;
 unsigned long VAR_23;
 unsigned long VAR_24;
 bool VAR_25;

 VAR_16 = 0;
 VAR_17 = FUNC_0(VAR_15->type);
 VAR_18 = FUNC_1(VAR_15->type);
 VAR_25 = (VAR_14->msr & VAR_6) != (VAR_5 & VAR_6);
 VAR_24 = FUNC_22(VAR_14->msr, VAR_15->ea);

 switch (VAR_18) {
 case 139:
  if (VAR_24 & (VAR_17 - 1))
   return -VAR_1;
  if (!FUNC_4(VAR_14, VAR_24, VAR_17))
   return -VAR_2;
  VAR_16 = 0;
  VAR_23 = 0;
  switch (VAR_17) {
  case 4:
   FUNC_2(VAR_23, VAR_24, VAR_16, "lwarx");
   break;
  default:
   return -VAR_3;
  }
  if (VAR_16) {
   VAR_14->dar = VAR_24;
   break;
  }
  if (VAR_17 < 16)
   VAR_14->gpr[VAR_15->reg] = VAR_23;
  break;

 case 133:
  if (VAR_24 & (VAR_17 - 1))
   return -VAR_1;
  if (!FUNC_4(VAR_14, VAR_24, VAR_17))
   return -VAR_2;
  VAR_16 = 0;
  switch (VAR_17) {
  case 4:
   FUNC_3(VAR_15->val, VAR_24, VAR_16, "stwcx.", VAR_22);
   break;
  default:
   return -VAR_3;
  }
  if (!VAR_16)
   VAR_14->ccr = (VAR_14->ccr & 0x0fffffff) |
    (VAR_22 & 0xe0000000) |
    ((VAR_14->xer >> 3) & 0x10000000);
  else
   VAR_14->dar = VAR_24;
  break;

 case 138:






  VAR_16 = FUNC_21(&VAR_14->gpr[VAR_15->reg], VAR_24, VAR_17, VAR_14);
  if (!VAR_16) {
   if (VAR_15->type & VAR_10)
    FUNC_12(&VAR_14->gpr[VAR_15->reg], VAR_17);
   if ((VAR_15->type & VAR_0) == (VAR_25 ? 0 : VAR_0))
    FUNC_8(&VAR_14->gpr[VAR_15->reg], VAR_17);
  }
  break;
 case 136:
  if (!FUNC_4(VAR_14, VAR_24, VAR_17))
   return -VAR_2;
  VAR_20 = VAR_15->reg;
  for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19 += 4) {
   unsigned int VAR_26 = 0;

   VAR_21 = VAR_17 - VAR_19;
   if (VAR_21 > 4)
    VAR_21 = 4;
   VAR_16 = FUNC_6((u8 *) &VAR_26, VAR_24, VAR_21, VAR_14);
   if (VAR_16)
    break;
   if (FUNC_23(VAR_25))
    VAR_26 = FUNC_5(VAR_26);
   VAR_14->gpr[VAR_20] = VAR_26;
   VAR_24 += 4;

   VAR_20 = (VAR_20 + 1) & 0x1f;
  }
  break;

 case 132:






  if ((VAR_15->type & VAR_12) && VAR_17 == sizeof(long) &&
      VAR_15->reg == 1 && VAR_15->update_reg == 1 &&
      !(VAR_14->msr & VAR_7) &&
      VAR_24 >= VAR_14->gpr[1] - VAR_11) {
   VAR_16 = FUNC_20(VAR_24, VAR_14);
   break;
  }
  if (FUNC_23(VAR_25))
   FUNC_8(&VAR_15->val, VAR_17);
  VAR_16 = FUNC_24(VAR_15->val, VAR_24, VAR_17, VAR_14);
  break;
 case 130:
  if (!FUNC_4(VAR_14, VAR_24, VAR_17))
   return -VAR_2;
  VAR_20 = VAR_15->reg;
  for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19 += 4) {
   unsigned int VAR_27 = VAR_14->gpr[VAR_20];

   VAR_21 = VAR_17 - VAR_19;
   if (VAR_21 > 4)
    VAR_21 = 4;
   if (FUNC_23(VAR_25))
    VAR_27 = FUNC_5(VAR_27);
   VAR_16 = FUNC_7((u8 *) &VAR_27, VAR_24, VAR_21, VAR_14);
   if (VAR_16)
    break;
   VAR_24 += 4;

   VAR_20 = (VAR_20 + 1) & 0x1f;
  }
  break;

 default:
  return -VAR_3;
 }

 if (VAR_16)
  return VAR_16;

 if (VAR_15->type & VAR_12)
  VAR_14->gpr[VAR_15->update_reg] = VAR_15->ea;

 return 0;
}
