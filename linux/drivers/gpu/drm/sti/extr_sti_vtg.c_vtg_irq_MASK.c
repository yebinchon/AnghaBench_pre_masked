
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_vtg {scalar_t__ regs; int irq_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct sti_vtg *VAR_5 = VAR_4;

 VAR_5->irq_status = FUNC_0(VAR_5->regs + VAR_1);

 FUNC_1(VAR_5->irq_status, VAR_5->regs + VAR_2);


 FUNC_0(VAR_5->regs + VAR_1);

 return VAR_0;
}
