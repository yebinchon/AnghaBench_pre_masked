
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int clear_state_size; int* reg_list; int reg_list_size; int save_restore_gpu_addr; int cp_table_gpu_addr; int clear_state_gpu_addr; scalar_t__ cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_16)
{
 u32 VAR_17, VAR_18;
 u32 VAR_19;

 if (VAR_16->gfx.rlc.cs_data) {
  FUNC_1(VAR_9, VAR_4);
  FUNC_1(VAR_10, FUNC_3(VAR_16->gfx.rlc.clear_state_gpu_addr));
  FUNC_1(VAR_10, FUNC_2(VAR_16->gfx.rlc.clear_state_gpu_addr));
  FUNC_1(VAR_10, VAR_16->gfx.rlc.clear_state_size);
 } else {
  FUNC_1(VAR_9, VAR_4);
  for (VAR_19 = 0; VAR_19 < 3; VAR_19++)
   FUNC_1(VAR_10, 0);
 }
 if (VAR_16->gfx.rlc.reg_list) {
  FUNC_1(VAR_9, VAR_6);
  for (VAR_19 = 0; VAR_19 < VAR_16->gfx.rlc.reg_list_size; VAR_19++)
   FUNC_1(VAR_10, VAR_16->gfx.rlc.reg_list[VAR_19]);
 }

 VAR_18 = VAR_17 = FUNC_0(VAR_12);
 VAR_17 |= VAR_5;
 if (VAR_18 != VAR_17)
  FUNC_1(VAR_12, VAR_17);

 FUNC_1(VAR_15, VAR_16->gfx.rlc.save_restore_gpu_addr >> 8);
 FUNC_1(VAR_11, VAR_16->gfx.rlc.cp_table_gpu_addr >> 8);

 VAR_17 = FUNC_0(VAR_7);
 VAR_17 &= ~VAR_0;
 VAR_17 |= (0x60 << VAR_1);
 FUNC_1(VAR_7, VAR_17);

 VAR_17 = 0x10101010;
 FUNC_1(VAR_13, VAR_17);

 VAR_17 = FUNC_0(VAR_14);
 VAR_17 &= ~0xff;
 VAR_17 |= 0x3;
 FUNC_1(VAR_14, VAR_17);

 VAR_17 = FUNC_0(VAR_8);
 VAR_17 &= ~VAR_2;
 VAR_17 |= (0x700 << VAR_3);
 FUNC_1(VAR_8, VAR_17);

}
