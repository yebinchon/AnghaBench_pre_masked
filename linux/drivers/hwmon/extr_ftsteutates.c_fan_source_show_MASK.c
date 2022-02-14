
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fts_data {int* fan_source; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct fts_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fts_data*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct fts_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_3(VAR_1)->index;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_2(VAR_2, "%u\n", VAR_3->fan_source[VAR_4]);
}
