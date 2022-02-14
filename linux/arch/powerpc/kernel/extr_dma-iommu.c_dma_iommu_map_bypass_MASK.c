
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iommu_bypass; } ;
struct device {TYPE_1__ archdata; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct device *VAR_2,
  unsigned long VAR_3)
{
 return VAR_2->archdata.iommu_bypass &&
  (!VAR_1 || (VAR_3 & VAR_0));
}
