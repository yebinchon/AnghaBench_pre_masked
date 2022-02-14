
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long intercept; scalar_t__ asid; int nested_ctl; } ;
struct vmcb {TYPE_1__ control; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct vmcb *VAR_3)
{
 if ((VAR_3->control.intercept & (1ULL << VAR_0)) == 0)
  return 0;

 if (VAR_3->control.asid == 0)
  return 0;

 if ((VAR_3->control.nested_ctl & VAR_1) &&
     !VAR_2)
  return 0;

 return 1;
}
