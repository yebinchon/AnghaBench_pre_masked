
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {unsigned int* insn; int boostable; } ;
struct kprobe {TYPE_1__ ainsn; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct kprobe *VAR_0, struct pt_regs *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3 = *VAR_0->ainsn.insn;


 VAR_2 = FUNC_1(VAR_1, VAR_3);
 if (VAR_2 > 0) {




  if (FUNC_3(VAR_0->ainsn.boostable == 0))
   VAR_0->ainsn.boostable = 1;
 } else if (VAR_2 < 0) {





  FUNC_2("Can't step on instruction %x\n", VAR_3);
  FUNC_0();
 } else {
  if (FUNC_3(VAR_0->ainsn.boostable != 1))
   VAR_0->ainsn.boostable = -1;
 }

 return VAR_2;
}
