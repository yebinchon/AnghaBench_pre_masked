
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {int cmd_lock; int gpio_enable; int external_mode; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fsi_master_gpio* FUNC_3 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_4(struct fsi_master *VAR_2, int VAR_3)
{
 struct fsi_master_gpio *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = -VAR_0;

 if (VAR_3 != 0)
  return -VAR_1;

 FUNC_1(&VAR_4->cmd_lock);
 if (!VAR_4->external_mode) {
  FUNC_0(VAR_4->gpio_enable, 1);
  VAR_5 = 0;
 }
 FUNC_2(&VAR_4->cmd_lock);

 return VAR_5;
}
