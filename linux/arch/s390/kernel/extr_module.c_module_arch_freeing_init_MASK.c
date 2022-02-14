
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * syminfo; } ;
struct module {scalar_t__ state; TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct module*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct module *VAR_1)
{
 if (FUNC_0(VAR_1) &&
     VAR_1->state == VAR_0)
  return;

 FUNC_1(VAR_1->arch.syminfo);
 VAR_1->arch.syminfo = ((void*)0);
}
