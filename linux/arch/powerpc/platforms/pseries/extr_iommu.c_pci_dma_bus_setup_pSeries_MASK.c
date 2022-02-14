
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dn {TYPE_1__* phb; TYPE_2__* table_group; } ;
struct pci_bus {scalar_t__ self; } ;
struct iommu_table {int * it_ops; } ;
struct device_node {struct device_node* sibling; struct device_node* child; struct device_node* parent; } ;
struct TYPE_4__ {struct iommu_table** tables; } ;
struct TYPE_3__ {int dma_window_size; int dma_window_base_cur; int node; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct iommu_table*,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,struct device_node*,struct iommu_table*) ;
 struct device_node* FUNC_4 (int *,char*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (struct pci_bus*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(struct pci_bus *VAR_1)
{
 struct device_node *VAR_2;
 struct iommu_table *VAR_3;
 struct device_node *VAR_4, *VAR_5;
 struct device_node *VAR_6;
 struct pci_dn *VAR_7;
 int VAR_8;

 VAR_2 = FUNC_6(VAR_1);

 FUNC_7("pci_dma_bus_setup_pSeries: setting up bus %pOF\n", VAR_2);

 if (VAR_1->self) {



  return;
 }
 VAR_7 = FUNC_0(VAR_2);




 VAR_4 = VAR_5 = FUNC_4(((void*)0), "isa");

 while (VAR_4 && VAR_4 != VAR_2)
  VAR_4 = VAR_4->parent;

 FUNC_5(VAR_5);


 for (VAR_8 = 0, VAR_6 = VAR_2->child; VAR_6; VAR_6 = VAR_6->sibling)
  VAR_8++;

 FUNC_7("Children: %d\n", VAR_8);







 if (!VAR_4) {

  VAR_7->phb->dma_window_size = 0x80000000ul;

  while (VAR_7->phb->dma_window_size * VAR_8 > 0x80000000ul)
   VAR_7->phb->dma_window_size >>= 1;
  FUNC_7("No ISA/IDE, window size is 0x%llx\n",
    VAR_7->phb->dma_window_size);
  VAR_7->phb->dma_window_base_cur = 0;

  return;
 }






 VAR_7->phb->dma_window_size = 0x8000000ul;
 VAR_7->phb->dma_window_base_cur = 0x8000000ul;

 VAR_7->table_group = FUNC_2(VAR_7->phb->node);
 VAR_3 = VAR_7->table_group->tables[0];

 FUNC_3(VAR_7->phb, VAR_2, VAR_3);
 VAR_3->it_ops = &VAR_0;
 FUNC_1(VAR_3, VAR_7->phb->node, 0, 0);


 VAR_7->phb->dma_window_size = 0x80000000ul;
 while (VAR_7->phb->dma_window_size * VAR_8 > 0x70000000ul)
  VAR_7->phb->dma_window_size >>= 1;

 FUNC_7("ISA/IDE, window size is 0x%llx\n", VAR_7->phb->dma_window_size);
}
