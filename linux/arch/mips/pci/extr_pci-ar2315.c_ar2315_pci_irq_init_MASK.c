
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar2315_pci_ctrl {int irq; int domain; int irq_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ar2315_pci_ctrl*,int ,int,int) ;
 int FUNC_1 (struct ar2315_pci_ctrl*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,struct ar2315_pci_ctrl*) ;

__attribute__((used)) static void FUNC_4(struct ar2315_pci_ctrl *VAR_8)
{
 FUNC_0(VAR_8, VAR_0, VAR_1, 0);
 FUNC_0(VAR_8, VAR_2, (VAR_3 |
       VAR_4), 0);

 VAR_8->irq_ext = FUNC_2(VAR_8->domain, VAR_5);

 FUNC_3(VAR_8->irq, VAR_7,
      VAR_8);



 FUNC_1(VAR_8, VAR_6, VAR_3 |
        VAR_4);
 FUNC_0(VAR_8, VAR_0, 0, VAR_1);
}
