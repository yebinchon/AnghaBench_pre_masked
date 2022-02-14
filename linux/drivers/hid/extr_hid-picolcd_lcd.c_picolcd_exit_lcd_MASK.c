
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {struct lcd_device* lcd; } ;
struct lcd_device {int dummy; } ;


 int FUNC_0 (struct lcd_device*) ;

void FUNC_1(struct picolcd_data *VAR_0)
{
 struct lcd_device *VAR_1 = VAR_0->lcd;

 VAR_0->lcd = ((void*)0);
 FUNC_0(VAR_1);
}
