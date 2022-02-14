
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_emulation {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_hw_mode ) (int) ;} ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct insn_emulation *VAR_1 = (struct insn_emulation *)VAR_0;
 if (VAR_1->ops->set_hw_mode)
  VAR_1->ops->set_hw_mode(1);
}
