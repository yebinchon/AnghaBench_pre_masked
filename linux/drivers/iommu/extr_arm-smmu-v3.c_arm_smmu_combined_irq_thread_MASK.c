
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_device {int features; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct arm_smmu_device *VAR_4 = VAR_3;

 FUNC_0(VAR_2, VAR_3);
 if (VAR_4->features & VAR_0)
  FUNC_1(VAR_2, VAR_3);

 return VAR_1;
}
