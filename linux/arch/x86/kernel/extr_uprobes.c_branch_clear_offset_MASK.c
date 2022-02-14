
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nbytes; } ;
struct insn {TYPE_1__ immediate; } ;
struct arch_uprobe {scalar_t__ insn; } ;


 scalar_t__ FUNC_0 (struct insn*) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct arch_uprobe *VAR_0, struct insn *VAR_1)
{
 FUNC_1(VAR_0->insn + FUNC_0(VAR_1),
  0, VAR_1->immediate.nbytes);
}
