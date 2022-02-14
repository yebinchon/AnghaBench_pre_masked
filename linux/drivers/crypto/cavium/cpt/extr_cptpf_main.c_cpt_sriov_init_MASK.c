
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct cpt_device {int num_vf_en; int flags; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_5(struct cpt_device *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 u16 VAR_8;
 struct pci_dev *VAR_9 = VAR_4->pdev;

 VAR_6 = FUNC_3(VAR_9, VAR_2);
 if (!VAR_6) {
  FUNC_0(&VAR_9->dev, "SRIOV capability is not found in PCIe config space\n");
  return -VAR_1;
 }

 VAR_4->num_vf_en = VAR_5;
 FUNC_4(VAR_9, (VAR_6 + VAR_3), &VAR_8);
 if (VAR_8 < VAR_4->num_vf_en)
  VAR_4->num_vf_en = VAR_8;

 if (!VAR_8)
  return 0;


 VAR_7 = FUNC_2(VAR_9, VAR_4->num_vf_en);
 if (VAR_7) {
  FUNC_0(&VAR_9->dev, "SRIOV enable failed, num VF is %d\n",
   VAR_4->num_vf_en);
  VAR_4->num_vf_en = 0;
  return VAR_7;
 }



 FUNC_1(&VAR_9->dev, "SRIOV enabled, number of VF available %d\n",
   VAR_4->num_vf_en);

 VAR_4->flags |= VAR_0;

 return 0;
}
