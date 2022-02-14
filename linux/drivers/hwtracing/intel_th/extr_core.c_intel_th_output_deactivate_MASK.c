
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int owner; } ;
struct intel_th_driver {TYPE_1__ driver; int (* deactivate ) (struct intel_th_device*) ;} ;
struct TYPE_4__ {int driver; } ;
struct intel_th_device {TYPE_2__ dev; } ;
struct intel_th {int (* deactivate ) (struct intel_th*) ;} ;


 int FUNC_0 (struct intel_th_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct intel_th_device*) ;
 int FUNC_4 (struct intel_th*) ;
 struct intel_th* FUNC_5 (struct intel_th_device*) ;
 struct intel_th_driver* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_th_device *VAR_0)
{
 struct intel_th_driver *VAR_1 =
  FUNC_6(VAR_0->dev.driver);
 struct intel_th *VAR_2 = FUNC_5(VAR_0);

 if (!VAR_1)
  return;

 if (VAR_1->deactivate)
  VAR_1->deactivate(VAR_0);
 else
  FUNC_0(VAR_0);

 if (VAR_2->deactivate)
  VAR_2->deactivate(VAR_2);

 FUNC_2(&VAR_0->dev);
 FUNC_1(VAR_1->driver.owner);
}
