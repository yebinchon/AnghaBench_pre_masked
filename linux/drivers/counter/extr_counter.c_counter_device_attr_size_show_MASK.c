
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_size_unit {int size; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct counter_size_unit* component; } ;


 int FUNC_0 (char*,char*,int ) ;
 TYPE_1__* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 const struct counter_size_unit *const VAR_3 = FUNC_1(VAR_1)->component;

 return FUNC_0(VAR_2, "%zu\n", VAR_3->size);
}
