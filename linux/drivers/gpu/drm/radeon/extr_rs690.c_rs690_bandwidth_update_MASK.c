
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rs690_watermark {int lb_request_fifo_depth; } ;
struct TYPE_5__ {TYPE_3__** crtcs; int mode_config_initialized; } ;
struct radeon_device {int disp_priority; scalar_t__ family; TYPE_2__ mode_info; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,struct rs690_watermark*,struct rs690_watermark*,struct drm_display_mode*,struct drm_display_mode*,int*,int*) ;
 int FUNC_7 (struct radeon_device*,TYPE_3__*,struct rs690_watermark*,int) ;
 int FUNC_8 (struct radeon_device*,struct drm_display_mode*,struct drm_display_mode*) ;

void FUNC_9(struct radeon_device *VAR_13)
{
 struct drm_display_mode *VAR_14 = ((void*)0);
 struct drm_display_mode *VAR_15 = ((void*)0);
 struct rs690_watermark VAR_16, VAR_17;
 struct rs690_watermark VAR_18, VAR_19;
 u32 VAR_20;
 u32 VAR_21, VAR_22;
 u32 VAR_23, VAR_24;

 if (!VAR_13->mode_info.mode_config_initialized)
  return;

 FUNC_5(VAR_13);

 if (VAR_13->mode_info.crtcs[0]->base.enabled)
  VAR_14 = &VAR_13->mode_info.crtcs[0]->base.mode;
 if (VAR_13->mode_info.crtcs[1]->base.enabled)
  VAR_15 = &VAR_13->mode_info.crtcs[1]->base.mode;





 if ((VAR_13->disp_priority == 2) &&
     ((VAR_13->family == VAR_0) || (VAR_13->family == VAR_1))) {
  VAR_20 = FUNC_0(VAR_6);
  VAR_20 &= VAR_4;
  VAR_20 &= VAR_5;
  if (VAR_14)
   VAR_20 |= FUNC_1(1);
  if (VAR_15)
   VAR_20 |= FUNC_2(1);
  FUNC_4(VAR_6, VAR_20);
 }
 FUNC_8(VAR_13, VAR_14, VAR_15);

 if ((VAR_13->family == VAR_0) || (VAR_13->family == VAR_1))
  FUNC_3(VAR_9, 0);
 if ((VAR_13->family == VAR_2) || (VAR_13->family == VAR_3))
  FUNC_3(VAR_9, 2);

 FUNC_7(VAR_13, VAR_13->mode_info.crtcs[0], &VAR_16, 0);
 FUNC_7(VAR_13, VAR_13->mode_info.crtcs[1], &VAR_18, 0);

 FUNC_7(VAR_13, VAR_13->mode_info.crtcs[0], &VAR_17, 1);
 FUNC_7(VAR_13, VAR_13->mode_info.crtcs[1], &VAR_19, 1);

 VAR_20 = (VAR_16.lb_request_fifo_depth - 1);
 VAR_20 |= (VAR_18.lb_request_fifo_depth - 1) << 16;
 FUNC_3(VAR_12, VAR_20);

 FUNC_6(VAR_13,
        &VAR_16, &VAR_18,
        VAR_14, VAR_15,
        &VAR_21, &VAR_23);
 FUNC_6(VAR_13,
        &VAR_17, &VAR_19,
        VAR_14, VAR_15,
        &VAR_22, &VAR_24);

 FUNC_3(VAR_7, VAR_21);
 FUNC_3(VAR_8, VAR_22);
 FUNC_3(VAR_10, VAR_23);
 FUNC_3(VAR_11, VAR_24);
}
