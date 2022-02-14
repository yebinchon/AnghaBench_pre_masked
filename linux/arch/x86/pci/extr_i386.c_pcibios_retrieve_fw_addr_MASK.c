
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcibios_fwaddrmap {int * fw_addr; } ;
struct pci_dev {int dummy; } ;
typedef int resource_size_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pcibios_fwaddrmap* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

resource_size_t FUNC_3(struct pci_dev *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 struct pcibios_fwaddrmap *VAR_5;
 resource_size_t VAR_6 = 0;

 if (VAR_0)
  return 0;

 FUNC_1(&VAR_1, VAR_4);
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  VAR_6 = VAR_5->fw_addr[VAR_3];
 FUNC_2(&VAR_1, VAR_4);

 return VAR_6;
}
