
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_output {size_t index; } ;
struct qxl_device {TYPE_1__* client_monitors_config; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {size_t count; int * heads; } ;


 int FUNC_0 (char*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qxl_output* FUNC_1 (struct drm_connector*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static enum drm_connector_status FUNC_3(
   struct drm_connector *VAR_2,
   bool VAR_3)
{
 struct qxl_output *VAR_4 =
  FUNC_1(VAR_2);
 struct drm_device *VAR_5 = VAR_2->dev;
 struct qxl_device *VAR_6 = VAR_5->dev_private;
 bool VAR_7 = 0;


 if (!VAR_6->client_monitors_config) {
  if (VAR_4->index == 0)
   VAR_7 = 1;
 } else
  VAR_7 = VAR_6->client_monitors_config->count > VAR_4->index &&
       FUNC_2(&VAR_6->client_monitors_config->heads[VAR_4->index]);

 FUNC_0("#%d connected: %d\n", VAR_4->index, VAR_7);

 return VAR_7 ? VAR_0
    : VAR_1;
}
