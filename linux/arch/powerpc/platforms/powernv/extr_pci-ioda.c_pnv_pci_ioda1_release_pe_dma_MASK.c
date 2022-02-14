
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ group; struct iommu_table** tables; } ;
struct pnv_ioda_pe {TYPE_1__ table_group; } ;
struct iommu_table {int it_size; int it_base; int it_offset; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct iommu_table*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 unsigned int FUNC_6 (struct pnv_ioda_pe*) ;
 int FUNC_7 (struct iommu_table*,int ,int,int) ;

__attribute__((used)) static void FUNC_8(struct pnv_ioda_pe *VAR_1)
{
 unsigned int VAR_2 = FUNC_6(VAR_1);
 struct iommu_table *VAR_3 = VAR_1->table_group.tables[0];
 int64_t VAR_4;

 if (!VAR_2)
  return;

 VAR_4 = FUNC_5(&VAR_1->table_group, 0);
 if (VAR_4 != VAR_0)
  return;

 FUNC_7(VAR_3, VAR_3->it_offset, VAR_3->it_size, 0);
 if (VAR_1->table_group.group) {
  FUNC_3(VAR_1->table_group.group);
  FUNC_0(VAR_1->table_group.group);
 }

 FUNC_1(VAR_3->it_base, FUNC_2(VAR_3->it_size << 3));
 FUNC_4(VAR_3);
}
