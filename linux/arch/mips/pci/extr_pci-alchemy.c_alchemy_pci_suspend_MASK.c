
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alchemy_pci_context {int* pm; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct alchemy_pci_context* VAR_12 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct alchemy_pci_context *VAR_13 = VAR_12;
 if (!VAR_13)
  return 0;

 VAR_13->pm[0] = FUNC_0(VAR_13->regs + VAR_4);
 VAR_13->pm[1] = FUNC_0(VAR_13->regs + VAR_5) & 0x0009ffff;
 VAR_13->pm[2] = FUNC_0(VAR_13->regs + VAR_2);
 VAR_13->pm[3] = FUNC_0(VAR_13->regs + VAR_0);
 VAR_13->pm[4] = FUNC_0(VAR_13->regs + VAR_1);
 VAR_13->pm[5] = FUNC_0(VAR_13->regs + VAR_9);
 VAR_13->pm[6] = FUNC_0(VAR_13->regs + VAR_8);
 VAR_13->pm[7] = FUNC_0(VAR_13->regs + VAR_6);
 VAR_13->pm[8] = FUNC_0(VAR_13->regs + VAR_3);
 VAR_13->pm[9] = FUNC_0(VAR_13->regs + VAR_10);
 VAR_13->pm[10] = FUNC_0(VAR_13->regs + VAR_7);
 VAR_13->pm[11] = FUNC_0(VAR_13->regs + VAR_11);

 return 0;
}
