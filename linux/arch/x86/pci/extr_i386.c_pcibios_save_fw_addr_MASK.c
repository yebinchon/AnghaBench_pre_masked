
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcibios_fwaddrmap {void** fw_addr; int list; int dev; } ;
struct pci_dev {int dummy; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pcibios_fwaddrmap* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct pcibios_fwaddrmap* FUNC_4 (struct pci_dev*) ;
 int VAR_3 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct pci_dev *VAR_4, int VAR_5, resource_size_t VAR_6)
{
 unsigned long VAR_7;
 struct pcibios_fwaddrmap *VAR_8;

 if (VAR_1)
  return;

 FUNC_5(&VAR_2, VAR_7);
 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8) {
  FUNC_6(&VAR_2, VAR_7);
  VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
  if (!VAR_8)
   return;

  VAR_8->dev = FUNC_3(VAR_4);
  VAR_8->fw_addr[VAR_5] = VAR_6;
  FUNC_0(&VAR_8->list);

  FUNC_5(&VAR_2, VAR_7);
  FUNC_2(&VAR_8->list, &VAR_3);
 } else
  VAR_8->fw_addr[VAR_5] = VAR_6;
 FUNC_6(&VAR_2, VAR_7);
}
