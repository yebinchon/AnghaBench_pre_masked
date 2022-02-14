
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int end_idx_lock; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct radeon_device *VAR_3,
          u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 unsigned long VAR_7;

 FUNC_3(&VAR_3->end_idx_lock, VAR_7);
 if (FUNC_0(VAR_3))
  FUNC_2(VAR_2 + VAR_4, VAR_5);
 else
  FUNC_2(VAR_2 + VAR_4,
         VAR_0 | FUNC_1(VAR_5));
 FUNC_2(VAR_1 + VAR_4, VAR_6);
 FUNC_4(&VAR_3->end_idx_lock, VAR_7);
}
