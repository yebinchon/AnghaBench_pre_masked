
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r82600_error_info {int eapr; } ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int pdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_1,
    struct r82600_error_info *VAR_2)
{
 struct pci_dev *VAR_3;

 VAR_3 = FUNC_3(VAR_1->pdev);
 FUNC_1(VAR_3, VAR_0, &VAR_2->eapr);

 if (VAR_2->eapr & FUNC_0(0))

  FUNC_2(VAR_3, VAR_0,
     ((u32) FUNC_0(0) & (u32) FUNC_0(1)),
     ((u32) FUNC_0(0) & (u32) FUNC_0(1)));

 if (VAR_2->eapr & FUNC_0(1))

  FUNC_2(VAR_3, VAR_0,
     ((u32) FUNC_0(0) & (u32) FUNC_0(1)),
     ((u32) FUNC_0(0) & (u32) FUNC_0(1)));
}
