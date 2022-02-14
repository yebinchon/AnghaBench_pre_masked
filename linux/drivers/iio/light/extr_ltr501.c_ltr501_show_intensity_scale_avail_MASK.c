
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltr501_data {struct ltr501_chip_info* chip_info; } ;
struct ltr501_chip_info {int als_gain_tbl_size; TYPE_1__* als_gain; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ scale; int uscale; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct ltr501_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,scalar_t__,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct ltr501_data *VAR_5 = FUNC_1(FUNC_0(VAR_2));
 struct ltr501_chip_info *VAR_6 = VAR_5->chip_info;
 ssize_t VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->als_gain_tbl_size; VAR_8++) {
  if (VAR_6->als_gain[VAR_8].scale == VAR_0)
   continue;
  VAR_7 += FUNC_2(VAR_4 + VAR_7, VAR_1 - VAR_7, "%d.%06d ",
     VAR_6->als_gain[VAR_8].scale,
     VAR_6->als_gain[VAR_8].uscale);
 }

 VAR_4[VAR_7 - 1] = '\n';

 return VAR_7;
}
