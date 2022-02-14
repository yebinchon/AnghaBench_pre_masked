
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct bmg160_data {scalar_t__ ev_enable_state; int motion_trig; scalar_t__ motion_trigger_on; int dready_trig; scalar_t__ dready_trigger_on; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bmg160_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct iio_dev *VAR_4 = VAR_3;
 struct bmg160_data *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->dready_trigger_on)
  FUNC_1(VAR_5->dready_trig);
 else if (VAR_5->motion_trigger_on)
  FUNC_1(VAR_5->motion_trig);

 if (VAR_5->ev_enable_state)
  return VAR_1;
 else
  return VAR_0;

}
