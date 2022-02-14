
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_device {TYPE_1__* primary; } ;
struct drm_connector {TYPE_3__* ddc; TYPE_4__* kdev; int name; struct drm_device* dev; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_9__ {TYPE_2__ dev; } ;
struct TYPE_7__ {int index; int kdev; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_4 (int ,int ,int ,struct drm_connector*,int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *,int *,char*) ;

int FUNC_7(struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;

 if (VAR_2->kdev)
  return 0;

 VAR_2->kdev =
  FUNC_4(VAR_1, VAR_3->primary->kdev, 0,
       VAR_2, VAR_0,
       "card%d-%s", VAR_3->primary->index,
       VAR_2->name);
 FUNC_0("adding \"%s\" to sysfs\n",
    VAR_2->name);

 if (FUNC_2(VAR_2->kdev)) {
  FUNC_1("failed to register connector device: %ld\n", FUNC_3(VAR_2->kdev));
  return FUNC_3(VAR_2->kdev);
 }


 FUNC_5(VAR_3);

 if (VAR_2->ddc)
  return FUNC_6(&VAR_2->kdev->kobj,
     &VAR_2->ddc->dev.kobj, "ddc");
 return 0;
}
