
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_connector {TYPE_2__* dev; } ;
struct TYPE_3__ {int max_height; int max_width; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_connector*,int ,int ) ;
 int FUNC_1 (struct drm_connector*,int,int) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0,
         VAR_0->dev->mode_config.max_width,
         VAR_0->dev->mode_config.max_height);
 FUNC_1(VAR_0, 1024, 768);
 return VAR_1;
}
