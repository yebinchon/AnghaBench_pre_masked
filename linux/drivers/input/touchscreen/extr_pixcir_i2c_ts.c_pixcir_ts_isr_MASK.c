
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixcir_report_data {scalar_t__ num_touches; } ;
struct pixcir_i2c_ts_data {int input; int gpio_attb; scalar_t__ running; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct pixcir_i2c_ts_data*,struct pixcir_report_data*) ;
 int FUNC_5 (struct pixcir_i2c_ts_data*,struct pixcir_report_data*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct pixcir_i2c_ts_data *VAR_3 = VAR_2;
 struct pixcir_report_data VAR_4;

 while (VAR_3->running) {

  FUNC_4(VAR_3, &VAR_4);


  FUNC_5(VAR_3, &VAR_4);

  if (FUNC_0(VAR_3->gpio_attb)) {
   if (VAR_4.num_touches) {




    FUNC_1(VAR_3->input);
    FUNC_2(VAR_3->input);
   }
   break;
  }

  FUNC_3(20);
 }

 return VAR_0;
}
