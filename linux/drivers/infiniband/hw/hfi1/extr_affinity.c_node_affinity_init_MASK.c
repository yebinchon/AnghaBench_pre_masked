
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int device; scalar_t__ vendor; } ;
struct pci_dev {int bus; } ;
struct TYPE_3__ {int mask; scalar_t__ gen; int used; } ;
struct TYPE_4__ {int num_possible_nodes; int num_online_cpus; int num_online_nodes; TYPE_1__ proc; int num_core_siblings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct pci_device_id* VAR_3 ;
 int* VAR_4 ;
 int FUNC_4 () ;
 int* FUNC_5 (int,int,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct pci_dev* FUNC_9 (scalar_t__,int ,struct pci_dev*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;

int FUNC_13(void)
{
 int VAR_6;
 struct pci_dev *VAR_7 = ((void*)0);
 const struct pci_device_id *VAR_8 = VAR_3;

 FUNC_0(&VAR_5.proc.used);
 FUNC_1(&VAR_5.proc.mask, VAR_2);

 VAR_5.proc.gen = 0;
 VAR_5.num_core_siblings =
    FUNC_3(FUNC_12(
     FUNC_2(&VAR_5.proc.mask)
     ));
 VAR_5.num_possible_nodes = FUNC_8();
 VAR_5.num_online_nodes = FUNC_7();
 VAR_5.num_online_cpus = FUNC_6();






 FUNC_4();

 VAR_4 = FUNC_5(VAR_5.num_possible_nodes,
         sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 while (VAR_8->vendor) {
  VAR_7 = ((void*)0);
  while ((VAR_7 = FUNC_9(VAR_8->vendor, VAR_8->device, VAR_7))) {
   VAR_6 = FUNC_10(VAR_7->bus);
   if (VAR_6 < 0)
    goto out;

   VAR_4[VAR_6]++;
  }
  VAR_8++;
 }

 return 0;

out:




 FUNC_11("HFI: Invalid PCI NUMA node. Performance may be affected\n");
 FUNC_11("HFI: System BIOS may need to be upgraded\n");
 for (VAR_6 = 0; VAR_6 < VAR_5.num_possible_nodes; VAR_6++)
  VAR_4[VAR_6] = 1;

 return 0;
}
