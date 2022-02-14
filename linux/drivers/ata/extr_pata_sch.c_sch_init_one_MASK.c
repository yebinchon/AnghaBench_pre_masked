
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct ata_port_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,struct ata_port_info const**,int *,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 struct ata_port_info const VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 const struct ata_port_info *VAR_5[] = { &VAR_1, ((void*)0) };

 FUNC_1(&VAR_3->dev, VAR_0);

 return FUNC_0(VAR_3, VAR_5, &VAR_2, ((void*)0), 0);
}
