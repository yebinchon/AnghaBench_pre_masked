
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_ceq {int irq; int dpc_tasklet; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct i40iw_ceq *VAR_3 = (struct i40iw_ceq *)VAR_2;

 if (VAR_3->irq != VAR_1)
  FUNC_0("expected irq = %d received irq = %d\n", VAR_3->irq, VAR_1);
 FUNC_1(&VAR_3->dpc_tasklet);
 return VAR_0;
}
