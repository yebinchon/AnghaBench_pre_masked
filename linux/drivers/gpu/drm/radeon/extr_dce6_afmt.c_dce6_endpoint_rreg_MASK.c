
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int end_idx_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

u32 FUNC_4(struct radeon_device *VAR_2,
         u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_2->end_idx_lock, VAR_5);
 FUNC_1(VAR_1 + VAR_3, VAR_4);
 VAR_6 = FUNC_0(VAR_0 + VAR_3);
 FUNC_3(&VAR_2->end_idx_lock, VAR_5);

 return VAR_6;
}
