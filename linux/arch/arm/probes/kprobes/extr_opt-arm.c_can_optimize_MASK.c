
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int stack_space; } ;
struct kprobe {TYPE_1__ ainsn; } ;



__attribute__((used)) static int FUNC_0(struct kprobe *VAR_0)
{
 if (VAR_0->ainsn.stack_space < 0)
  return 0;




 if (VAR_0->ainsn.stack_space > 255 - sizeof(struct pt_regs))
  return 0;
 return 1;
}
