
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qxl_output {size_t index; } ;
struct qxl_head {int width; int height; } ;
struct qxl_device {TYPE_1__* client_monitors_config; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_2__ {struct qxl_head* heads; } ;


 scalar_t__ FUNC_0 (struct drm_connector*,int,int) ;
 struct qxl_output* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (struct drm_connector*) ;
 scalar_t__ FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct qxl_device *VAR_2 = VAR_1->dev_private;
 struct qxl_output *VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4 = 1024;
 unsigned int VAR_5 = 768;
 int VAR_6 = 0;

 if (VAR_2->client_monitors_config) {
  struct qxl_head *VAR_7;
  VAR_7 = &VAR_2->client_monitors_config->heads[VAR_3->index];
  if (VAR_7->width)
   VAR_4 = VAR_7->width;
  if (VAR_7->height)
   VAR_5 = VAR_7->height;
 }

 VAR_6 += FUNC_0(VAR_0, 8192, 8192);
 VAR_6 += FUNC_3(VAR_0);
 VAR_6 += FUNC_4(VAR_0);
 FUNC_2(VAR_0, VAR_4, VAR_5);
 return VAR_6;
}
