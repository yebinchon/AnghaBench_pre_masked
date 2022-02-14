
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int mc_idx_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

u32 FUNC_5(struct radeon_device *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_2->mc_idx_lock, VAR_4);
 FUNC_2(VAR_0, FUNC_1(VAR_3));
 VAR_5 = FUNC_0(VAR_1);
 FUNC_4(&VAR_2->mc_idx_lock, VAR_4);
 return VAR_5;
}
