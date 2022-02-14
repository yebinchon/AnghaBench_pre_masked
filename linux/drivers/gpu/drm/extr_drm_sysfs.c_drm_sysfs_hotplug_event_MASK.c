
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {TYPE_2__* primary; } ;
struct TYPE_4__ {TYPE_1__* kdev; } ;
struct TYPE_3__ {int kobj; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char**) ;

void FUNC_2(struct drm_device *VAR_1)
{
 char *VAR_2 = "HOTPLUG=1";
 char *VAR_3[] = { VAR_2, ((void*)0) };

 FUNC_0("generating hotplug event\n");

 FUNC_1(&VAR_1->primary->kdev->kobj, VAR_0, VAR_3);
}
