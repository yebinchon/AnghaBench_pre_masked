
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {int gpio_clk; int no_delays; int gpio_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fsi_master_gpio *VAR_1)
{
 int VAR_2;

 if (!VAR_1->no_delays)
  FUNC_2(VAR_0);
 FUNC_1(VAR_1->gpio_clk, 0);


 FUNC_0(VAR_1->gpio_data);


 VAR_2 = FUNC_0(VAR_1->gpio_data);
 if (!VAR_1->no_delays)
  FUNC_2(VAR_0);
 FUNC_1(VAR_1->gpio_clk, 1);
 return VAR_2 ? 1 : 0;
}
