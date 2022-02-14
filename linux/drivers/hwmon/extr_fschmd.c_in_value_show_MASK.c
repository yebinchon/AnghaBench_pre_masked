
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fschmd_data {scalar_t__ kind; int* volt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct fschmd_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*,int const) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
        struct device_attribute *VAR_6, char *VAR_7)
{
 const int VAR_8[3] = { 14200, 6600, 3300 };
 int VAR_9 = FUNC_2(VAR_6)->index;
 struct fschmd_data *VAR_10 = FUNC_0(VAR_5);

 if (VAR_10->kind == VAR_3 || VAR_10->kind >= VAR_4)
  return FUNC_1(VAR_7, "%d\n", (VAR_10->volt[VAR_9] * VAR_2 *
   VAR_0[VAR_9]) / 255 + VAR_1[VAR_9]);
 else
  return FUNC_1(VAR_7, "%d\n", (VAR_10->volt[VAR_9] *
   VAR_8[VAR_9] + 128) / 255);
}
