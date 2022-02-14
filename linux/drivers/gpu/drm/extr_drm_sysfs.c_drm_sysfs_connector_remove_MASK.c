
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {TYPE_1__* kdev; int name; scalar_t__ ddc; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(struct drm_connector *VAR_0)
{
 if (!VAR_0->kdev)
  return;

 if (VAR_0->ddc)
  FUNC_2(&VAR_0->kdev->kobj, "ddc");

 FUNC_0("removing \"%s\" from sysfs\n",
    VAR_0->name);

 FUNC_1(VAR_0->kdev);
 VAR_0->kdev = ((void*)0);
}
