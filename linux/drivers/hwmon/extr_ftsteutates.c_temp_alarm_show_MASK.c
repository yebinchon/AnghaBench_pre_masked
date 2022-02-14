
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fts_data {int temp_alarm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 struct fts_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fts_data*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct fts_data *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_4(VAR_1)->index;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_3(VAR_2, "%u\n", !!(VAR_3->temp_alarm & FUNC_0(VAR_4)));
}
