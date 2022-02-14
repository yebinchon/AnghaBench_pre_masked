
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpiod_data {scalar_t__ irq_flags; int mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ flags; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct gpiod_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct gpiod_data *VAR_4 = FUNC_1(VAR_1);
 ssize_t VAR_5 = 0;
 int VAR_6;

 FUNC_2(&VAR_4->mutex);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  if (VAR_4->irq_flags == VAR_0[VAR_6].flags) {
   VAR_5 = FUNC_4(VAR_3, "%s\n", VAR_0[VAR_6].name);
   break;
  }
 }

 FUNC_3(&VAR_4->mutex);

 return VAR_5;
}
