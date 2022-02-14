
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_th_driver {int (* probe ) (struct intel_th_device*) ;int (* assign ) (struct intel_th_device*,struct intel_th_device*) ;int (* remove ) (struct intel_th_device*) ;scalar_t__ attr_group; } ;
struct TYPE_2__ {int kobj; int driver; } ;
struct intel_th_device {scalar_t__ type; TYPE_1__ dev; } ;
struct device {struct device* parent; int driver; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct intel_th_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct intel_th_device*) ;
 int FUNC_6 (struct intel_th_device*,struct intel_th_device*) ;
 int FUNC_7 (struct intel_th_device*) ;
 int FUNC_8 (int *,scalar_t__) ;
 struct intel_th_device* FUNC_9 (struct device*) ;
 struct intel_th_driver* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_3)
{
 struct intel_th_driver *VAR_4 = FUNC_10(VAR_3->driver);
 struct intel_th_device *VAR_5 = FUNC_9(VAR_3);
 struct intel_th_driver *VAR_6;
 struct intel_th_device *VAR_7 = ((void*)0);
 int VAR_8;

 if (VAR_5->type == VAR_2)
  VAR_7 = VAR_5;
 else if (VAR_3->parent)
  VAR_7 = FUNC_9(VAR_3->parent);

 if (!VAR_7 || !VAR_7->dev.driver)
  return -VAR_0;

 VAR_6 = FUNC_10(VAR_7->dev.driver);

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 VAR_8 = VAR_4->probe(FUNC_9(VAR_3));
 if (VAR_8)
  goto out_pm;

 if (VAR_4->attr_group) {
  VAR_8 = FUNC_8(&VAR_5->dev.kobj, VAR_4->attr_group);
  if (VAR_8)
   goto out;
 }

 if (VAR_5->type == VAR_1 &&
     !FUNC_0(VAR_5))

  VAR_8 = VAR_6->assign(VAR_7, VAR_5);

out:
 if (VAR_8)
  VAR_4->remove(VAR_5);

out_pm:
 if (VAR_8)
  FUNC_1(VAR_3);

 return VAR_8;
}
