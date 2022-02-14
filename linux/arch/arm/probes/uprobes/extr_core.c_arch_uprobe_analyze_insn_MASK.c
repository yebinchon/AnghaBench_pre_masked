
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct arch_uprobe {int simulate; unsigned int bpinsn; int asi; void** ixol; scalar_t__ insn; } ;
typedef enum probes_insn { ____Placeholder_probes_insn } probes_insn ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int *,int,int ,int *) ;
 int VAR_3 ;

int FUNC_3(struct arch_uprobe *VAR_4, struct mm_struct *VAR_5,
        unsigned long VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 enum probes_insn VAR_9;


 if (VAR_6 & 0x3)
  return -VAR_0;

 VAR_7 = FUNC_0(*(unsigned int *)VAR_4->insn);
 VAR_4->ixol[0] = FUNC_1(VAR_7);
 VAR_4->ixol[1] = FUNC_1(VAR_1);

 VAR_9 = FUNC_2(VAR_7, &VAR_4->asi, 0,
         VAR_3, ((void*)0));
 switch (VAR_9) {
 case 128:
  return -VAR_0;

 case 129:
  VAR_4->simulate = 1;
  break;

 case 130:
 default:
  break;
 }

 VAR_8 = VAR_2 & 0x0fffffff;
 if (VAR_7 >= 0xe0000000)
  VAR_8 |= 0xe0000000;
 else
  VAR_8 |= VAR_7 & 0xf0000000;

 VAR_4->bpinsn = VAR_8;

 return 0;
}
