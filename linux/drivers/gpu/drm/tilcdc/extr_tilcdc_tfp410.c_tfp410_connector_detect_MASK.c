
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tfp410_connector {TYPE_1__* mod; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct tfp410_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status FUNC_2(
  struct drm_connector *VAR_2,
  bool VAR_3)
{
 struct tfp410_connector *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_4->mod->i2c))
  return VAR_0;

 return VAR_1;
}
