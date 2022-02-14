
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct drm_connector {int polled; } ;
struct drm_bridge {int encoder; int dev; } ;
struct TYPE_2__ {struct i2c_client* stdp4028_i2c; struct drm_connector connector; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drm_connector*,int ) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (int ,struct drm_connector*,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_bridge *VAR_10)
{
 struct drm_connector *VAR_11 = &VAR_9->connector;
 struct i2c_client *VAR_12
   = VAR_9->stdp4028_i2c;
 int VAR_13;

 if (!VAR_10->encoder) {
  FUNC_0("Parent encoder object not found");
  return -VAR_2;
 }

 VAR_11->polled = VAR_0;

 FUNC_2(VAR_11,
     &VAR_8);

 VAR_13 = FUNC_3(VAR_10->dev, VAR_11,
     &VAR_7,
     VAR_1);
 if (VAR_13) {
  FUNC_0("Failed to initialize connector with drm\n");
  return VAR_13;
 }

 VAR_13 = FUNC_1(VAR_11, VAR_10->encoder);
 if (VAR_13)
  return VAR_13;


 FUNC_4(VAR_12,
      VAR_6,
      VAR_3);


 FUNC_4(VAR_12,
      VAR_5,
      VAR_4);

 return 0;
}
