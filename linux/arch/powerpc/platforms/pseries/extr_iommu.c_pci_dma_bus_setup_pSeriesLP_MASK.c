
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {struct device_node* table_group; TYPE_1__* phb; } ;
struct pci_bus {int dummy; } ;
struct iommu_table {int * it_ops; } ;
struct device_node {struct iommu_table** tables; struct device_node* parent; } ;
typedef int __be32 ;
struct TYPE_2__ {int node; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct iommu_table*,int ,int ,int ) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,struct device_node*,struct iommu_table*,struct device_node*,int const*) ;
 int * FUNC_5 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_6 (struct pci_bus*) ;
 int FUNC_7 (struct pci_bus*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9(struct pci_bus *VAR_1)
{
 struct iommu_table *VAR_2;
 struct device_node *VAR_3, *VAR_4;
 struct pci_dn *VAR_5;
 const __be32 *VAR_6 = ((void*)0);

 VAR_3 = FUNC_6(VAR_1);

 FUNC_8("pci_dma_bus_setup_pSeriesLP: setting up bus %pOF\n",
   VAR_3);


 for (VAR_4 = VAR_3; VAR_4 != ((void*)0); VAR_4 = VAR_4->parent) {
  VAR_6 = FUNC_5(VAR_4, "ibm,dma-window", ((void*)0));
  if (VAR_6 != ((void*)0))
   break;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_8("  no ibm,dma-window property !\n");
  return;
 }

 VAR_5 = FUNC_0(VAR_4);

 FUNC_8("  parent is %pOF, iommu_table: 0x%p\n",
   VAR_4, VAR_5->table_group);

 if (!VAR_5->table_group) {
  VAR_5->table_group = FUNC_2(VAR_5->phb->node);
  VAR_2 = VAR_5->table_group->tables[0];
  FUNC_4(VAR_5->phb, VAR_4, VAR_2,
    VAR_5->table_group, VAR_6);
  VAR_2->it_ops = &VAR_0;
  FUNC_1(VAR_2, VAR_5->phb->node, 0, 0);
  FUNC_3(VAR_5->table_group,
    FUNC_7(VAR_1), 0);
  FUNC_8("  created table: %p\n", VAR_5->table_group);
 }
}
