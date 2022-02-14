
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct device_driver {struct of_device_id* of_match_table; } ;
struct device {int dummy; } ;


 int * FUNC_0 (struct of_device_id const*,struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, struct device_driver *VAR_1)
{
 const struct of_device_id *VAR_2 = VAR_1->of_match_table;

 if (!VAR_2)
  return 0;

 return FUNC_0(VAR_2, VAR_0) != ((void*)0);
}
