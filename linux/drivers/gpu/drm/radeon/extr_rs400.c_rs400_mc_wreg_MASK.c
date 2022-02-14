
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int mc_idx_lock; } ;
typedef int reg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct radeon_device *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(&VAR_3->mc_idx_lock, VAR_6);
 FUNC_0(VAR_1, ((VAR_4) & 0xff) | VAR_2);
 FUNC_0(VAR_0, (VAR_5));
 FUNC_0(VAR_1, 0xff);
 FUNC_2(&VAR_3->mc_idx_lock, VAR_6);
}
