
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long ip; } ;
struct TYPE_2__ {unsigned long (* get_guest_ip ) () ;scalar_t__ (* is_in_guest ) () ;} ;


 unsigned long FUNC_0 (struct pt_regs*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 () ;

unsigned long FUNC_3(struct pt_regs *VAR_1)
{
 if (VAR_0 && VAR_0->is_in_guest())
  return VAR_0->get_guest_ip();

 return VAR_1->ip + FUNC_0(VAR_1);
}
