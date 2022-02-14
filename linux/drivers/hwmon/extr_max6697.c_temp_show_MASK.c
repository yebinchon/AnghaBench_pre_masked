
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max6697_data {int** temp; scalar_t__ temp_offset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int nr; int index; } ;


 scalar_t__ FUNC_0 (struct max6697_data*) ;
 int FUNC_1 (struct max6697_data*) ;
 struct max6697_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 int VAR_3 = FUNC_4(VAR_1)->nr;
 int VAR_4 = FUNC_4(VAR_1)->index;
 struct max6697_data *VAR_5 = FUNC_2(VAR_0);
 int VAR_6;

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = VAR_5->temp[VAR_3][VAR_4];
 VAR_6 -= VAR_5->temp_offset;

 return FUNC_3(VAR_2, "%d\n", VAR_6 * 1000);
}
