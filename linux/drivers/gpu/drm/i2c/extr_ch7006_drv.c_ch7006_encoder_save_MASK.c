
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct ch7006_priv {int saved_state; } ;


 int FUNC_0 (struct i2c_client*,char*) ;
 int FUNC_1 (struct i2c_client*,int *) ;
 struct i2c_client* FUNC_2 (struct drm_encoder*) ;
 struct ch7006_priv* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_2(VAR_0);
 struct ch7006_priv *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_1, "\n");

 FUNC_1(VAR_1, &VAR_2->saved_state);
}
