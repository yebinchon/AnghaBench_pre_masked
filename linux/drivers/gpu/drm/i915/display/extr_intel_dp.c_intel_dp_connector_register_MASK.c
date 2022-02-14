
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dev; int name; } ;
struct intel_dp {TYPE_3__ aux; } ;
struct drm_device {int dev; } ;
struct drm_connector {int name; TYPE_2__* kdev; struct drm_device* dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ kobj; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (struct drm_connector*) ;
 struct intel_dp* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_6(struct drm_connector *VAR_0)
{
 struct intel_dp *VAR_1 = FUNC_4(VAR_0);
 struct drm_device *VAR_2 = VAR_0->dev;
 int VAR_3;

 VAR_3 = FUNC_5(VAR_0);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_0);

 FUNC_0("registering %s bus for %s\n",
        VAR_1->aux.name, VAR_0->kdev->kobj.name);

 VAR_1->aux.dev = VAR_0->kdev;
 VAR_3 = FUNC_1(&VAR_1->aux);
 if (!VAR_3)
  FUNC_2(&VAR_1->aux,
           VAR_0->name, VAR_2->dev);
 return VAR_3;
}
