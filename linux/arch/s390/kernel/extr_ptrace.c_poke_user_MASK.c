
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int orig_gpr2; int acrs; } ;
struct user {TYPE_1__ regs; } ;
struct task_struct {int dummy; } ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int,int) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_2, addr_t VAR_3, addr_t VAR_4)
{
 addr_t VAR_5;





 VAR_5 = VAR_1;
 if (VAR_3 >= (addr_t) &((struct user *) ((void*)0))->regs.acrs &&
     VAR_3 < (addr_t) &((struct user *) ((void*)0))->regs.orig_gpr2)
  VAR_5 = 3;
 if ((VAR_3 & VAR_5) || VAR_3 > sizeof(struct user) - VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
