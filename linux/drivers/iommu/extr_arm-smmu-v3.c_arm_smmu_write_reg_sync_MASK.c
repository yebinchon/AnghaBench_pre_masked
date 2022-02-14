
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct arm_smmu_device {scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct arm_smmu_device *VAR_1, u32 VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;

 FUNC_1(VAR_2, VAR_1->base + VAR_3);
 return FUNC_0(VAR_1->base + VAR_4, VAR_5, VAR_5 == VAR_2,
       1, VAR_0);
}
