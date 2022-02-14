
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intf_timing_params {int member_0; } ;
struct drm_display_mode {int hdisplay; int htotal; int hsync_start; int hsync_end; } ;
struct dpu_hw_intf_cfg {int mode_3d; scalar_t__ stream_sel; int intf_mode_sel; int intf; int member_0; } ;
struct dpu_format {int dummy; } ;
struct dpu_encoder_phys {scalar_t__ split_role; int enc_spinlock; TYPE_3__* hw_ctl; TYPE_4__* hw_intf; struct drm_display_mode cached_mode; } ;
struct TYPE_5__ {int (* setup_timing_gen ) (TYPE_4__*,struct intf_timing_params*,struct dpu_format const*) ;} ;
struct TYPE_8__ {TYPE_1__ ops; int idx; } ;
struct TYPE_6__ {int (* setup_intf_cfg ) (TYPE_3__*,struct dpu_hw_intf_cfg*) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct dpu_encoder_phys*,char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 struct dpu_format* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_display_mode*) ;
 int FUNC_5 (struct dpu_encoder_phys*,struct drm_display_mode*,struct intf_timing_params*) ;
 int FUNC_6 (struct dpu_encoder_phys*,struct intf_timing_params*) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (TYPE_4__*,struct intf_timing_params*,struct dpu_format const*) ;
 int FUNC_10 (TYPE_3__*,struct dpu_hw_intf_cfg*) ;

__attribute__((used)) static void FUNC_11(
  struct dpu_encoder_phys *VAR_3)
{
 struct drm_display_mode VAR_4;
 struct intf_timing_params VAR_5 = { 0 };
 const struct dpu_format *VAR_6 = ((void*)0);
 u32 VAR_7 = VAR_1;
 unsigned long VAR_8;
 struct dpu_hw_intf_cfg VAR_9 = { 0 };

 if (!VAR_3 || !VAR_3->hw_ctl->ops.setup_intf_cfg) {
  FUNC_1("invalid encoder %d\n", VAR_3 != 0);
  return;
 }

 VAR_4 = VAR_3->cached_mode;
 if (!VAR_3->hw_intf->ops.setup_timing_gen) {
  FUNC_1("timing engine setup is not supported\n");
  return;
 }

 FUNC_0(VAR_3, "enabling mode:\n");
 FUNC_4(&VAR_4);

 if (VAR_3->split_role != VAR_2) {
  VAR_4.hdisplay >>= 1;
  VAR_4.htotal >>= 1;
  VAR_4.hsync_start >>= 1;
  VAR_4.hsync_end >>= 1;

  FUNC_0(VAR_3,
   "split_role %d, halve horizontal %d %d %d %d\n",
   VAR_3->split_role,
   VAR_4.hdisplay, VAR_4.htotal,
   VAR_4.hsync_start, VAR_4.hsync_end);
 }

 FUNC_5(VAR_3, &VAR_4, &VAR_5);

 VAR_6 = FUNC_3(VAR_7);
 FUNC_0(VAR_3, "fmt_fourcc 0x%X\n", VAR_7);

 VAR_9.intf = VAR_3->hw_intf->idx;
 VAR_9.intf_mode_sel = VAR_0;
 VAR_9.stream_sel = 0;
 VAR_9.mode_3d = FUNC_2(VAR_3);

 FUNC_7(VAR_3->enc_spinlock, VAR_8);
 VAR_3->hw_intf->ops.setup_timing_gen(VAR_3->hw_intf,
   &VAR_5, VAR_6);
 VAR_3->hw_ctl->ops.setup_intf_cfg(VAR_3->hw_ctl, &VAR_9);
 FUNC_8(VAR_3->enc_spinlock, VAR_8);

 FUNC_6(VAR_3, &VAR_5);
}
