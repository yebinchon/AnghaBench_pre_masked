
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil164_priv {int config; scalar_t__ duallink_slave; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct drm_encoder*,int ) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 struct sil164_priv* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_4(struct drm_encoder *VAR_1,
   struct drm_display_mode *VAR_2,
   struct drm_display_mode *VAR_3)
{
 struct sil164_priv *VAR_4 = FUNC_3(VAR_1);
 bool VAR_5 = VAR_3->clock > 165000;

 FUNC_2(FUNC_0(VAR_1),
     &VAR_4->config, VAR_5);

 if (VAR_4->duallink_slave)
  FUNC_2(VAR_4->duallink_slave,
      &VAR_4->config, VAR_5);

 FUNC_1(VAR_1, VAR_0);
}
