
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {scalar_t__ external_mode; } ;
struct fsi_gpio_msg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_master_gpio*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct fsi_master_gpio*,struct fsi_gpio_msg*) ;

__attribute__((used)) static int FUNC_4(struct fsi_master_gpio *VAR_1,
  struct fsi_gpio_msg *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1->external_mode)
  return -VAR_0;

 FUNC_2(VAR_3);
 FUNC_3(VAR_1, VAR_2);
 FUNC_0(VAR_1);
 FUNC_1(VAR_3);

 return 0;
}
