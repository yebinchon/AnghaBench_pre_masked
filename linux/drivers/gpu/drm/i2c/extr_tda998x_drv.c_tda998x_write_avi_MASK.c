
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int quantization_range; } ;
union hdmi_infoframe {TYPE_1__ avi; } ;
struct tda998x_priv {int rgb_quant_range; int connector; } ;
struct drm_display_mode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,struct drm_display_mode const*) ;
 int FUNC_1 (TYPE_1__*,int *,struct drm_display_mode const*,int ) ;
 int FUNC_2 (struct tda998x_priv*,int ,int ,union hdmi_infoframe*) ;

__attribute__((used)) static void
FUNC_3(struct tda998x_priv *VAR_3, const struct drm_display_mode *VAR_4)
{
 union hdmi_infoframe VAR_5;

 FUNC_0(&VAR_5.avi,
       &VAR_3->connector, VAR_4);
 VAR_5.avi.quantization_range = VAR_1;
 FUNC_1(&VAR_5.avi, &VAR_3->connector, VAR_4,
        VAR_3->rgb_quant_range);

 FUNC_2(VAR_3, VAR_0, VAR_2, &VAR_5);
}
