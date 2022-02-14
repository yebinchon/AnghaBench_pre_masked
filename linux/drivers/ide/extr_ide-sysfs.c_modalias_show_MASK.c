
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int ide_drive_t ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;
 int * FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 ide_drive_t *VAR_3 = FUNC_2(VAR_0);
 return FUNC_1(VAR_2, "ide:m-%s\n", FUNC_0(VAR_3));
}
