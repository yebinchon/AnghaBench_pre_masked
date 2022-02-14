
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_pci_regs {unsigned int if_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_0(int VAR_3, void *VAR_4)
{
 struct msp_pci_regs *VAR_5 = (void *)VAR_1;
 unsigned int VAR_6 = VAR_5->if_status;
 VAR_5->if_status = VAR_6;

 return VAR_0;
}
