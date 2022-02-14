
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_controller {TYPE_1__* bus; } ;
struct iommu_table_group {unsigned long tce32_start; unsigned long tce32_size; } ;
struct iommu_table {unsigned long it_page_shift; int it_blocksize; unsigned long it_offset; unsigned long it_size; int it_type; scalar_t__ it_base; int it_busno; int it_index; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int number; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,int const*,int *,unsigned long*,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct pci_controller *VAR_2,
          struct device_node *VAR_3,
          struct iommu_table *VAR_4,
          struct iommu_table_group *VAR_5,
          const __be32 *VAR_6)
{
 unsigned long VAR_7, VAR_8;

 FUNC_0(VAR_3, VAR_6, &VAR_4->it_index, &VAR_7, &VAR_8);

 VAR_4->it_busno = VAR_2->bus->number;
 VAR_4->it_page_shift = VAR_0;
 VAR_4->it_base = 0;
 VAR_4->it_blocksize = 16;
 VAR_4->it_type = VAR_1;
 VAR_4->it_offset = VAR_7 >> VAR_4->it_page_shift;
 VAR_4->it_size = VAR_8 >> VAR_4->it_page_shift;

 VAR_5->tce32_start = VAR_7;
 VAR_5->tce32_size = VAR_8;
}
