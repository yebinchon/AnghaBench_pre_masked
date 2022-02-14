
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3066_hdmi {int dev; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rk3066_hdmi*,int ,int ,int ) ;
 int FUNC_2 (struct rk3066_hdmi*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rk3066_hdmi*) ;
 int FUNC_4 (struct rk3066_hdmi*,int ) ;
 struct rk3066_hdmi* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_6)
{
 struct rk3066_hdmi *VAR_7 = FUNC_5(VAR_6);

 FUNC_0(VAR_7->dev, "hdmi encoder disable\n");

 if (FUNC_3(VAR_7) == VAR_3) {
  FUNC_2(VAR_7, VAR_5,
       VAR_4);
  FUNC_1(VAR_7, VAR_5,
     VAR_1,
     VAR_0);
  FUNC_6(500, 510);
 }
 FUNC_4(VAR_7, VAR_2);
}
