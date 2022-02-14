
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct ide_port_info {int udma_mask; int * port_ops; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct pci_dev*,struct ide_port_info*,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 struct ide_port_info VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct ide_port_info VAR_8 = VAR_3;
 u8 VAR_9[] = { 0x00, 0x00, 0x07, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f };
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10)
  return VAR_10;

 if (FUNC_2(VAR_6) == 0)
  return -VAR_1;

 if (VAR_2 >= VAR_0)
  VAR_8.port_ops = &VAR_4;
 else
  VAR_8.port_ops = &VAR_5;

 VAR_8.udma_mask = VAR_9[VAR_2];

 return FUNC_0(VAR_6, &VAR_8, ((void*)0));
}
