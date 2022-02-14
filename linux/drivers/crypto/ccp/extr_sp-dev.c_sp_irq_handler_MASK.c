
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {int psp_irq_data; int (* psp_irq_handler ) (int,int ) ;int ccp_irq_data; int (* ccp_irq_handler ) (int,int ) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct sp_device *VAR_3 = VAR_2;

 if (VAR_3->ccp_irq_handler)
  VAR_3->ccp_irq_handler(VAR_1, VAR_3->ccp_irq_data);

 if (VAR_3->psp_irq_handler)
  VAR_3->psp_irq_handler(VAR_1, VAR_3->psp_irq_data);

 return VAR_0;
}
