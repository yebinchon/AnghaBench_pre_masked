
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
struct irq_fd {int active; int pending; int purge; int irq; } ;


 int FUNC_0 (int ,struct uml_pt_regs*) ;

__attribute__((used)) static void FUNC_1(struct irq_fd *VAR_0, struct uml_pt_regs *VAR_1)
{






 if (VAR_0->active) {
  VAR_0->active = 0;
  do {
   VAR_0->pending = 0;
   FUNC_0(VAR_0->irq, VAR_1);
  } while (VAR_0->pending && (!VAR_0->purge));
  if (!VAR_0->purge)
   VAR_0->active = 1;
 } else {
  VAR_0->pending = 1;
 }
}
