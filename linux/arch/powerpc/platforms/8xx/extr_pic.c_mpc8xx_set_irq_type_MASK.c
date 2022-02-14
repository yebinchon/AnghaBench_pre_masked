
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int sc_siel; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct irq_data*,int ) ;
 int FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_3, unsigned int VAR_4)
{

 if ((VAR_4 & VAR_0) && !(FUNC_2(VAR_3) & 1)) {
  unsigned int VAR_5 = FUNC_0(&VAR_2->sc_siel);
  VAR_5 |= FUNC_3(VAR_3);
  FUNC_4(&VAR_2->sc_siel, VAR_5);
  FUNC_1(VAR_3, VAR_1);
 }
 return 0;
}
