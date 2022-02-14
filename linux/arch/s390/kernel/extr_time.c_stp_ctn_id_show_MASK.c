
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ ctnid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned long long) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_3,
    struct device_attribute *VAR_4,
    char *VAR_5)
{
 if (!VAR_2)
  return -VAR_0;
 return FUNC_0(VAR_5, "%016llx\n",
         *(unsigned long long *) VAR_1.ctnid);
}
