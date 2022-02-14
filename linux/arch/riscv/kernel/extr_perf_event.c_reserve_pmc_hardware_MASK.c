
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ irq; scalar_t__ handle_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,char*,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_1);
 if (VAR_2->irq >= 0 && VAR_2->handle_irq) {
  VAR_3 = FUNC_2(VAR_2->irq, VAR_2->handle_irq,
      VAR_0, "riscv-base-perf", ((void*)0));
 }
 FUNC_1(&VAR_1);

 return VAR_3;
}
