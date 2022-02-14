
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct driver_data {int dd_flag; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct driver_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct driver_data *VAR_5 = FUNC_0(VAR_2)->private_data;
 int VAR_6 = 0;

 if (FUNC_2(VAR_0, &VAR_5->dd_flag))
  VAR_6 += FUNC_1(VAR_4, "%s", "thermal_shutdown\n");
 else if (FUNC_2(VAR_1, &VAR_5->dd_flag))
  VAR_6 += FUNC_1(VAR_4, "%s", "write_protect\n");
 else
  VAR_6 += FUNC_1(VAR_4, "%s", "online\n");

 return VAR_6;
}
