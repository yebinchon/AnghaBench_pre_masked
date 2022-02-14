
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lmu_bank {int ramp_down_usec; int ramp_up_usec; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct fwnode_handle*,char*,int *) ;

int FUNC_2(struct device *VAR_0,
      struct fwnode_handle *VAR_1,
      struct ti_lmu_bank *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, "ramp-up-us",
     &VAR_2->ramp_up_usec);
 if (VAR_3)
  FUNC_0(VAR_0, "ramp-up-us property missing\n");


 VAR_3 = FUNC_1(VAR_1, "ramp-down-us",
     &VAR_2->ramp_down_usec);
 if (VAR_3)
  FUNC_0(VAR_0, "ramp-down-us property missing\n");

 return 0;
}
