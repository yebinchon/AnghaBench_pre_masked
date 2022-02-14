
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int * id; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 TYPE_1__* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
     char *VAR_3)
{
 ide_drive_t *VAR_4 = FUNC_1(VAR_1);
 return FUNC_0(VAR_3, "%s\n", (char *)&VAR_4->id[VAR_0]);
}
