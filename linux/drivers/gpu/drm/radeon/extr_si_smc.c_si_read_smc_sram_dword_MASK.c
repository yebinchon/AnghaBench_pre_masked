
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int smc_idx_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct radeon_device*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct radeon_device *VAR_1, u32 VAR_2,
      u32 *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1->smc_idx_lock, VAR_5);
 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4);
 if (VAR_6 == 0)
  *VAR_3 = FUNC_0(VAR_0);
 FUNC_3(&VAR_1->smc_idx_lock, VAR_5);

 return VAR_6;
}
