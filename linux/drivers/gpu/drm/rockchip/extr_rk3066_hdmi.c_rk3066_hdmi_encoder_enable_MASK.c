
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk3066_hdmi {int previous_mode; TYPE_1__* dev; int grf_regmap; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct drm_encoder*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct rk3066_hdmi*,int *) ;
 struct rk3066_hdmi* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_2)
{
 struct rk3066_hdmi *VAR_3 = FUNC_4(VAR_2);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3->dev->of_node, VAR_2);
 if (VAR_4)
  VAR_5 = (VAR_1 << 16) | VAR_1;
 else
  VAR_5 = VAR_1 << 16;

 FUNC_2(VAR_3->grf_regmap, VAR_0, VAR_5);

 FUNC_0(VAR_3->dev, "hdmi encoder enable select: vop%s\n",
        (VAR_4) ? "1" : "0");

 FUNC_3(VAR_3, &VAR_3->previous_mode);
}
