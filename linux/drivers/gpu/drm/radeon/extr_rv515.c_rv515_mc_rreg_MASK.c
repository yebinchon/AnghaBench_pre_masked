
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int mc_idx_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

uint32_t FUNC_4(struct radeon_device *VAR_2, uint32_t VAR_3)
{
 unsigned long VAR_4;
 uint32_t VAR_5;

 FUNC_2(&VAR_2->mc_idx_lock, VAR_4);
 FUNC_1(VAR_1, 0x7f0000 | (VAR_3 & 0xffff));
 VAR_5 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, 0);
 FUNC_3(&VAR_2->mc_idx_lock, VAR_4);

 return VAR_5;
}
