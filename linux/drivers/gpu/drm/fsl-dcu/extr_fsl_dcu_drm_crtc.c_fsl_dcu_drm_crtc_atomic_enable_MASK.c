
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dcu_drm_device {int regmap; int pix_clk; } ;
struct drm_device {struct fsl_dcu_drm_device* dev_private; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_5,
        struct drm_crtc_state *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct fsl_dcu_drm_device *VAR_8 = VAR_7->dev_private;

 FUNC_1(VAR_8->pix_clk);
 FUNC_3(VAR_8->regmap, VAR_0,
      VAR_1,
      FUNC_0(VAR_2));
 FUNC_4(VAR_8->regmap, VAR_3,
       VAR_4);

 FUNC_2(VAR_5);
}
