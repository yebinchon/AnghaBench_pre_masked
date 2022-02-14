
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_driver {int id_table; } ;
struct greybus_bundle_id {int dummy; } ;
struct gb_bundle {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct greybus_bundle_id* FUNC_0 (struct gb_bundle*,int ) ;
 int FUNC_1 (struct device*) ;
 struct gb_bundle* FUNC_2 (struct device*) ;
 struct greybus_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct greybus_driver *VAR_2 = FUNC_3(VAR_1);
 struct gb_bundle *VAR_3;
 const struct greybus_bundle_id *VAR_4;

 if (!FUNC_1(VAR_0))
  return 0;

 VAR_3 = FUNC_2(VAR_0);

 VAR_4 = FUNC_0(VAR_3, VAR_2->id_table);
 if (VAR_4)
  return 1;

 return 0;
}
