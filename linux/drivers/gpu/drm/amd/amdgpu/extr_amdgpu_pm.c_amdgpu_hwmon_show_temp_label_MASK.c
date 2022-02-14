
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* label; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
          struct device_attribute *VAR_5,
          char *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_5)->index;

 if (VAR_7 >= VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_6, VAR_1, "%s\n", VAR_3[VAR_7].label);
}
