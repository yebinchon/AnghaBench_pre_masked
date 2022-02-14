
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cryp {int irq_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stm32_cryp*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct stm32_cryp *VAR_4 = VAR_3;

 VAR_4->irq_status = FUNC_0(VAR_4, VAR_0);

 return VAR_1;
}
