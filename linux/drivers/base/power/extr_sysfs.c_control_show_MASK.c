
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct TYPE_2__ {scalar_t__ runtime_auto; } ;
struct device {TYPE_1__ power; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_2, struct device_attribute *VAR_3,
       char *VAR_4)
{
 return FUNC_0(VAR_4, "%s\n",
    VAR_2->power.runtime_auto ? VAR_0 : VAR_1);
}
