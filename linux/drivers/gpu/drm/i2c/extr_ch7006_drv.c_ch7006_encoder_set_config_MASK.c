
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct ch7006_encoder_params {int dummy; } ;
struct ch7006_priv {struct ch7006_encoder_params params; } ;


 struct ch7006_priv* FUNC_0 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_0,
          void *VAR_1)
{
 struct ch7006_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_2->params = *(struct ch7006_encoder_params *)VAR_1;
}
