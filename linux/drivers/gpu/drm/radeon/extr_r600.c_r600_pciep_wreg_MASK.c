
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int pciep_idx_lock; } ;
typedef int reg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct radeon_device *VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;

 FUNC_2(&VAR_2->pciep_idx_lock, VAR_5);
 FUNC_1(VAR_1, ((VAR_3) & 0xff));
 (void)FUNC_0(VAR_1);
 FUNC_1(VAR_0, (VAR_4));
 (void)FUNC_0(VAR_0);
 FUNC_3(&VAR_2->pciep_idx_lock, VAR_5);
}
