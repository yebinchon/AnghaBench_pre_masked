
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int save_restore_gpu_addr; int clear_state_gpu_addr; } ;
struct TYPE_5__ {int max_shader_engines; int max_simds_per_se; } ;
struct TYPE_6__ {TYPE_1__ cayman; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_4__* rlc_fw; TYPE_3__ rlc; TYPE_2__ config; } ;
typedef int __be32 ;
struct TYPE_8__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct radeon_device*) ;

int FUNC_6(struct radeon_device *VAR_25)
{
 u32 VAR_26;
 const __be32 *VAR_27;

 if (!VAR_25->rlc_fw)
  return -VAR_5;

 FUNC_5(VAR_25);

 FUNC_1(VAR_9, 0);

 if (VAR_25->flags & VAR_7) {
  if (VAR_25->family == VAR_3) {
   u32 VAR_28 =
    3 | (3 << (16 * VAR_25->config.cayman.max_shader_engines));

   u32 VAR_29 = (FUNC_0(VAR_2) & 0xffff0000) >> 16;
   VAR_29 |= 0xffffffff << VAR_25->config.cayman.max_simds_per_se;
   VAR_29 = FUNC_4(~VAR_29);
   if (VAR_29 == VAR_25->config.cayman.max_simds_per_se) {
    FUNC_1(VAR_19, VAR_28);
    FUNC_1(VAR_23, 0x00601004);
    FUNC_1(VAR_22, 0xffffffff);
    FUNC_1(VAR_20, 0x00000000);
    FUNC_1(VAR_21, 0x00002000);
   }
  } else {
   FUNC_1(VAR_12, 0);
   FUNC_1(VAR_13, 0);
  }
  FUNC_1(VAR_24, VAR_25->rlc.save_restore_gpu_addr >> 8);
  FUNC_1(VAR_18, VAR_25->rlc.clear_state_gpu_addr >> 8);
 } else {
  FUNC_1(VAR_8, 0);
  FUNC_1(VAR_10, 0);
  FUNC_1(VAR_11, 0);
  FUNC_1(VAR_12, 0);
  FUNC_1(VAR_13, 0);
 }
 FUNC_1(VAR_14, 0);
 FUNC_1(VAR_16, 0);

 VAR_27 = (const __be32 *)VAR_25->rlc_fw->data;
 if (VAR_25->family >= VAR_3) {
  for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++) {
   FUNC_1(VAR_15, VAR_26);
   FUNC_1(VAR_17, FUNC_2(VAR_27++));
  }
 } else if (VAR_25->family >= VAR_4) {
  for (VAR_26 = 0; VAR_26 < VAR_1; VAR_26++) {
   FUNC_1(VAR_15, VAR_26);
   FUNC_1(VAR_17, FUNC_2(VAR_27++));
  }
 } else {
  for (VAR_26 = 0; VAR_26 < VAR_6; VAR_26++) {
   FUNC_1(VAR_15, VAR_26);
   FUNC_1(VAR_17, FUNC_2(VAR_27++));
  }
 }
 FUNC_1(VAR_15, 0);

 FUNC_3(VAR_25);

 return 0;
}
