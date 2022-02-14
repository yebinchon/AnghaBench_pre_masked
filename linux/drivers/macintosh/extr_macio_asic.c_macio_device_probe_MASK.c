
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device_id {int dummy; } ;
struct TYPE_2__ {int of_match_table; } ;
struct macio_driver {int (* probe ) (struct macio_dev*,struct of_device_id const*) ;TYPE_1__ driver; } ;
struct macio_dev {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct macio_dev*) ;
 int FUNC_1 (struct macio_dev*) ;
 struct of_device_id* FUNC_2 (int ,struct device*) ;
 int FUNC_3 (struct macio_dev*,struct of_device_id const*) ;
 struct macio_dev* FUNC_4 (struct device*) ;
 struct macio_driver* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1)
{
 int VAR_2 = -VAR_0;
 struct macio_driver *VAR_3;
 struct macio_dev *VAR_4;
 const struct of_device_id *VAR_5;

 VAR_3 = FUNC_5(VAR_1->driver);
 VAR_4 = FUNC_4(VAR_1);

 if (!VAR_3->probe)
  return VAR_2;

 FUNC_0(VAR_4);

 VAR_5 = FUNC_2(VAR_3->driver.of_match_table, VAR_1);
 if (VAR_5)
  VAR_2 = VAR_3->probe(VAR_4, VAR_5);
 if (VAR_2)
  FUNC_1(VAR_4);

 return VAR_2;
}
