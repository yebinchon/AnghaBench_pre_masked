
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpga_manager {int dummy; } ;
struct device {TYPE_2__* parent; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 struct fpga_manager* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct fpga_manager* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct fpga_manager *FUNC_4(struct device *VAR_1)
{
 struct fpga_manager *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (!FUNC_3(VAR_1->parent->driver->owner))
  goto err_dev;

 return VAR_2;

err_dev:
 FUNC_1(VAR_1);
 return FUNC_0(-VAR_0);
}
