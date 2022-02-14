
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module {int dummy; } ;
struct mcb_driver {int (* probe ) (struct mcb_device*,struct mcb_device_id const*) ;int id_table; } ;
struct mcb_device_id {int dummy; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct mcb_device {TYPE_3__ dev; } ;
struct device {int driver; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {struct module* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct mcb_device_id* FUNC_1 (int ,struct mcb_device*) ;
 int FUNC_2 (struct module*) ;
 int FUNC_3 (struct mcb_device*,struct mcb_device_id const*) ;
 struct mcb_device* FUNC_4 (struct device*) ;
 struct mcb_driver* FUNC_5 (int ) ;
 int FUNC_6 (struct module*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct mcb_driver *VAR_3 = FUNC_5(VAR_2->driver);
 struct mcb_device *VAR_4 = FUNC_4(VAR_2);
 const struct mcb_device_id *VAR_5;
 struct module *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3->id_table, VAR_4);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = VAR_4->dev.parent->driver->owner;
 if (!FUNC_6(VAR_6))
  return -VAR_0;

 FUNC_0(VAR_2);
 VAR_7 = VAR_3->probe(VAR_4, VAR_5);
 if (VAR_7)
  FUNC_2(VAR_6);

 return VAR_7;
}
