
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_pbm_info {scalar_t__ controller_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pci_pbm_info *VAR_7)
{
 u64 VAR_8;

 FUNC_1(5, VAR_7->controller_regs + VAR_0);


 VAR_8 = FUNC_0(VAR_7->controller_regs + VAR_1);
 VAR_8 |= VAR_5;
 FUNC_1(VAR_8, VAR_7->controller_regs + VAR_1);

 VAR_8 = FUNC_0(VAR_7->controller_regs + VAR_3);
 VAR_8 |= VAR_5;
 FUNC_1(VAR_8, VAR_7->controller_regs + VAR_3);





 VAR_8 = FUNC_0(VAR_7->controller_regs + VAR_2);
 VAR_8 |= VAR_6;
 FUNC_1(VAR_8, VAR_7->controller_regs + VAR_2);

 VAR_8 = FUNC_0(VAR_7->controller_regs + VAR_4);
 VAR_8 |= VAR_6;
 FUNC_1(VAR_8, VAR_7->controller_regs + VAR_4);
}
