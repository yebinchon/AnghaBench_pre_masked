
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alchemy_pci_context {int wired_entry; scalar_t__ regs; int * pm; } ;


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
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct alchemy_pci_context*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 struct alchemy_pci_context *VAR_13 = VAR_12;
 if (!VAR_13)
  return;

 FUNC_0(VAR_13->pm[0], VAR_13->regs + VAR_4);
 FUNC_0(VAR_13->pm[2], VAR_13->regs + VAR_2);
 FUNC_0(VAR_13->pm[3], VAR_13->regs + VAR_0);
 FUNC_0(VAR_13->pm[4], VAR_13->regs + VAR_1);
 FUNC_0(VAR_13->pm[5], VAR_13->regs + VAR_9);
 FUNC_0(VAR_13->pm[6], VAR_13->regs + VAR_8);
 FUNC_0(VAR_13->pm[7], VAR_13->regs + VAR_6);
 FUNC_0(VAR_13->pm[8], VAR_13->regs + VAR_3);
 FUNC_0(VAR_13->pm[9], VAR_13->regs + VAR_10);
 FUNC_0(VAR_13->pm[10], VAR_13->regs + VAR_7);
 FUNC_0(VAR_13->pm[11], VAR_13->regs + VAR_11);
 FUNC_2();
 FUNC_0(VAR_13->pm[1], VAR_13->regs + VAR_5);
 FUNC_2();




 VAR_13->wired_entry = 8191;
 FUNC_1(VAR_13);
}
