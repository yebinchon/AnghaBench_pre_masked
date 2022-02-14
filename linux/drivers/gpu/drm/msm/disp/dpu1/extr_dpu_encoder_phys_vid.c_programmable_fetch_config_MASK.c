
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intf_timing_params {int dummy; } ;
struct intf_prog_fetch {int enable; int fetch_start; int member_0; } ;
struct dpu_encoder_phys {int enc_spinlock; TYPE_2__* hw_intf; } ;
struct TYPE_3__ {int (* setup_prg_fetch ) (TYPE_2__*,struct intf_prog_fetch*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (struct dpu_encoder_phys*,char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct intf_timing_params const*) ;
 int FUNC_3 (struct intf_timing_params const*) ;
 int FUNC_4 (struct dpu_encoder_phys*,struct intf_timing_params const*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (TYPE_2__*,struct intf_prog_fetch*) ;

__attribute__((used)) static void FUNC_8(struct dpu_encoder_phys *VAR_0,
          const struct intf_timing_params *VAR_1)
{
 struct intf_prog_fetch VAR_2 = { 0 };
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 unsigned long VAR_7;

 if (FUNC_1(!VAR_0->hw_intf->ops.setup_prg_fetch))
  return;

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (VAR_3) {
  VAR_5 = FUNC_3(VAR_1);
  VAR_4 = FUNC_2(VAR_1);
  VAR_6 =
      (VAR_5 - VAR_3) * VAR_4 + 1;
  VAR_2.enable = 1;
  VAR_2.fetch_start = VAR_6;
 }

 FUNC_0(VAR_0,
  "vfp_fetch_lines %u vfp_fetch_start_vsync_counter %u\n",
  VAR_3, VAR_6);

 FUNC_5(VAR_0->enc_spinlock, VAR_7);
 VAR_0->hw_intf->ops.setup_prg_fetch(VAR_0->hw_intf, &VAR_2);
 FUNC_6(VAR_0->enc_spinlock, VAR_7);
}
