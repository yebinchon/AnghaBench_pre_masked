
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {scalar_t__ statistics; } ;
struct device {int kobj; } ;
struct attribute_container {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct transport_container* FUNC_1 (struct attribute_container*) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct attribute_container *VAR_0,
          struct device *VAR_1,
          struct device *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 struct transport_container *VAR_4 =
  FUNC_1(VAR_0);

 if (!VAR_3 && VAR_4->statistics)
  VAR_3 = FUNC_2(&VAR_2->kobj, VAR_4->statistics);

 return VAR_3;
}
