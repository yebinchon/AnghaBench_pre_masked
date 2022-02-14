
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {scalar_t__ it_offset; unsigned long it_reserved_start; unsigned long it_reserved_end; int it_map; int it_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct iommu_table *VAR_0,
  unsigned long VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2 < VAR_1);





 if (VAR_0->it_offset == 0)
  FUNC_1(0, VAR_0->it_map);

 VAR_0->it_reserved_start = VAR_1;
 VAR_0->it_reserved_end = VAR_2;


 if (VAR_1 && VAR_2 &&
   (VAR_0->it_offset + VAR_0->it_size < VAR_1 ||
    VAR_2 < VAR_0->it_offset))
  return;

 for (VAR_3 = VAR_0->it_reserved_start; VAR_3 < VAR_0->it_reserved_end; ++VAR_3)
  FUNC_1(VAR_3 - VAR_0->it_offset, VAR_0->it_map);
}
