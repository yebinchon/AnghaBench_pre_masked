
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* c; } ;
struct TYPE_3__ {int scan_index; } ;


 int FUNC_0 (char*,char*,int) ;
 TYPE_2__* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 return FUNC_0(VAR_2, "%u\n", FUNC_1(VAR_1)->c->scan_index);
}
