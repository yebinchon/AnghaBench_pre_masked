
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {TYPE_1__* ev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {long poll_msecs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gendisk*,int) ;
 struct gendisk* FUNC_1 (struct device*) ;
 int FUNC_2 (struct gendisk*) ;
 int FUNC_3 (char const*,char*,long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct gendisk *VAR_6 = FUNC_1(VAR_2);
 long VAR_7;

 if (!VAR_5 || !FUNC_3(VAR_4, "%ld", &VAR_7))
  return -VAR_0;

 if (VAR_7 < 0 && VAR_7 != -1)
  return -VAR_0;

 if (!VAR_6->ev)
  return -VAR_1;

 FUNC_2(VAR_6);
 VAR_6->ev->poll_msecs = VAR_7;
 FUNC_0(VAR_6, 1);

 return VAR_5;
}
