
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {scalar_t__ it_offset; int it_reserved_start; int it_reserved_end; int it_map; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct iommu_table *VAR_0)
{
 int VAR_1;





 if (VAR_0->it_offset == 0)
  FUNC_0(0, VAR_0->it_map);

 for (VAR_1 = VAR_0->it_reserved_start; VAR_1 < VAR_0->it_reserved_end; ++VAR_1)
  FUNC_0(VAR_1 - VAR_0->it_offset, VAR_0->it_map);
}
