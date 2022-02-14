
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk8ba50_data {int dready_trig; scalar_t__ dready_trigger_on; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct stk8ba50_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct stk8ba50_data *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->dready_trigger_on)
  FUNC_1(VAR_4->dready_trig);

 return VAR_0;
}
