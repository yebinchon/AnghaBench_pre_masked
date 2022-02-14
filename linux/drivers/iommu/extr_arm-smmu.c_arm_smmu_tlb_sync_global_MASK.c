
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_smmu_device {int global_sync_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arm_smmu_device*,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct arm_smmu_device *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_3->global_sync_lock, VAR_4);
 FUNC_0(VAR_3, VAR_0, VAR_2,
       VAR_1);
 FUNC_2(&VAR_3->global_sync_lock, VAR_4);
}
