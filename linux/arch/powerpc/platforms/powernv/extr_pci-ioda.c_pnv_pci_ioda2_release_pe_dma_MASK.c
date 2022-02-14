
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ group; struct iommu_table** tables; } ;
struct pnv_ioda_pe {TYPE_1__ table_group; } ;
struct iommu_table {int dummy; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iommu_table*) ;
 int FUNC_3 (struct pnv_ioda_pe*,char*,scalar_t__) ;
 int FUNC_4 (struct pnv_ioda_pe*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 unsigned int FUNC_6 (struct pnv_ioda_pe*) ;

__attribute__((used)) static void FUNC_7(struct pnv_ioda_pe *VAR_0)
{
 struct iommu_table *VAR_1 = VAR_0->table_group.tables[0];
 unsigned int VAR_2 = FUNC_6(VAR_0);




 if (!VAR_2)
  return;







 FUNC_4(VAR_0, 0);
 if (VAR_0->table_group.group) {
  FUNC_1(VAR_0->table_group.group);
  FUNC_0(VAR_0->table_group.group);
 }

 FUNC_2(VAR_1);
}
