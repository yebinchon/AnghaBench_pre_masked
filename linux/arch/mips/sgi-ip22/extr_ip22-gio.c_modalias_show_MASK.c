
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct gio_device {TYPE_1__ id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 struct gio_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct gio_device *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_0(VAR_3, VAR_0, "gio:%x\n", VAR_4->id.id);

 return (VAR_5 >= VAR_0) ? (VAR_0 - 1) : VAR_5;
}
