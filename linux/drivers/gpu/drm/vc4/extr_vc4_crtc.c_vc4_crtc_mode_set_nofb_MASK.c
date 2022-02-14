
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct vc4_crtc_state {scalar_t__ feed_txp; } ;
struct vc4_crtc {int channel; int regset; TYPE_1__* pdev; } ;
struct drm_printer {int dummy; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {TYPE_2__* state; struct drm_device* dev; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (struct drm_crtc*) ;
 struct drm_printer FUNC_6 (int *) ;
 int FUNC_7 (struct drm_printer*,int *) ;
 struct vc4_crtc* FUNC_8 (struct drm_crtc*) ;
 struct vc4_crtc_state* FUNC_9 (TYPE_2__*) ;
 struct vc4_dev* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_crtc*) ;
 int FUNC_12 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_13(struct drm_crtc *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->dev;
 struct vc4_dev *VAR_9 = FUNC_10(VAR_8);
 struct vc4_crtc *VAR_10 = FUNC_8(VAR_7);
 struct vc4_crtc_state *VAR_11 = FUNC_9(VAR_7->state);
 struct drm_display_mode *VAR_12 = &VAR_7->state->adjusted_mode;
 bool VAR_13 = VAR_12->flags & VAR_0;
 bool VAR_14 = 0;

 if (VAR_14) {
  struct drm_printer VAR_15 = FUNC_6(&VAR_10->pdev->dev);
  FUNC_4(&VAR_10->pdev->dev, "CRTC %d regs before:\n",
    FUNC_5(VAR_7));
  FUNC_7(&VAR_15, &VAR_10->regset);
 }

 if (VAR_10->channel == 2) {
  u32 VAR_16;
  u32 VAR_17;
  if (VAR_11->feed_txp)
   VAR_17 = FUNC_3(3, VAR_5);
  else
   VAR_17 = FUNC_3(2, VAR_5);

  VAR_16 = FUNC_0(VAR_4) &
      ~VAR_6;
  FUNC_1(VAR_4, VAR_16 | VAR_17);
 }

 if (!VAR_11->feed_txp)
  FUNC_11(VAR_7);

 FUNC_1(FUNC_2(VAR_10->channel),
    VAR_1 |
    VAR_2 |
    (VAR_13 ? VAR_3 : 0));




 FUNC_12(VAR_7);

 if (VAR_14) {
  struct drm_printer VAR_18 = FUNC_6(&VAR_10->pdev->dev);
  FUNC_4(&VAR_10->pdev->dev, "CRTC %d regs after:\n",
    FUNC_5(VAR_7));
  FUNC_7(&VAR_18, &VAR_10->regset);
 }
}
