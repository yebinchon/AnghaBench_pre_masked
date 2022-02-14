
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct insn_emulation {TYPE_1__* ops; } ;
struct TYPE_2__ {int set_hw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(struct insn_emulation *VAR_3, bool VAR_4)
{
 if (!VAR_3->ops->set_hw_mode)
  return -VAR_0;
 if (VAR_4)
  FUNC_0(VAR_2, (void *)VAR_3, 1);
 else
  FUNC_0(VAR_1, (void *)VAR_3, 1);
 return 0;
}
