
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;
struct eni_zero {int dma; int addr; } ;
struct eni_dev {struct atm_dev* more; int asic; struct pci_dev* pci_dev; struct eni_zero zero; } ;
struct atm_dev {struct eni_dev* dev_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct atm_dev*) ;
 struct atm_dev* FUNC_2 (int ,int *,int *,int,int *) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 struct atm_dev* VAR_4 ;
 int FUNC_6 (struct atm_dev*) ;
 int FUNC_7 (struct atm_dev*) ;
 int FUNC_8 (struct atm_dev*) ;
 int FUNC_9 (struct eni_dev*) ;
 struct eni_dev* FUNC_10 (int,int ) ;
 int VAR_5 ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*,struct atm_dev*) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_6,
   const struct pci_device_id *VAR_7)
{
 struct atm_dev *VAR_8;
 struct eni_dev *VAR_9;
 struct eni_zero *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_12(VAR_6);
 if (VAR_11 < 0)
  goto out;

 VAR_11 = FUNC_5(&VAR_6->dev, FUNC_0(32));
 if (VAR_11 < 0)
  goto out;

 VAR_11 = -VAR_2;
 VAR_9 = FUNC_10(sizeof(struct eni_dev), VAR_3);
 if (!VAR_9)
  goto err_disable;

 VAR_10 = &VAR_9->zero;
 VAR_10->addr = FUNC_3(&VAR_6->dev,
     VAR_1, &VAR_10->dma, VAR_3);
 if (!VAR_10->addr)
  goto err_kfree;

 VAR_8 = FUNC_2(VAR_0, &VAR_6->dev, &VAR_5, -1, ((void*)0));
 if (!VAR_8)
  goto err_free_consistent;

 VAR_8->dev_data = VAR_9;
 FUNC_13(VAR_6, VAR_8);
 VAR_9->pci_dev = VAR_6;
 VAR_9->asic = VAR_7->driver_data;

 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11 < 0)
  goto err_unregister;

 VAR_11 = FUNC_8(VAR_8);
 if (VAR_11 < 0)
  goto err_eni_release;

 VAR_9->more = VAR_4;
 VAR_4 = VAR_8;
out:
 return VAR_11;

err_eni_release:
 FUNC_7(VAR_8);
err_unregister:
 FUNC_1(VAR_8);
err_free_consistent:
 FUNC_4(&VAR_6->dev, VAR_1, VAR_10->addr, VAR_10->dma);
err_kfree:
 FUNC_9(VAR_9);
err_disable:
 FUNC_11(VAR_6);
 goto out;
}
