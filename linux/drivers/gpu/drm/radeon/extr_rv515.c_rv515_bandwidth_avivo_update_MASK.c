
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rv515_watermark {int lb_request_fifo_depth; } ;
struct TYPE_5__ {TYPE_3__** crtcs; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_2 (struct radeon_device*,struct rv515_watermark*,struct rv515_watermark*,struct drm_display_mode*,struct drm_display_mode*,int*,int*) ;
 int FUNC_3 (struct radeon_device*,TYPE_3__*,struct rv515_watermark*,int) ;

void FUNC_4(struct radeon_device *VAR_5)
{
 struct drm_display_mode *VAR_6 = ((void*)0);
 struct drm_display_mode *VAR_7 = ((void*)0);
 struct rv515_watermark VAR_8, VAR_9;
 struct rv515_watermark VAR_10, VAR_11;
 u32 VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15, VAR_16;

 if (VAR_5->mode_info.crtcs[0]->base.enabled)
  VAR_6 = &VAR_5->mode_info.crtcs[0]->base.mode;
 if (VAR_5->mode_info.crtcs[1]->base.enabled)
  VAR_7 = &VAR_5->mode_info.crtcs[1]->base.mode;
 FUNC_1(VAR_5, VAR_6, VAR_7);

 FUNC_3(VAR_5, VAR_5->mode_info.crtcs[0], &VAR_8, 0);
 FUNC_3(VAR_5, VAR_5->mode_info.crtcs[1], &VAR_10, 0);

 FUNC_3(VAR_5, VAR_5->mode_info.crtcs[0], &VAR_9, 0);
 FUNC_3(VAR_5, VAR_5->mode_info.crtcs[1], &VAR_11, 0);

 VAR_12 = VAR_8.lb_request_fifo_depth;
 VAR_12 |= VAR_10.lb_request_fifo_depth << 16;
 FUNC_0(VAR_4, VAR_12);

 FUNC_2(VAR_5,
        &VAR_8, &VAR_10,
        VAR_6, VAR_7,
        &VAR_13, &VAR_15);
 FUNC_2(VAR_5,
        &VAR_9, &VAR_11,
        VAR_6, VAR_7,
        &VAR_14, &VAR_16);

 FUNC_0(VAR_0, VAR_13);
 FUNC_0(VAR_1, VAR_14);
 FUNC_0(VAR_2, VAR_15);
 FUNC_0(VAR_3, VAR_16);
}
