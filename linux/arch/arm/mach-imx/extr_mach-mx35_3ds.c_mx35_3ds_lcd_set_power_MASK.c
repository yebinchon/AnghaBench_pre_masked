
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plat_lcd_data {int dummy; } ;
struct gpio_chip {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 struct gpio_chip* FUNC_3 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(
    struct plat_lcd_data *VAR_4, unsigned int VAR_5)
{
 struct gpio_chip *VAR_6;

 if (!FUNC_0(VAR_2)) {
  VAR_6 = FUNC_3(
    "mc9s08dz60", VAR_3);
  if (VAR_6) {
   VAR_2 =
    VAR_6->base + VAR_1;
   if (FUNC_1(VAR_2, "lcd_power") < 0) {
    FUNC_4("error: gpio already requested!\n");
    VAR_2 = -VAR_0;
   }
  } else {
   FUNC_4("error: didn't find mc9s08dz60 gpio chip\n");
  }
 }

 if (FUNC_0(VAR_2))
  FUNC_2(VAR_2, VAR_5);
}
