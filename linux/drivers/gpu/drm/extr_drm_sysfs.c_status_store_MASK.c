
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mutex; int max_height; int max_width; } ;
struct drm_device {TYPE_3__ mode_config; } ;
struct TYPE_4__ {int id; } ;
struct drm_connector {int force; TYPE_2__* funcs; int name; TYPE_1__ base; struct drm_device* dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum drm_connector_force { ____Placeholder_drm_connector_force } drm_connector_force ;
struct TYPE_5__ {int (* fill_modes ) (struct drm_connector*,int ,int ) ;} ;


 int FUNC_0 (char*,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_connector*,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 struct drm_connector* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct drm_connector *VAR_8 = FUNC_5(VAR_4);
 struct drm_device *VAR_9 = VAR_8->dev;
 enum drm_connector_force VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(&VAR_9->mode_config.mutex);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_8->force;

 if (FUNC_4(VAR_6, "detect"))
  VAR_8->force = 0;
 else if (FUNC_4(VAR_6, "on"))
  VAR_8->force = VAR_1;
 else if (FUNC_4(VAR_6, "on-digital"))
  VAR_8->force = VAR_2;
 else if (FUNC_4(VAR_6, "off"))
  VAR_8->force = VAR_0;
 else
  VAR_11 = -VAR_3;

 if (VAR_10 != VAR_8->force || !VAR_8->force) {
  FUNC_0("[CONNECTOR:%d:%s] force updated from %d to %d or reprobing\n",
         VAR_8->base.id,
         VAR_8->name,
         VAR_10, VAR_8->force);

  VAR_8->funcs->fill_modes(VAR_8,
          VAR_9->mode_config.max_width,
          VAR_9->mode_config.max_height);
 }

 FUNC_2(&VAR_9->mode_config.mutex);

 return VAR_11 ? VAR_11 : VAR_7;
}
