
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picolcd_data {int lcd_contrast; int lcd; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(struct picolcd_data *VAR_0)
{
 if (!VAR_0->lcd)
  return 0;
 return FUNC_0(VAR_0->lcd, VAR_0->lcd_contrast);
}
