
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_lmc {scalar_t__ regs; } ;
struct pci_dev {int dev; } ;
struct mem_ctl_info {struct thunderx_lmc* pvt_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 struct mem_ctl_info *VAR_3 = FUNC_2(VAR_2);
 struct thunderx_lmc *VAR_4 = VAR_3->pvt_info;

 FUNC_3(VAR_0, VAR_4->regs + VAR_1);

 FUNC_0(&VAR_2->dev);
 FUNC_1(VAR_3);
}
