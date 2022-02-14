
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct drm_dp_mst_port {TYPE_3__ aux; } ;
struct drm_connector {TYPE_2__* kdev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ kobj; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(struct drm_connector *VAR_0,
        struct drm_dp_mst_port *VAR_1)
{
 FUNC_0("unregistering %s remote bus for %s\n",
        VAR_1->aux.name, VAR_0->kdev->kobj.name);
 FUNC_1(&VAR_1->aux);
}
