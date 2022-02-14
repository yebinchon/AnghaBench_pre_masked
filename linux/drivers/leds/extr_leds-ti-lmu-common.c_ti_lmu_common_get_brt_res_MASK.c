
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lmu_bank {scalar_t__ max_brightness; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,scalar_t__*) ;
 int FUNC_1 (struct fwnode_handle*,char*,scalar_t__*) ;

int FUNC_2(struct device *VAR_2, struct fwnode_handle *VAR_3,
      struct ti_lmu_bank *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, "ti,brightness-resolution",
           &VAR_4->max_brightness);
 if (VAR_5)
  VAR_5 = FUNC_1(VAR_3,
            "ti,brightness-resolution",
            &VAR_4->max_brightness);
 if (VAR_4->max_brightness <= 0) {
  VAR_4->max_brightness = VAR_1;
  return VAR_5;
 }

 if (VAR_4->max_brightness > VAR_0)
   VAR_4->max_brightness = VAR_0;


 return 0;
}
