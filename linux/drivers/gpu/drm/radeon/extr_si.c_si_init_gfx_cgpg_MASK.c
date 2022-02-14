
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int save_restore_gpu_addr; int clear_state_gpu_addr; } ;
struct radeon_device {TYPE_1__ rlc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_7)
{
 u32 VAR_8;

 FUNC_2(VAR_6, VAR_7->rlc.save_restore_gpu_addr >> 8);

 VAR_8 = FUNC_1(VAR_5);
 VAR_8 |= VAR_0;
 FUNC_2(VAR_5, VAR_8);

 FUNC_2(VAR_4, VAR_7->rlc.clear_state_gpu_addr >> 8);

 VAR_8 = FUNC_1(VAR_3);

 VAR_8 &= ~VAR_1;
 VAR_8 |= FUNC_0(0x700);
 VAR_8 &= ~VAR_2;
 FUNC_2(VAR_3, VAR_8);
}
