
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_th_driver {int (* disable ) (struct intel_th_device*,int *) ;} ;
struct TYPE_2__ {int driver; int parent; } ;
struct intel_th_device {scalar_t__ type; TYPE_1__ dev; int output; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct intel_th_device*,int *) ;
 struct intel_th_device* FUNC_3 (int ) ;
 struct intel_th_driver* FUNC_4 (int ) ;

int FUNC_5(struct intel_th_device *VAR_3)
{
 struct intel_th_device *VAR_4 = FUNC_3(VAR_3->dev.parent);
 struct intel_th_driver *VAR_5 = FUNC_4(VAR_4->dev.driver);

 FUNC_0(VAR_4->type != VAR_2);
 if (FUNC_0(VAR_3->type != VAR_1))
  return -VAR_0;

 VAR_5->disable(VAR_4, &VAR_3->output);
 FUNC_1(&VAR_3->dev);

 return 0;
}
