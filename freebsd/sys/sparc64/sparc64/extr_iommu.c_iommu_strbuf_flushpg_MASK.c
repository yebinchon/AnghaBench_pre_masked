
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_state {scalar_t__* is_sb; } ;
typedef int bus_addr_t ;


 int FUNC_0 (struct iommu_state*,int ,int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static __inline void
FUNC_1(struct iommu_state *VAR_2, bus_addr_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
  if (VAR_2->is_sb[VAR_4] != 0)
   FUNC_0(VAR_2, VAR_1[VAR_4], VAR_0, VAR_3);
}
