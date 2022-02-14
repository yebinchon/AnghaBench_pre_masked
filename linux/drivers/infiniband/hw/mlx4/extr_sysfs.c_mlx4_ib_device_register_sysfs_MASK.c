
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {int phys_port_cnt; TYPE_1__ dev; } ;
struct mlx4_ib_dev {void* iov_parent; void* ports_parent; TYPE_2__ ib_dev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_ib_dev*,int) ;
 void* FUNC_1 (char*,int *) ;
 int * FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct mlx4_ib_dev*) ;

int FUNC_7(struct mlx4_ib_dev *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 if (!FUNC_4(VAR_1->dev))
  return 0;

 VAR_1->iov_parent = FUNC_1("iov", &VAR_1->ib_dev.dev.kobj);
 if (!VAR_1->iov_parent) {
  VAR_3 = -VAR_0;
  goto err;
 }
 VAR_1->ports_parent =
  FUNC_1("ports",
           FUNC_2(VAR_1->iov_parent));
 if (!VAR_1->ports_parent) {
  VAR_3 = -VAR_0;
  goto err_ports;
 }

 for (VAR_2 = 1; VAR_2 <= VAR_1->ib_dev.phys_port_cnt; ++VAR_2) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3)
   goto err_add_entries;
 }

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  goto err_add_entries;
 return 0;

err_add_entries:
 FUNC_3(VAR_1->ports_parent);

err_ports:
 FUNC_3(VAR_1->iov_parent);
err:
 FUNC_5("mlx4_ib_device_register_sysfs error (%d)\n", VAR_3);
 return VAR_3;
}
