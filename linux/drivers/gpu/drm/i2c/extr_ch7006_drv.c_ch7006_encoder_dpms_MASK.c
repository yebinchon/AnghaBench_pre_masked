
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct ch7006_state {int dummy; } ;
struct ch7006_priv {int last_dpms; struct ch7006_state state; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,char*) ;
 int FUNC_1 (struct i2c_client*,struct ch7006_state*,int ) ;
 int FUNC_2 (struct drm_encoder*) ;
 struct i2c_client* FUNC_3 (struct drm_encoder*) ;
 struct ch7006_priv* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(VAR_1);
 struct ch7006_priv *VAR_4 = FUNC_4(VAR_1);
 struct ch7006_state *VAR_5 = &VAR_4->state;

 FUNC_0(VAR_3, "\n");

 if (VAR_2 == VAR_4->last_dpms)
  return;
 VAR_4->last_dpms = VAR_2;

 FUNC_2(VAR_1);

 FUNC_1(VAR_3, VAR_5, VAR_0);
}
