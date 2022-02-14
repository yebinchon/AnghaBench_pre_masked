
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int insn; int if_modifier; } ;
struct kprobe {TYPE_1__ ainsn; int opcode; int addr; } ;
struct insn {int dummy; } ;
typedef int kprobe_opcode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct insn*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct kprobe*,struct insn*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct kprobe *VAR_2)
{
 struct insn VAR_3;
 kprobe_opcode_t VAR_4[VAR_1];
 int VAR_5;


 VAR_5 = FUNC_0(VAR_4, VAR_2->addr, VAR_2->ainsn.insn, &VAR_3);
 if (!VAR_5)
  return -VAR_0;





 VAR_5 = FUNC_2(VAR_4, VAR_2, &VAR_3);


 VAR_2->ainsn.if_modifier = FUNC_1(VAR_4);


 VAR_2->opcode = VAR_4[0];


 FUNC_3(VAR_2->ainsn.insn, VAR_4, VAR_5);

 return 0;
}
