
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_device {int num_context_banks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 int FUNC_1 (struct arm_smmu_device*,int,int ) ;
 int FUNC_2 (struct arm_smmu_device*,int,int ,int) ;
 int FUNC_3 (struct arm_smmu_device*,int ) ;
 int FUNC_4 (struct arm_smmu_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct arm_smmu_device *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11;





 VAR_9 = FUNC_3(VAR_8, VAR_5);
 VAR_10 = FUNC_0(VAR_7, VAR_9);
 VAR_9 = FUNC_3(VAR_8, VAR_6);
 if (VAR_10 >= 2)
  VAR_9 &= ~VAR_0;




 VAR_9 |= VAR_2 | VAR_1;
 FUNC_4(VAR_8, VAR_6, VAR_9);





 for (VAR_11 = 0; VAR_11 < VAR_8->num_context_banks; ++VAR_11) {
  VAR_9 = FUNC_1(VAR_8, VAR_11, VAR_4);
  VAR_9 &= ~VAR_3;
  FUNC_2(VAR_8, VAR_11, VAR_4, VAR_9);
 }

 return 0;
}
