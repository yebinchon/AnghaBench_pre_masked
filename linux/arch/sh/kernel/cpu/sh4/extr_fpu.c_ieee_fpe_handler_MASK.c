
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* xstate; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {int pc; int pr; int sr; unsigned long* regs; } ;
struct TYPE_6__ {int fpscr; unsigned int* fp_regs; int fpul; } ;
struct TYPE_4__ {TYPE_3__ hardfpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (TYPE_3__*,unsigned short) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 long long FUNC_5 (long long,long long) ;
 long long FUNC_6 (long long,long long) ;
 long long FUNC_7 (long long,long long) ;
 long long FUNC_8 (long long,long long) ;
 int FUNC_9 (long long) ;
 unsigned long FUNC_10 (unsigned short) ;

__attribute__((used)) static int FUNC_11(struct pt_regs *VAR_3)
{
 unsigned short VAR_4 = *(unsigned short *)VAR_3->pc;
 unsigned short VAR_5;
 unsigned long VAR_6;
 int VAR_7[4] = {
  (VAR_4 >> 12) & 0xf,
  (VAR_4 >> 8) & 0xf,
  (VAR_4 >> 4) & 0xf,
  VAR_4 & 0xf
 };

 if (VAR_7[0] == 0xb || (VAR_7[0] == 0x4 && VAR_7[2] == 0x0 && VAR_7[3] == 0xb))
  VAR_3->pr = VAR_3->pc + 4;

 if (VAR_7[0] == 0xa || VAR_7[0] == 0xb) {

  VAR_6 = VAR_3->pc + 4 + ((short)((VAR_4 & 0xfff) << 4) >> 3);
  VAR_5 = *(unsigned short *)(VAR_3->pc + 2);
 } else if (VAR_7[0] == 0x8 && VAR_7[1] == 0xd) {

  if (VAR_3->sr & 1)
   VAR_6 = VAR_3->pc + 4 + ((char)(VAR_4 & 0xff) << 1);
  else
   VAR_6 = VAR_3->pc + 4;
  VAR_5 = *(unsigned short *)(VAR_3->pc + 2);
 } else if (VAR_7[0] == 0x8 && VAR_7[1] == 0xf) {

  if (VAR_3->sr & 1)
   VAR_6 = VAR_3->pc + 4;
  else
   VAR_6 = VAR_3->pc + 4 + ((char)(VAR_4 & 0xff) << 1);
  VAR_5 = *(unsigned short *)(VAR_3->pc + 2);
 } else if (VAR_7[0] == 0x4 && VAR_7[3] == 0xb &&
     (VAR_7[2] == 0x0 || VAR_7[2] == 0x2)) {

  VAR_6 = VAR_3->regs[VAR_7[1]];
  VAR_5 = *(unsigned short *)(VAR_3->pc + 2);
 } else if (VAR_7[0] == 0x0 && VAR_7[3] == 0x3 &&
     (VAR_7[2] == 0x0 || VAR_7[2] == 0x2)) {

  VAR_6 = VAR_3->pc + 4 + VAR_3->regs[VAR_7[1]];
  VAR_5 = *(unsigned short *)(VAR_3->pc + 2);
 } else if (VAR_4 == 0x000b) {

  VAR_6 = VAR_3->pr;
  VAR_5 = *(unsigned short *)(VAR_3->pc + 2);
 } else {
  VAR_6 = VAR_3->pc + FUNC_10(VAR_4);
  VAR_5 = VAR_4;
 }

 if ((VAR_5 & 0xf1ff) == 0xf0ad) {

  struct task_struct *VAR_8 = VAR_2;

  if ((VAR_8->thread.xstate->hardfpu.fpscr & VAR_0))

   FUNC_0(&VAR_8->thread.xstate->hardfpu,
        (VAR_5 >> 8) & 0xf);
  else
   return 0;

  VAR_3->pc = VAR_6;
  return 1;
 } else if ((VAR_5 & 0xf00f) == 0xf002) {

  struct task_struct *VAR_9 = VAR_2;
  int VAR_10;
  int VAR_11, VAR_12, VAR_13;
  unsigned int VAR_14, VAR_15;

  VAR_11 = (VAR_5 >> 8) & 0xf;
  VAR_12 = (VAR_5 >> 4) & 0xf;
  VAR_14 = VAR_9->thread.xstate->hardfpu.fp_regs[VAR_11];
  VAR_15 = VAR_9->thread.xstate->hardfpu.fp_regs[VAR_12];
  VAR_10 = VAR_9->thread.xstate->hardfpu.fpscr;
  VAR_13 = VAR_10 & VAR_1;

  if ((VAR_10 & VAR_0)
      && (VAR_13 && ((VAR_14 & 0x7fffffff) < 0x00100000
     || (VAR_15 & 0x7fffffff) < 0x00100000))) {
   long long VAR_16, VAR_17;


   VAR_16 = ((long long)VAR_14 << 32)
       | VAR_9->thread.xstate->hardfpu.fp_regs[VAR_11 + 1];
   VAR_17 = ((long long)VAR_15 << 32)
       | VAR_9->thread.xstate->hardfpu.fp_regs[VAR_12 + 1];
   VAR_16 = FUNC_7(VAR_16, VAR_17);
   VAR_9->thread.xstate->hardfpu.fp_regs[VAR_11] = VAR_16 >> 32;
   VAR_9->thread.xstate->hardfpu.fp_regs[VAR_11 + 1] = VAR_16 & 0xffffffff;
  } else if ((VAR_10 & VAR_0)
      && (!VAR_13 && ((VAR_14 & 0x7fffffff) < 0x00800000
      || (VAR_15 & 0x7fffffff) < 0x00800000))) {

   VAR_14 = FUNC_3(VAR_14, VAR_15);
   VAR_9->thread.xstate->hardfpu.fp_regs[VAR_11] = VAR_14;
  } else
   return 0;

  VAR_3->pc = VAR_6;
  return 1;
 } else if ((VAR_5 & 0xf00e) == 0xf000) {

  struct task_struct *VAR_18 = VAR_2;
  int VAR_19;
  int VAR_20, VAR_21, VAR_22;
  unsigned int VAR_23, VAR_24;

  VAR_20 = (VAR_5 >> 8) & 0xf;
  VAR_21 = (VAR_5 >> 4) & 0xf;
  VAR_23 = VAR_18->thread.xstate->hardfpu.fp_regs[VAR_20];
  VAR_24 = VAR_18->thread.xstate->hardfpu.fp_regs[VAR_21];
  VAR_19 = VAR_18->thread.xstate->hardfpu.fpscr;
  VAR_22 = VAR_19 & VAR_1;

  if ((VAR_19 & VAR_0)
      && (VAR_22 && ((VAR_23 & 0x7fffffff) < 0x00100000
     || (VAR_24 & 0x7fffffff) < 0x00100000))) {
   long long VAR_25, VAR_26;


   VAR_25 = ((long long)VAR_23 << 32)
       | VAR_18->thread.xstate->hardfpu.fp_regs[VAR_20 + 1];
   VAR_26 = ((long long)VAR_24 << 32)
       | VAR_18->thread.xstate->hardfpu.fp_regs[VAR_21 + 1];
   if ((VAR_5 & 0xf00f) == 0xf000)
    VAR_25 = FUNC_5(VAR_25, VAR_26);
   else
    VAR_25 = FUNC_8(VAR_25, VAR_26);
   VAR_18->thread.xstate->hardfpu.fp_regs[VAR_20] = VAR_25 >> 32;
   VAR_18->thread.xstate->hardfpu.fp_regs[VAR_20 + 1] = VAR_25 & 0xffffffff;
  } else if ((VAR_19 & VAR_0)
      && (!VAR_22 && ((VAR_23 & 0x7fffffff) < 0x00800000
      || (VAR_24 & 0x7fffffff) < 0x00800000))) {

   if ((VAR_5 & 0xf00f) == 0xf000)
    VAR_23 = FUNC_1(VAR_23, VAR_24);
   else
    VAR_23 = FUNC_4(VAR_23, VAR_24);
   VAR_18->thread.xstate->hardfpu.fp_regs[VAR_20] = VAR_23;
  } else
   return 0;

  VAR_3->pc = VAR_6;
  return 1;
 } else if ((VAR_5 & 0xf003) == 0xf003) {

  struct task_struct *VAR_27 = VAR_2;
  int VAR_28;
  int VAR_29, VAR_30, VAR_31;
  unsigned int VAR_32, VAR_33;

  VAR_29 = (VAR_5 >> 8) & 0xf;
  VAR_30 = (VAR_5 >> 4) & 0xf;
  VAR_32 = VAR_27->thread.xstate->hardfpu.fp_regs[VAR_29];
  VAR_33 = VAR_27->thread.xstate->hardfpu.fp_regs[VAR_30];
  VAR_28 = VAR_27->thread.xstate->hardfpu.fpscr;
  VAR_31 = VAR_28 & VAR_1;

  if ((VAR_28 & VAR_0)
      && (VAR_31 && ((VAR_32 & 0x7fffffff) < 0x00100000
     || (VAR_33 & 0x7fffffff) < 0x00100000))) {
   long long VAR_34, VAR_35;


   VAR_34 = ((long long)VAR_32 << 32)
       | VAR_27->thread.xstate->hardfpu.fp_regs[VAR_29 + 1];
   VAR_35 = ((long long)VAR_33 << 32)
       | VAR_27->thread.xstate->hardfpu.fp_regs[VAR_30 + 1];

   VAR_34 = FUNC_6(VAR_34, VAR_35);

   VAR_27->thread.xstate->hardfpu.fp_regs[VAR_29] = VAR_34 >> 32;
   VAR_27->thread.xstate->hardfpu.fp_regs[VAR_29 + 1] = VAR_34 & 0xffffffff;
  } else if ((VAR_28 & VAR_0)
      && (!VAR_31 && ((VAR_32 & 0x7fffffff) < 0x00800000
      || (VAR_33 & 0x7fffffff) < 0x00800000))) {

   VAR_32 = FUNC_2(VAR_32, VAR_33);
   VAR_27->thread.xstate->hardfpu.fp_regs[VAR_29] = VAR_32;
  } else
   return 0;

  VAR_3->pc = VAR_6;
  return 1;
 } else if ((VAR_5 & 0xf0bd) == 0xf0bd) {

  struct task_struct *VAR_36 = VAR_2;
  int VAR_37;
  unsigned int VAR_38;

  VAR_37 = (VAR_5 >> 8) & 0x7;
  VAR_38 = VAR_36->thread.xstate->hardfpu.fp_regs[VAR_37];

  if ((VAR_36->thread.xstate->hardfpu.fpscr & VAR_0)
   && ((VAR_38 & 0x7fffffff) < 0x00100000)) {

   long long VAR_39;

   VAR_39 = ((long long)VAR_36->thread.xstate->hardfpu.fp_regs[VAR_37] << 32)
       | VAR_36->thread.xstate->hardfpu.fp_regs[VAR_37 + 1];

   VAR_36->thread.xstate->hardfpu.fpul = FUNC_9(VAR_39);
  } else
   return 0;

  VAR_3->pc = VAR_6;
  return 1;
 }

 return 0;
}
