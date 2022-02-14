
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mem_ctl_info {int pdev; } ;
struct i82443bxgx_edacmc_error_info {int eap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int,int) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_3,
    struct i82443bxgx_edacmc_error_info
    *VAR_4)
{
 struct pci_dev *VAR_5;
 VAR_5 = FUNC_2(VAR_3->pdev);
 FUNC_0(VAR_5, VAR_0, &VAR_4->eap);
 if (VAR_4->eap & VAR_2)

  FUNC_1(VAR_5, VAR_0,
     VAR_2,
     VAR_2);

 if (VAR_4->eap & VAR_1)

  FUNC_1(VAR_5, VAR_0,
     VAR_1,
     VAR_1);
}
