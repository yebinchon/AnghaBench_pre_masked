
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {int gpio_data; int gpio_clk; int gpio_enable; int gpio_trans; int gpio_mux; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_master_gpio*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct fsi_master_gpio *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(VAR_1->gpio_mux, 1);
 FUNC_1(VAR_1->gpio_trans, 1);
 FUNC_1(VAR_1->gpio_enable, 1);
 FUNC_1(VAR_1->gpio_clk, 1);
 FUNC_1(VAR_1->gpio_data, 1);


 FUNC_3(VAR_2);
 FUNC_0(VAR_1, VAR_0);
 FUNC_2(VAR_2);
}
