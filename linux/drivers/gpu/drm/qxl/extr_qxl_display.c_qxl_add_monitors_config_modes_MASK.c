
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_output {int index; } ;
struct qxl_head {int height; int width; } ;
struct qxl_device {TYPE_1__* client_monitors_config; int monitors_config; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_2__ {int count; struct qxl_head* heads; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 struct qxl_output* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,int ,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct qxl_device *VAR_3 = VAR_2->dev_private;
 struct qxl_output *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = VAR_4->index;
 struct qxl_head *VAR_6;

 if (!VAR_3->monitors_config)
  return 0;
 if (VAR_5 >= VAR_0)
  return 0;
 if (!VAR_3->client_monitors_config)
  return 0;
 if (VAR_5 >= VAR_3->client_monitors_config->count)
  return 0;

 VAR_6 = &VAR_3->client_monitors_config->heads[VAR_5];
 FUNC_0("head %d is %dx%d\n", VAR_5, VAR_6->width, VAR_6->height);

 return FUNC_2(VAR_1, VAR_6->width, VAR_6->height, 1);
}
