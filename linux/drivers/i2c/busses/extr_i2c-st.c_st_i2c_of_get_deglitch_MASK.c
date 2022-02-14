
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_i2c_dev {int dev; int sda_min_width_us; int scl_min_width_us; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_2,
  struct st_i2c_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, "st,i2c-min-scl-pulse-width-us",
   &VAR_3->scl_min_width_us);
 if ((VAR_4 == -VAR_0) || (VAR_4 == -VAR_1)) {
  FUNC_0(VAR_3->dev, "st,i2c-min-scl-pulse-width-us invalid\n");
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_2, "st,i2c-min-sda-pulse-width-us",
   &VAR_3->sda_min_width_us);
 if ((VAR_4 == -VAR_0) || (VAR_4 == -VAR_1)) {
  FUNC_0(VAR_3->dev, "st,i2c-min-sda-pulse-width-us invalid\n");
  return VAR_4;
 }

 return 0;
}
