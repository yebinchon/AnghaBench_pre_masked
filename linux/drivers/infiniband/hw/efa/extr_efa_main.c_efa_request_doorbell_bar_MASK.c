
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int db_bar; } ;
struct efa_dev {struct pci_dev* pdev; int db_bar_len; int db_bar_addr; TYPE_1__ dev_attr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct pci_dev*,int,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_6(struct efa_dev *VAR_3)
{
 u8 VAR_4 = VAR_3->dev_attr.db_bar;
 struct pci_dev *VAR_5 = VAR_3->pdev;
 int VAR_6;
 int VAR_7;

 if (!(FUNC_0(VAR_4) & VAR_1)) {
  VAR_6 = FUNC_5(VAR_5, VAR_2) & FUNC_0(VAR_4);

  VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_0);
  if (VAR_7) {
   FUNC_1(&VAR_3->pdev->dev,
    "pci_request_selected_regions for bar %d failed %d\n",
    VAR_4, VAR_7);
   return VAR_7;
  }
 }

 VAR_3->db_bar_addr = FUNC_4(VAR_3->pdev, VAR_4);
 VAR_3->db_bar_len = FUNC_3(VAR_3->pdev, VAR_4);

 return 0;
}
