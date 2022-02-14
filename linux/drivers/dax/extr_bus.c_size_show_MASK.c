
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dev_dax {TYPE_1__* region; } ;
typedef int ssize_t ;
struct TYPE_2__ {int res; } ;


 unsigned long long FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,unsigned long long) ;
 struct dev_dax* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct dev_dax *VAR_3 = FUNC_2(VAR_0);
 unsigned long long VAR_4 = FUNC_0(&VAR_3->region->res);

 return FUNC_1(VAR_2, "%llu\n", VAR_4);
}
