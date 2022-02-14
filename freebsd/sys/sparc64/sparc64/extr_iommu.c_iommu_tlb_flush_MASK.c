
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_state {int is_flags; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iommu_state*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static __inline void
FUNC_1(struct iommu_state *VAR_3, bus_addr_t VAR_4)
{

 if ((VAR_3->is_flags & VAR_1) != 0)




  return;
 FUNC_0(VAR_3, VAR_2, VAR_0, VAR_4);
}
