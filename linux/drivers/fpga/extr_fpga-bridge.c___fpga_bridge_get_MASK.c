
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fpga_image_info {int dummy; } ;
struct fpga_bridge {int mutex; int dev; struct fpga_image_info* info; } ;
struct device {TYPE_2__* parent; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fpga_bridge* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 struct fpga_bridge* FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct fpga_bridge *FUNC_7(struct device *VAR_2,
          struct fpga_image_info *VAR_3)
{
 struct fpga_bridge *VAR_4;
 int VAR_5 = -VAR_1;

 VAR_4 = FUNC_5(VAR_2);

 VAR_4->info = VAR_3;

 if (!FUNC_2(&VAR_4->mutex)) {
  VAR_5 = -VAR_0;
  goto err_dev;
 }

 if (!FUNC_6(VAR_2->parent->driver->owner))
  goto err_ll_mod;

 FUNC_1(&VAR_4->dev, "get\n");

 return VAR_4;

err_ll_mod:
 FUNC_3(&VAR_4->mutex);
err_dev:
 FUNC_4(VAR_2);
 return FUNC_0(VAR_5);
}
