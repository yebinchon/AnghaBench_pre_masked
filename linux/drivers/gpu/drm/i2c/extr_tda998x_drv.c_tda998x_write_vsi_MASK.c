
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdmi; } ;
union hdmi_infoframe {TYPE_1__ vendor; } ;
struct tda998x_priv {int connector; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,struct drm_display_mode const*) ;
 int FUNC_1 (struct tda998x_priv*,int ,int ) ;
 int FUNC_2 (struct tda998x_priv*,int ,int ,union hdmi_infoframe*) ;

__attribute__((used)) static void FUNC_3(struct tda998x_priv *VAR_3,
         const struct drm_display_mode *VAR_4)
{
 union hdmi_infoframe VAR_5;

 if (FUNC_0(&VAR_5.vendor.hdmi,
       &VAR_3->connector,
       VAR_4))
  FUNC_1(VAR_3, VAR_1, VAR_0);
 else
  FUNC_2(VAR_3, VAR_0, VAR_2, &VAR_5);
}
