
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * insn; } ;
struct kprobe {TYPE_1__ ainsn; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct kprobe *VAR_0)
{
 if (VAR_0->ainsn.insn) {
  FUNC_0(VAR_0->ainsn.insn, 0);
  VAR_0->ainsn.insn = ((void*)0);
 }
}
