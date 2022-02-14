
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_lradc_data {int vref; scalar_t__ base; TYPE_1__* variant; int vref_supply; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int divisor_numerator; int divisor_denominator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 struct sun4i_lradc_data* FUNC_5 (struct input_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct input_dev *VAR_4)
{
 struct sun4i_lradc_data *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_6(VAR_5->vref_supply);
 if (VAR_6)
  return VAR_6;

 VAR_5->vref = FUNC_7(VAR_5->vref_supply) *
        VAR_5->variant->divisor_numerator /
        VAR_5->variant->divisor_denominator;




 FUNC_8(FUNC_1(2) | FUNC_3(1) | FUNC_2(1) |
  FUNC_4(0) | FUNC_0(1), VAR_5->base + VAR_2);

 FUNC_8(VAR_1 | VAR_0, VAR_5->base + VAR_3);

 return 0;
}
