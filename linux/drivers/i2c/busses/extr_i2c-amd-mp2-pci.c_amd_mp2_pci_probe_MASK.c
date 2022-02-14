
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct amd_mp2_dev {int probed; struct pci_dev* pci_dev; int c2p_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_mp2_dev*,struct pci_dev*) ;
 int FUNC_1 (int *,char*) ;
 struct amd_mp2_dev* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_2,
        const struct pci_device_id *VAR_3)
{
 struct amd_mp2_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_3(&VAR_4->c2p_lock);
 VAR_4->pci_dev = VAR_2;

 FUNC_6(&VAR_2->dev, 1000);
 FUNC_7(&VAR_2->dev);
 FUNC_5(&VAR_2->dev);
 FUNC_4(&VAR_2->dev);

 VAR_4->probed = 1;

 FUNC_1(&VAR_2->dev, "MP2 device registered.\n");
 return 0;
}
