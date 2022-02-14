
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int clear_state_size; int* reg_list; int reg_list_size; int save_restore_gpu_addr; int cp_table_gpu_addr; int clear_state_gpu_addr; scalar_t__ cs_data; } ;
struct radeon_device {TYPE_1__ rlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_14)
{
 u32 VAR_15, VAR_16;
 u32 VAR_17;

 if (VAR_14->rlc.cs_data) {
  FUNC_3(VAR_7, VAR_5);
  FUNC_3(VAR_8, FUNC_5(VAR_14->rlc.clear_state_gpu_addr));
  FUNC_3(VAR_8, FUNC_4(VAR_14->rlc.clear_state_gpu_addr));
  FUNC_3(VAR_8, VAR_14->rlc.clear_state_size);
 } else {
  FUNC_3(VAR_7, VAR_5);
  for (VAR_17 = 0; VAR_17 < 3; VAR_17++)
   FUNC_3(VAR_8, 0);
 }
 if (VAR_14->rlc.reg_list) {
  FUNC_3(VAR_7, VAR_13);
  for (VAR_17 = 0; VAR_17 < VAR_14->rlc.reg_list_size; VAR_17++)
   FUNC_3(VAR_8, VAR_14->rlc.reg_list[VAR_17]);
 }

 VAR_16 = VAR_15 = FUNC_2(VAR_9);
 VAR_15 |= VAR_1;
 if (VAR_16 != VAR_15)
  FUNC_3(VAR_9, VAR_15);

 FUNC_3(VAR_12, VAR_14->rlc.save_restore_gpu_addr >> 8);
 FUNC_3(VAR_6, VAR_14->rlc.cp_table_gpu_addr >> 8);

 VAR_15 = FUNC_2(VAR_0);
 VAR_15 &= ~VAR_3;
 VAR_15 |= FUNC_1(0x60);
 FUNC_3(VAR_0, VAR_15);

 VAR_15 = 0x10101010;
 FUNC_3(VAR_10, VAR_15);

 VAR_15 = FUNC_2(VAR_11);
 VAR_15 &= ~0xff;
 VAR_15 |= 0x3;
 FUNC_3(VAR_11, VAR_15);

 VAR_15 = FUNC_2(VAR_4);
 VAR_15 &= ~VAR_2;
 VAR_15 |= FUNC_0(0x700);
 FUNC_3(VAR_4, VAR_15);

}
