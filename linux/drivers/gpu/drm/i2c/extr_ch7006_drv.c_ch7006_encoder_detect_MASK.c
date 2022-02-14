
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct drm_encoder {TYPE_2__* dev; } ;
struct drm_connector {int base; } ;
struct ch7006_state {int dummy; } ;
struct ch7006_priv {scalar_t__ subconnector; struct ch7006_state state; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_3__ {int tv_subconnector_property; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i2c_client*,char*) ;
 int FUNC_2 (struct i2c_client*,struct ch7006_state*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,struct ch7006_state*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 struct i2c_client* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 struct ch7006_priv* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static enum drm_connector_status FUNC_9(struct drm_encoder *VAR_17,
             struct drm_connector *VAR_18)
{
 struct i2c_client *VAR_19 = FUNC_6(VAR_17);
 struct ch7006_priv *VAR_20 = FUNC_8(VAR_17);
 struct ch7006_state *VAR_21 = &VAR_20->state;
 int VAR_22;

 FUNC_1(VAR_19, "\n");

 FUNC_4(VAR_19, VAR_21, VAR_2);
 FUNC_4(VAR_19, VAR_21, VAR_7);
 FUNC_4(VAR_19, VAR_21, VAR_0);

 FUNC_5(VAR_19, VAR_7, VAR_9 |
        FUNC_0(VAR_8, VAR_14));
 FUNC_5(VAR_19, VAR_0, VAR_1);

 FUNC_5(VAR_19, VAR_2, VAR_4);

 FUNC_5(VAR_19, VAR_2, 0);

 VAR_22 = FUNC_3(VAR_19, VAR_2);

 FUNC_2(VAR_19, VAR_21, VAR_0);
 FUNC_2(VAR_19, VAR_21, VAR_7);
 FUNC_2(VAR_19, VAR_21, VAR_2);

 if ((VAR_22 & (VAR_6|
      VAR_5|
      VAR_3)) == 0)
  VAR_20->subconnector = VAR_11;
 else if ((VAR_22 & (VAR_6|
    VAR_5)) == 0)
  VAR_20->subconnector = VAR_12;
 else if ((VAR_22 & VAR_3) == 0)
  VAR_20->subconnector = VAR_10;
 else
  VAR_20->subconnector = VAR_13;

 FUNC_7(&VAR_18->base,
   VAR_17->dev->mode_config.tv_subconnector_property,
       VAR_20->subconnector);

 return VAR_20->subconnector ? VAR_15 :
     VAR_16;
}
