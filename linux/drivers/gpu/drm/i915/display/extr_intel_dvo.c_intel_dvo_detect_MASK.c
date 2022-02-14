
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dev_ops; } ;
struct intel_dvo {TYPE_3__ dev; } ;
struct TYPE_4__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_5__ {int (* detect ) (TYPE_3__*) ;} ;


 int FUNC_0 (char*,int ,int ) ;
 struct intel_dvo* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_3(struct drm_connector *VAR_0, bool VAR_1)
{
 struct intel_dvo *VAR_2 = FUNC_1(VAR_0);
 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_0->base.id, VAR_0->name);
 return VAR_2->dev.dev_ops->detect(&VAR_2->dev);
}
