
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int save_restore_gpu_addr; int clear_state_gpu_addr; } ;
struct radeon_device {int pg_flags; TYPE_1__ rlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_4)
{
 if (VAR_4->pg_flags) {
  if (VAR_4->pg_flags & VAR_1) {
   FUNC_4(VAR_4);
  }
  FUNC_3(VAR_4);
  if (VAR_4->pg_flags & VAR_0) {
   FUNC_5(VAR_4);
  } else {
   FUNC_0(VAR_3, VAR_4->rlc.save_restore_gpu_addr >> 8);
   FUNC_0(VAR_2, VAR_4->rlc.clear_state_gpu_addr >> 8);
  }
  FUNC_1(VAR_4, 1);
  FUNC_2(VAR_4, 1);
 } else {
  FUNC_0(VAR_3, VAR_4->rlc.save_restore_gpu_addr >> 8);
  FUNC_0(VAR_2, VAR_4->rlc.clear_state_gpu_addr >> 8);
 }
}
