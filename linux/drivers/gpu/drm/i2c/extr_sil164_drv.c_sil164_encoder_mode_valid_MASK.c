
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil164_priv {int duallink_slave; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sil164_priv* FUNC_0 (struct drm_encoder*) ;

__attribute__((used)) static int
FUNC_1(struct drm_encoder *VAR_3,
     struct drm_display_mode *VAR_4)
{
 struct sil164_priv *VAR_5 = FUNC_0(VAR_3);

 if (VAR_4->clock < 32000)
  return VAR_1;

 if (VAR_4->clock > 330000 ||
     (VAR_4->clock > 165000 && !VAR_5->duallink_slave))
  return VAR_0;

 return VAR_2;
}
