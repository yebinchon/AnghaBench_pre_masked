
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * insn; } ;
struct kprobe {TYPE_1__ ainsn; int addr; } ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct kprobe *VAR_1)
{





 VAR_1->ainsn.insn = ((void*)0);
 if (FUNC_2(VAR_1->addr))
  VAR_1->ainsn.insn = FUNC_1();
 else if (FUNC_3(VAR_1->addr))
  VAR_1->ainsn.insn = FUNC_0();
 return VAR_1->ainsn.insn ? 0 : -VAR_0;
}
