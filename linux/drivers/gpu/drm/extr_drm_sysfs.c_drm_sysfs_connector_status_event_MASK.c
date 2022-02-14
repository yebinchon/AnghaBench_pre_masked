
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct drm_property {TYPE_1__ base; } ;
struct drm_device {TYPE_3__* primary; } ;
struct TYPE_8__ {int id; } ;
struct drm_connector {TYPE_4__ base; struct drm_device* dev; } ;
struct TYPE_7__ {TYPE_2__* kdev; } ;
struct TYPE_6__ {int kobj; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int *,int ,char**) ;
 int FUNC_5 (char*,int ,char*,int) ;

void FUNC_6(struct drm_connector *VAR_1,
          struct drm_property *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 char VAR_4[] = "HOTPLUG=1", VAR_5[21], VAR_6[21];
 char *VAR_7[4] = { VAR_4, VAR_5, VAR_6, ((void*)0) };

 FUNC_2(!FUNC_3(&VAR_1->base,
        VAR_2->base.id));

 FUNC_5(VAR_5, FUNC_0(VAR_5),
   "CONNECTOR=%u", VAR_1->base.id);
 FUNC_5(VAR_6, FUNC_0(VAR_6),
   "PROPERTY=%u", VAR_2->base.id);

 FUNC_1("generating connector status event\n");

 FUNC_4(&VAR_3->primary->kdev->kobj, VAR_0, VAR_7);
}
