
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* is_user_mode ) () ;scalar_t__ (* is_in_guest ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

unsigned long FUNC_3(struct pt_regs *VAR_5)
{
 int VAR_6 = 0;


 if (VAR_4 && VAR_4->is_in_guest()) {
  if (VAR_4->is_user_mode())
   VAR_6 |= VAR_1;
  else
   VAR_6 |= VAR_0;
 } else {
  if (FUNC_2(VAR_5))
   VAR_6 |= VAR_3;
  else
   VAR_6 |= VAR_2;
 }

 return VAR_6;
}
