
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct greybus_driver {int (* probe ) (struct gb_bundle*,struct greybus_bundle_id const*) ;int id_table; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_bundle {TYPE_1__* intf; int id; int connections; } ;
struct device {int driver; } ;
struct TYPE_2__ {struct device dev; int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct greybus_bundle_id* FUNC_3 (struct gb_bundle*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*,int ) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct gb_bundle*,struct greybus_bundle_id const*) ;
 struct gb_bundle* FUNC_17 (struct device*) ;
 struct greybus_driver* FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct device *VAR_2)
{
 struct greybus_driver *VAR_3 = FUNC_18(VAR_2->driver);
 struct gb_bundle *VAR_4 = FUNC_17(VAR_2);
 const struct greybus_bundle_id *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_3(VAR_4, VAR_3->id_table);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_9(&VAR_4->intf->dev);
 if (VAR_6 < 0) {
  FUNC_11(&VAR_4->intf->dev);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_4->intf->control, VAR_4->id);
 if (VAR_6) {
  FUNC_10(&VAR_4->intf->dev);
  return VAR_6;
 }
 FUNC_13(VAR_2, VAR_1);
 FUNC_15(VAR_2);
 FUNC_8(VAR_2);
 FUNC_12(VAR_2);
 FUNC_7(VAR_2);

 VAR_6 = VAR_3->probe(VAR_4, VAR_5);
 if (VAR_6) {



  FUNC_0(!FUNC_4(&VAR_4->connections));

  FUNC_2(VAR_4->intf->control, VAR_4->id);

  FUNC_5(VAR_2);
  FUNC_14(VAR_2);
  FUNC_11(VAR_2);
  FUNC_6(VAR_2);
  FUNC_10(&VAR_4->intf->dev);

  return VAR_6;
 }

 FUNC_10(&VAR_4->intf->dev);

 return 0;
}
