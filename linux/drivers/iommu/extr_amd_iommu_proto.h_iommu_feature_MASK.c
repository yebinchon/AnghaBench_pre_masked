
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amd_iommu {int cap; int features; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct amd_iommu *VAR_1, u64 VAR_2)
{
 if (!(VAR_1->cap & (1 << VAR_0)))
  return 0;

 return !!(VAR_1->features & VAR_2);
}
