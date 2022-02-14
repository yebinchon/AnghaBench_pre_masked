
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct radeon_device {int smc_idx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_1, u16 VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4;

 FUNC_2(&VAR_1->smc_idx_lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 4) {
  FUNC_1(VAR_1, VAR_4, VAR_2);
  FUNC_0(VAR_0, 0);
 }
 FUNC_3(&VAR_1->smc_idx_lock, VAR_3);
}
