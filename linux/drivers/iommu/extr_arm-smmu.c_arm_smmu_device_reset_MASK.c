
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct arm_smmu_device {int num_mapping_groups; int num_context_banks; int features; TYPE_1__* impl; } ;
struct TYPE_2__ {int (* reset ) (struct arm_smmu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct arm_smmu_device*,int,int ,int ) ;
 int FUNC_1 (struct arm_smmu_device*,int ) ;
 int FUNC_2 (struct arm_smmu_device*,int ,int) ;
 int FUNC_3 (struct arm_smmu_device*) ;
 int FUNC_4 (struct arm_smmu_device*,int) ;
 int FUNC_5 (struct arm_smmu_device*,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (struct arm_smmu_device*) ;

__attribute__((used)) static void FUNC_7(struct arm_smmu_device *VAR_22)
{
 int VAR_23;
 u32 VAR_24;


 VAR_24 = FUNC_1(VAR_22, VAR_6);
 FUNC_2(VAR_22, VAR_6, VAR_24);





 for (VAR_23 = 0; VAR_23 < VAR_22->num_mapping_groups; ++VAR_23)
  FUNC_5(VAR_22, VAR_23);


 for (VAR_23 = 0; VAR_23 < VAR_22->num_context_banks; ++VAR_23) {
  FUNC_4(VAR_22, VAR_23);
  FUNC_0(VAR_22, VAR_23, VAR_0, VAR_7);
 }


 FUNC_2(VAR_22, VAR_3, VAR_8);
 FUNC_2(VAR_22, VAR_4, VAR_8);

 VAR_24 = FUNC_1(VAR_22, VAR_5);


 VAR_24 |= (VAR_17 | VAR_16 | VAR_15 | VAR_14);


 VAR_24 |= (VAR_21 | VAR_18);


 VAR_24 &= ~VAR_11;
 if (VAR_9)
  VAR_24 |= VAR_19;
 else
  VAR_24 &= ~VAR_19;


 VAR_24 &= ~VAR_13;


 VAR_24 &= ~(VAR_10);

 if (VAR_22->features & VAR_2)
  VAR_24 |= VAR_20;

 if (VAR_22->features & VAR_1)
  VAR_24 |= VAR_12;

 if (VAR_22->impl && VAR_22->impl->reset)
  VAR_22->impl->reset(VAR_22);


 FUNC_3(VAR_22);
 FUNC_2(VAR_22, VAR_5, VAR_24);
}
