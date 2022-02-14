
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* governor; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 TYPE_2__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 if (!FUNC_1(VAR_1)->governor)
  return -VAR_0;

 return FUNC_0(VAR_3, "%s\n", FUNC_1(VAR_1)->governor->name);
}
