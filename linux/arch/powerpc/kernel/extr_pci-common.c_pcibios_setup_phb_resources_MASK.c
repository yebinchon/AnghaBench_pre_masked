
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pci_controller {scalar_t__* mem_offset; struct resource* mem_resources; int global_number; int dn; struct resource io_resource; } ;
struct list_head {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (struct list_head*,struct resource*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pci_controller*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct pci_controller *VAR_0,
     struct list_head *VAR_1)
{
 struct resource *VAR_2;
 resource_size_t VAR_3;
 int VAR_4;


 VAR_2 = &VAR_0->io_resource;

 if (!VAR_2->flags) {
  FUNC_2("PCI: I/O resource not set for host"
    " bridge %pOF (domain %d)\n",
    VAR_0->dn, VAR_0->global_number);
 } else {
  VAR_3 = FUNC_1(VAR_0);

  FUNC_2("PCI: PHB IO resource    = %pR off 0x%08llx\n",
    VAR_2, (unsigned long long)VAR_3);
  FUNC_0(VAR_1, VAR_2, VAR_3);
 }


 for (VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
  VAR_2 = &VAR_0->mem_resources[VAR_4];
  if (!VAR_2->flags)
   continue;

  VAR_3 = VAR_0->mem_offset[VAR_4];
  FUNC_2("PCI: PHB MEM resource %d = %pR off 0x%08llx\n", VAR_4,
    VAR_2, (unsigned long long)VAR_3);

  FUNC_0(VAR_1, VAR_2, VAR_3);
 }
}
