
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
struct siginfo {int dummy; } ;
struct irq_fd {scalar_t__ purge; int events; } ;
struct irq_entry {struct irq_fd** irq_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct irq_fd*,struct uml_pt_regs*) ;
 int FUNC_2 (struct irq_fd*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 () ;

void FUNC_6(int VAR_2, struct siginfo *VAR_3, struct uml_pt_regs *VAR_4)
{
 struct irq_entry *VAR_5;
 struct irq_fd *VAR_6;

 int VAR_7, VAR_8, VAR_9;

 while (1) {






  VAR_7 = FUNC_5();

  if (VAR_7 <= 0) {
   if (VAR_7 == -VAR_0)
    continue;
   else
    break;
  }

  for (VAR_8 = 0; VAR_8 < VAR_7 ; VAR_8++) {



   VAR_5 = (struct irq_entry *)
    FUNC_3(VAR_8);
   for (VAR_9 = 0; VAR_9 < VAR_1 ; VAR_9++) {
    VAR_6 = VAR_5->irq_array[VAR_9];
    if (VAR_6 == ((void*)0))
     continue;
    if (FUNC_4(VAR_8, VAR_6->events) > 0)
     FUNC_1(VAR_6, VAR_4);
    if (VAR_6->purge) {
     VAR_5->irq_array[VAR_9] = ((void*)0);
     FUNC_2(VAR_6);
    }
   }
  }
 }

 FUNC_0();
}
