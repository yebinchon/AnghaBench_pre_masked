
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_driver {int (* probe ) (struct dio_dev*,struct dio_device_id const*) ;int id_table; } ;
struct dio_device_id {int dummy; } ;
struct dio_dev {struct dio_driver* driver; } ;
struct device {int driver; } ;


 struct dio_device_id* FUNC_0 (int ,struct dio_dev*) ;
 int FUNC_1 (struct dio_dev*,struct dio_device_id const*) ;
 struct dio_dev* FUNC_2 (struct device*) ;
 struct dio_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 int VAR_1 = 0;
 struct dio_driver *VAR_2 = FUNC_3(VAR_0->driver);
 struct dio_dev *VAR_3 = FUNC_2(VAR_0);

 if (!VAR_3->driver && VAR_2->probe) {
  const struct dio_device_id *VAR_4;

  VAR_4 = FUNC_0(VAR_2->id_table, VAR_3);
  if (VAR_4)
   VAR_1 = VAR_2->probe(VAR_3, VAR_4);
  if (VAR_1 >= 0) {
   VAR_3->driver = VAR_2;
   VAR_1 = 0;
  }
 }
 return VAR_1;
}
