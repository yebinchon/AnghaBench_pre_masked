
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {unsigned long num_l1_ents; } ;
struct arm_smmu_device {int features; TYPE_1__ strtab_cfg; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct arm_smmu_device *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4 = VAR_2->strtab_cfg.num_l1_ents;

 if (VAR_2->features & VAR_0)
  VAR_4 *= 1UL << VAR_1;

 return VAR_3 < VAR_4;
}
