
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_2__ kobj; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;
struct intel_sdvo {TYPE_4__ ddc; } ;
struct drm_connector {TYPE_1__* kdev; } ;
struct TYPE_5__ {int kobj; } ;


 struct intel_sdvo* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_0)
{
 struct intel_sdvo *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->kdev->kobj,
     VAR_1->ddc.dev.kobj.name);
 FUNC_1(VAR_0);
}
