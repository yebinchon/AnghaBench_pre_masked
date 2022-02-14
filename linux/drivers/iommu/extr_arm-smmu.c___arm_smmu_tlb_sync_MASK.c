
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_device {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct arm_smmu_device*,int,int) ;
 int FUNC_1 (struct arm_smmu_device*,int,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct arm_smmu_device *VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 u32 VAR_10;

 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0);
 for (VAR_9 = 1; VAR_9 < VAR_1; VAR_9 *= 2) {
  for (VAR_8 = VAR_2; VAR_8 > 0; VAR_8--) {
   VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_7);
   if (!(VAR_10 & VAR_3))
    return;
   FUNC_2();
  }
  FUNC_4(VAR_9);
 }
 FUNC_3(VAR_4->dev,
       "TLB sync timed out -- SMMU may be deadlocked\n");
}
