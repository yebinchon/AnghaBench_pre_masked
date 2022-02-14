
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm3100_data {int drdy_trig; int measuring_done; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {int currentmode; TYPE_1__ dev; } ;
typedef int irqreturn_t ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 struct rm3100_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct rm3100_data *VAR_4 = FUNC_2(VAR_3);

 switch (VAR_3->currentmode) {
 case 128:
  FUNC_0(&VAR_4->measuring_done);
  break;
 case 129:
  FUNC_3(VAR_4->drdy_trig);
  break;
 default:
  FUNC_1(VAR_3->dev.parent,
   "device mode out of control, current mode: %d",
   VAR_3->currentmode);
 }

 return VAR_0;
}
