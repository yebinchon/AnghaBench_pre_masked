
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prod_dev_id {scalar_t__ product_id; scalar_t__ device_id; } ;
struct device {int * type; } ;
struct TYPE_2__ {scalar_t__ product_id; scalar_t__ device_id; } ;
struct bmc_device {int usecount; TYPE_1__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct bmc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, const void *VAR_2)
{
 const struct prod_dev_id *VAR_3 = VAR_2;
 struct bmc_device *VAR_4;
 int VAR_5;

 if (VAR_1->type != &VAR_0)
  return 0;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = (VAR_4->id.product_id == VAR_3->product_id
       && VAR_4->id.device_id == VAR_3->device_id);
 if (VAR_5)
  VAR_5 = FUNC_0(&VAR_4->usecount);
 return VAR_5;
}
