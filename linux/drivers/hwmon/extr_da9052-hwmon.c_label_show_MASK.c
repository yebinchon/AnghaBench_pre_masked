
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {size_t index; } ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 TYPE_1__* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, "%s\n",
         VAR_0[FUNC_1(VAR_2)->index]);
}
