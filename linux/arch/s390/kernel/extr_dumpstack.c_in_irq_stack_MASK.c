
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_info {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {unsigned long async_stack; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long,struct stack_info*,int ,scalar_t__,unsigned long) ;

__attribute__((used)) static bool FUNC_1(unsigned long VAR_4, struct stack_info *VAR_5)
{
 unsigned long VAR_6, VAR_7;

 VAR_6 = VAR_1 + sizeof(struct pt_regs);
 VAR_7 = VAR_0.async_stack + VAR_6;
 return FUNC_0(VAR_4, VAR_5, VAR_2, VAR_7 - VAR_3, VAR_7);
}
