
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct mm_struct {TYPE_1__ context; } ;
struct arch_uprobe {int simulate; int api; int * insn; } ;
typedef int probe_opcode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (unsigned long,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct arch_uprobe *VAR_4, struct mm_struct *VAR_5,
  unsigned long VAR_6)
{
 probe_opcode_t VAR_7;


 if (VAR_5->context.flags & VAR_3)
  return -VAR_2;
 else if (!FUNC_0(VAR_6, VAR_0))
  return -VAR_1;

 VAR_7 = *(probe_opcode_t *)(&VAR_4->insn[0]);

 switch (FUNC_1(VAR_7, &VAR_4->api)) {
 case 128:
  return -VAR_1;

 case 129:
  VAR_4->simulate = 1;
  break;

 default:
  break;
 }

 return 0;
}
