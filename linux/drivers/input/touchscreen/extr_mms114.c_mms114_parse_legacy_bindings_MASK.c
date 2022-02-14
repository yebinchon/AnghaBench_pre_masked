
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct touchscreen_properties {int invert_x; int invert_y; int swap_x_y; int max_y; int max_x; } ;
struct mms114_data {int moving_threshold; int contact_threshold; struct touchscreen_properties props; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct mms114_data *VAR_1)
{
 struct device *VAR_2 = &VAR_1->client->dev;
 struct touchscreen_properties *VAR_3 = &VAR_1->props;

 if (FUNC_2(VAR_2, "x-size", &VAR_3->max_x)) {
  FUNC_0(VAR_2, "failed to get legacy x-size property\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_2, "y-size", &VAR_3->max_y)) {
  FUNC_0(VAR_2, "failed to get legacy y-size property\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2, "contact-threshold",
    &VAR_1->contact_threshold);
 FUNC_2(VAR_2, "moving-threshold",
    &VAR_1->moving_threshold);

 if (FUNC_1(VAR_2, "x-invert"))
  VAR_3->invert_x = 1;
 if (FUNC_1(VAR_2, "y-invert"))
  VAR_3->invert_y = 1;

 VAR_3->swap_x_y = 0;

 return 0;
}
