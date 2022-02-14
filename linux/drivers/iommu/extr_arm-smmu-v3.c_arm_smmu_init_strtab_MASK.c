
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int strtab_dma; int strtab_base; } ;
struct arm_smmu_device {int features; int vmid_map; TYPE_1__ strtab_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct arm_smmu_device *VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 if (VAR_3->features & VAR_0)
  VAR_5 = FUNC_0(VAR_3);
 else
  VAR_5 = FUNC_1(VAR_3);

 if (VAR_5)
  return VAR_5;


 VAR_4 = VAR_3->strtab_cfg.strtab_dma & VAR_1;
 VAR_4 |= VAR_2;
 VAR_3->strtab_cfg.strtab_base = VAR_4;


 FUNC_2(0, VAR_3->vmid_map);
 return 0;
}
