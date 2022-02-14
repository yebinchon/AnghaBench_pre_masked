
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {int gpio_data; int gpio_trans; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct fsi_master_gpio *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0->gpio_trans, 1);
 FUNC_0(VAR_0->gpio_data, VAR_1);
}
