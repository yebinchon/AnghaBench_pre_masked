
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union hdmi_infoframe {int avi; } ;
typedef int u8 ;
typedef int u32 ;
struct hdmi {TYPE_3__* pdev; int connector; TYPE_1__* encoder; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_2__* state; } ;
typedef int buffer ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_4__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,struct drm_display_mode const*) ;
 int FUNC_5 (union hdmi_infoframe*,int*,int) ;
 int FUNC_6 (struct hdmi*,int ) ;
 int FUNC_7 (struct hdmi*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct hdmi *VAR_7)
{
 struct drm_crtc *VAR_8 = VAR_7->encoder->crtc;
 const struct drm_display_mode *VAR_9 = &VAR_8->state->adjusted_mode;
 union hdmi_infoframe VAR_10;
 u8 VAR_11[FUNC_2(VAR_0)];
 u32 VAR_12;
 int VAR_13;

 FUNC_4(&VAR_10.avi,
       VAR_7->connector, VAR_9);

 VAR_13 = FUNC_5(&VAR_10, VAR_11, sizeof(VAR_11));
 if (VAR_13 < 0) {
  FUNC_0(&VAR_7->pdev->dev,
   "failed to configure avi infoframe\n");
  return;
 }







 FUNC_7(VAR_7, FUNC_3(0),
     VAR_11[3] |
     VAR_11[4] << 8 |
     VAR_11[5] << 16 |
     VAR_11[6] << 24);

 FUNC_7(VAR_7, FUNC_3(1),
     VAR_11[7] |
     VAR_11[8] << 8 |
     VAR_11[9] << 16 |
     VAR_11[10] << 24);

 FUNC_7(VAR_7, FUNC_3(2),
     VAR_11[11] |
     VAR_11[12] << 8 |
     VAR_11[13] << 16 |
     VAR_11[14] << 24);

 FUNC_7(VAR_7, FUNC_3(3),
     VAR_11[15] |
     VAR_11[16] << 8 |
     VAR_11[1] << 24);

 FUNC_7(VAR_7, VAR_5,
     VAR_3 |
     VAR_2);

 VAR_12 = FUNC_6(VAR_7, VAR_6);
 VAR_12 &= ~VAR_4;
 VAR_12 |= FUNC_1(VAR_1);
 FUNC_7(VAR_7, VAR_6, VAR_12);
}
