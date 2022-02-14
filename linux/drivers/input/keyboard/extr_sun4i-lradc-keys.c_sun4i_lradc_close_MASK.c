
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_lradc_data {int vref_supply; scalar_t__ base; } ;
struct input_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 struct sun4i_lradc_data* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct input_dev *VAR_2)
{
 struct sun4i_lradc_data *VAR_3 = FUNC_4(VAR_2);


 FUNC_6(FUNC_0(2) | FUNC_2(1) | FUNC_1(1) |
  FUNC_3(2), VAR_3->base + VAR_0);
 FUNC_6(0, VAR_3->base + VAR_1);

 FUNC_5(VAR_3->vref_supply);
}
