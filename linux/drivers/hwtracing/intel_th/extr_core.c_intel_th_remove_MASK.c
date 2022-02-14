
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_th_driver {int (* unassign ) (struct intel_th_device*,struct intel_th_device*) ;int (* remove ) (struct intel_th_device*) ;scalar_t__ attr_group; } ;
struct TYPE_5__ {scalar_t__ driver; int kobj; } ;
struct intel_th_device {scalar_t__ type; TYPE_2__ dev; } ;
struct intel_th {int num_thdevs; TYPE_3__** thdev; } ;
struct device {TYPE_1__* parent; int driver; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {int driver; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,struct intel_th_device*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct intel_th_device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct intel_th_device*) ;
 int FUNC_8 (struct intel_th_device*,struct intel_th_device*) ;
 int FUNC_9 (int *,scalar_t__) ;
 struct intel_th* FUNC_10 (struct intel_th_device*) ;
 struct intel_th_device* FUNC_11 (struct device*) ;
 struct intel_th_driver* FUNC_12 (int ) ;
 struct intel_th_device* FUNC_13 (struct intel_th_device*) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_3)
{
 struct intel_th_driver *VAR_4 = FUNC_12(VAR_3->driver);
 struct intel_th_device *VAR_5 = FUNC_11(VAR_3);
 struct intel_th_device *VAR_6 = FUNC_13(VAR_5);
 int VAR_7;

 if (VAR_5->type == VAR_1) {
  struct intel_th *VAR_8 = FUNC_10(VAR_6);
  int VAR_9, VAR_10;


  VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_2);
  if (VAR_7)
   return VAR_7;






  for (VAR_9 = 0, VAR_10 = -1; VAR_9 < VAR_8->num_thdevs; VAR_9++) {





   if (VAR_8->thdev[VAR_9]->type != VAR_0) {
    if (VAR_10 >= 0) {
     VAR_8->thdev[VAR_10] = VAR_8->thdev[VAR_9];
     VAR_8->thdev[VAR_9] = ((void*)0);
     ++VAR_10;
    }

    continue;
   }

   if (VAR_10 == -1)
    VAR_10 = VAR_9;

   FUNC_1(VAR_8->thdev[VAR_9]);
   VAR_8->thdev[VAR_9] = ((void*)0);
  }

  if (VAR_10 >= 0)
   VAR_8->num_thdevs = VAR_10;
 }

 if (VAR_4->attr_group)
  FUNC_9(&VAR_5->dev.kobj, VAR_4->attr_group);

 FUNC_5(VAR_3);

 VAR_4->remove(VAR_5);

 if (FUNC_2(VAR_5)) {
  struct intel_th_driver *VAR_11 =
   FUNC_12(VAR_3->parent->driver);

  if (VAR_6->dev.driver)

   VAR_11->unassign(VAR_6, VAR_5);
 }

 FUNC_3(VAR_3);
 FUNC_6(VAR_3);
 FUNC_4(VAR_3);

 return 0;
}
