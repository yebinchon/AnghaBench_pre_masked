
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raydium_data {int avdd; int vccio; scalar_t__ reset_gpio; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct raydium_data *VAR_1 = VAR_0;

 if (VAR_1->reset_gpio) {
  FUNC_0(VAR_1->reset_gpio, 1);
  FUNC_1(VAR_1->vccio);
  FUNC_1(VAR_1->avdd);
 }
}
