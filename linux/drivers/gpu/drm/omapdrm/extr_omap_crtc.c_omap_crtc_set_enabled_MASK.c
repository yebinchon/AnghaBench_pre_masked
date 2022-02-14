
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct omap_irq_wait {int dummy; } ;
struct omap_drm_private {int dispc; TYPE_3__* dispc_ops; } ;
struct omap_crtc_state {scalar_t__ manually_updated; } ;
struct omap_crtc {int channel; int enabled; int ignore_digit_sync_lost; int name; TYPE_2__* pipe; } ;
struct drm_device {int dev; struct omap_drm_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; int state; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_6__ {int (* mgr_enable ) (int ,int,int) ;scalar_t__ (* mgr_get_vsync_irq ) (int ,int) ;scalar_t__ (* mgr_get_framedone_irq ) (int ,int) ;} ;
struct TYPE_5__ {TYPE_1__* output; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_crtc*,int) ;
 int FUNC_5 (struct drm_device*,struct omap_irq_wait*,int ) ;
 struct omap_irq_wait* FUNC_6 (struct drm_device*,scalar_t__,int) ;
 int FUNC_7 (int ,int,int) ;
 scalar_t__ FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,int) ;
 struct omap_crtc* FUNC_11 (struct drm_crtc*) ;
 struct omap_crtc_state* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct drm_crtc *VAR_2, bool VAR_3)
{
 struct omap_crtc_state *VAR_4 = FUNC_12(VAR_2->state);
 struct drm_device *VAR_5 = VAR_2->dev;
 struct omap_drm_private *VAR_6 = VAR_5->dev_private;
 struct omap_crtc *VAR_7 = FUNC_11(VAR_2);
 enum omap_channel VAR_8 = VAR_7->channel;
 struct omap_irq_wait *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_7->enabled == VAR_3))
  return;

 if (VAR_4->manually_updated) {
  FUNC_4(VAR_2, VAR_3);
  VAR_7->enabled = VAR_3;
  return;
 }

 if (VAR_7->pipe->output->type == VAR_0) {
  VAR_6->dispc_ops->mgr_enable(VAR_6->dispc, VAR_8, VAR_3);
  VAR_7->enabled = VAR_3;
  return;
 }

 if (VAR_7->channel == VAR_1) {




  VAR_7->ignore_digit_sync_lost = 1;
 }

 VAR_10 = VAR_6->dispc_ops->mgr_get_framedone_irq(VAR_6->dispc,
              VAR_8);
 VAR_11 = VAR_6->dispc_ops->mgr_get_vsync_irq(VAR_6->dispc, VAR_8);

 if (VAR_3) {
  VAR_9 = FUNC_6(VAR_5, VAR_11, 1);
 } else {
  if (VAR_10)
   VAR_9 = FUNC_6(VAR_5, VAR_10, 1);
  else
   VAR_9 = FUNC_6(VAR_5, VAR_11, 2);
 }

 VAR_6->dispc_ops->mgr_enable(VAR_6->dispc, VAR_8, VAR_3);
 VAR_7->enabled = VAR_3;

 VAR_12 = FUNC_5(VAR_5, VAR_9, FUNC_3(100));
 if (VAR_12) {
  FUNC_1(VAR_5->dev, "%s: timeout waiting for %s\n",
    VAR_7->name, VAR_3 ? "enable" : "disable");
 }

 if (VAR_7->channel == VAR_1) {
  VAR_7->ignore_digit_sync_lost = 0;

  FUNC_2();
 }
}
