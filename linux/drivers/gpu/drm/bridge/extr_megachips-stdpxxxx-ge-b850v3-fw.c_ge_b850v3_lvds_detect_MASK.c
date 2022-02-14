
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {struct i2c_client* stdp4028_i2c; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int ) ;

__attribute__((used)) static enum drm_connector_status FUNC_1(
  struct drm_connector *VAR_6, bool VAR_7)
{
 struct i2c_client *VAR_8 =
   VAR_5->stdp4028_i2c;
 s32 VAR_9;

 VAR_9 = FUNC_0(VAR_8,
           VAR_1);

 if (VAR_9 == VAR_0)
  return VAR_2;

 if (VAR_9 == 0)
  return VAR_3;

 return VAR_4;
}
