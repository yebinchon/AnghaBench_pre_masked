
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {unsigned int ecr_vec; unsigned int ecr_cause; int ecr_param; int ret; int event; } ;
struct TYPE_3__ {unsigned long fault_address; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_11 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_12)
{
 unsigned int VAR_13, VAR_14;
 unsigned long VAR_15;

 FUNC_2("\n[ECR   ]: 0x%08lx => ", VAR_12->event);


 VAR_15 = VAR_11->thread.fault_address;

 VAR_13 = VAR_12->ecr_vec;
 VAR_14 = VAR_12->ecr_cause;


 if (VAR_13 == VAR_3) {
  FUNC_1("Invalid %s @ 0x%08lx by insn @ 0x%08lx\n",
         (VAR_14 == 0x01) ? "Read" :
         ((VAR_14 == 0x02) ? "Write" : "EX"),
         VAR_15, VAR_12->ret);
 } else if (VAR_13 == VAR_5) {
  FUNC_1("Insn could not be fetched\n");
 } else if (VAR_13 == VAR_6) {
  FUNC_1("Machine Check (%s)\n", (VAR_14 == 0x0) ?
     "Double Fault" : "Other Fatal Err");

 } else if (VAR_13 == VAR_9) {
  if (VAR_14 == VAR_1)
   FUNC_1("Execute from Non-exec Page\n");
  else if (VAR_14 == VAR_2 &&
           FUNC_0(VAR_0))
   FUNC_1("Misaligned r/w from 0x%08lx\n", VAR_15);
  else
   FUNC_1("%s access not allowed on page\n",
    (VAR_14 == 0x01) ? "Read" :
    ((VAR_14 == 0x02) ? "Write" : "EX"));
 } else if (VAR_13 == VAR_4) {
  FUNC_1("Illegal Insn\n");
 } else if (VAR_13 == VAR_10) {
  if (VAR_12->ecr_param == 5)
   FUNC_1("gcc generated __builtin_trap\n");
 } else {
  FUNC_1("Check Programmer's Manual\n");
 }
}
