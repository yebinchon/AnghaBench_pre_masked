
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_client* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static enum drm_connector_status
FUNC_2(struct drm_encoder *VAR_4,
        struct drm_connector *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_6, VAR_0) & VAR_1)
  return VAR_2;
 else
  return VAR_3;
}
