
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct da9052_tsi {int stopped; int da9052; scalar_t__ adc_on; int ts_pen_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct da9052_tsi*,int) ;
 struct da9052_tsi* FUNC_5 (struct input_dev*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct input_dev *VAR_3)
{
 struct da9052_tsi *VAR_4 = FUNC_5(VAR_3);

 VAR_4->stopped = 1;
 FUNC_6();
 FUNC_1(VAR_4->da9052, VAR_0);
 FUNC_0(&VAR_4->ts_pen_work);

 if (VAR_4->adc_on) {
  FUNC_1(VAR_4->da9052, VAR_1);
  FUNC_4(VAR_4, 0);






  FUNC_2(VAR_4->da9052, VAR_0);
 }


 FUNC_3(VAR_4->da9052, VAR_2, 1 << 1, 0);
}
