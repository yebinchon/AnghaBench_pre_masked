
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ldt; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct mm_struct *VAR_0)
{
 FUNC_0(VAR_0->context.ldt);
 VAR_0->context.ldt = ((void*)0);
}
