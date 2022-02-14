
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {TYPE_1__* ev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int poll_msecs; } ;


 struct gendisk* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct gendisk *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3->ev)
  return FUNC_1(VAR_2, "-1\n");

 return FUNC_1(VAR_2, "%ld\n", VAR_3->ev->poll_msecs);
}
