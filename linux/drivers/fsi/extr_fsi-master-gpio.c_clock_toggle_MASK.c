
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_gpio {int gpio_clk; int no_delays; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct fsi_master_gpio *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (!VAR_1->no_delays)
   FUNC_1(VAR_0);
  FUNC_0(VAR_1->gpio_clk, 0);
  if (!VAR_1->no_delays)
   FUNC_1(VAR_0);
  FUNC_0(VAR_1->gpio_clk, 1);
 }
}
