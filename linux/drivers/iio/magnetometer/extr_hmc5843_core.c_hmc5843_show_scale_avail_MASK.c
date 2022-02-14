
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hmc5843_data {TYPE_1__* variant; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int n_regval_to_nanoscale; int * regval_to_nanoscale; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct hmc5843_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct hmc5843_data *VAR_4 = FUNC_1(FUNC_0(VAR_1));

 size_t VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->variant->n_regval_to_nanoscale; VAR_6++)
  VAR_5 += FUNC_2(VAR_3 + VAR_5, VAR_0 - VAR_5,
   "0.%09d ", VAR_4->variant->regval_to_nanoscale[VAR_6]);


 VAR_3[VAR_5 - 1] = '\n';

 return VAR_5;
}
