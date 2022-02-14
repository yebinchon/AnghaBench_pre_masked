
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ boostable; scalar_t__ insn; } ;
struct kprobe {TYPE_1__ ainsn; int * addr; int opcode; } ;
typedef int kprobe_opcode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,int *,int) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct kprobe *VAR_3)
{
 int VAR_4 = 0;
 kprobe_opcode_t VAR_5 = *VAR_3->addr;

 if ((unsigned long)VAR_3->addr & 0x03) {
  FUNC_6("Attempt to register kprobe at an unaligned address\n");
  VAR_4 = -VAR_0;
 } else if (FUNC_0(VAR_5) || FUNC_2(VAR_5) || FUNC_1(VAR_5)) {
  FUNC_6("Cannot register a kprobe on rfi/rfid or mtmsr[d]\n");
  VAR_4 = -VAR_0;
 }



 if (!VAR_4) {
  VAR_3->ainsn.insn = FUNC_4();
  if (!VAR_3->ainsn.insn)
   VAR_4 = -VAR_1;
 }

 if (!VAR_4) {
  FUNC_5(VAR_3->ainsn.insn, VAR_3->addr,
    VAR_2 * sizeof(kprobe_opcode_t));
  VAR_3->opcode = *VAR_3->addr;
  FUNC_3((unsigned long)VAR_3->ainsn.insn,
   (unsigned long)VAR_3->ainsn.insn + sizeof(kprobe_opcode_t));
 }

 VAR_3->ainsn.boostable = 0;
 return VAR_4;
}
