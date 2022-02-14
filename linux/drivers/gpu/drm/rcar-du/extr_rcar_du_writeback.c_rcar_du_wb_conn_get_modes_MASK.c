
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_height; int max_width; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_connector*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 return FUNC_0(VAR_0, VAR_1->mode_config.max_width,
        VAR_1->mode_config.max_height);
}
