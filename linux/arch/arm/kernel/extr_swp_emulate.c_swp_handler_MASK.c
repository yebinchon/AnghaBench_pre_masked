
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int ARM_pc; unsigned int* uregs; int ARM_cpsr; } ;
struct TYPE_2__ {scalar_t__ pid; int comm; } ;





 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (unsigned int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 TYPE_1__* VAR_7 ;
 unsigned int FUNC_3 (unsigned int,unsigned int*,unsigned int) ;
 int FUNC_4 (int ,int,struct pt_regs*,int) ;
 int FUNC_5 (char*,void*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct pt_regs*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct pt_regs *VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15 = 0;

 FUNC_4(VAR_2, 1, VAR_9, VAR_9->ARM_pc);

 VAR_15 = FUNC_2(VAR_10, VAR_9->ARM_cpsr);
 switch (VAR_15) {
 case 129:
  break;
 case 130:

  VAR_9->ARM_pc += 4;
  return 0;
 case 128:

  return -VAR_0;
 default:
  return -VAR_1;
 }

 if (VAR_7->pid != VAR_8) {
  FUNC_5("\"%s\" (%ld) uses deprecated SWP{B} instruction\n",
    VAR_7->comm, (unsigned long)VAR_7->pid);
  VAR_8 = VAR_7->pid;
 }

 VAR_11 = VAR_9->uregs[FUNC_0(VAR_10, VAR_3)];
 VAR_13 = VAR_9->uregs[FUNC_0(VAR_10, VAR_4)];
 VAR_12 = FUNC_0(VAR_10, VAR_5);

 VAR_14 = VAR_10 & VAR_6;

 FUNC_5("addr in r%d->0x%08x, dest is r%d, source in r%d->0x%08x)\n",
   FUNC_0(VAR_10, VAR_3), VAR_11,
   VAR_12, FUNC_0(VAR_10, VAR_4), VAR_13);


 if (!FUNC_1((VAR_11 & ~3), 4)) {
  FUNC_5("SWP{B} emulation: access to %p not allowed!\n",
    (void *)VAR_11);
  VAR_15 = -VAR_0;
 } else {
  VAR_15 = FUNC_3(VAR_11, &VAR_13, VAR_14);
 }

 if (VAR_15 == 0) {





  VAR_9->ARM_pc += 4;
  VAR_9->uregs[VAR_12] = VAR_13;
 } else if (VAR_15 == -VAR_0) {




  FUNC_6(VAR_9, VAR_11);
 }

 return 0;
}
