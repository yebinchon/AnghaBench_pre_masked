
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwbutton_interrupt {scalar_t__ initial_state; int name; int irq; int eirq; int * handle_lo; int * handle_hi; } ;


 unsigned long* VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ,struct hwbutton_interrupt*) ;

__attribute__((used)) static int FUNC_4(struct hwbutton_interrupt *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_4->handle_hi == ((void*)0) || VAR_4->handle_lo == ((void*)0))
  return -VAR_1;

 VAR_5 = *VAR_0;
 FUNC_2(VAR_5, VAR_4->eirq);
 if (VAR_4->initial_state == VAR_2)
  FUNC_1(VAR_5, VAR_4->eirq);
 else
  FUNC_0(VAR_5, VAR_4->eirq);
 *VAR_0 = VAR_5;

 return FUNC_3(VAR_4->irq, VAR_3, 0,
      VAR_4->name, VAR_4);
}
