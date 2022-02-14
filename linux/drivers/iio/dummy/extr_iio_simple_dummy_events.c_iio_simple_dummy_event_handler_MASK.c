
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dummy_state {int event_timestamp; int event_val; int activity_walking; int activity_running; TYPE_1__* regs; } ;
struct iio_dev {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int reg_data; int reg_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,char*,int ,int) ;
 struct iio_dummy_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_12, void *VAR_13)
{
 struct iio_dev *VAR_14 = VAR_13;
 struct iio_dummy_state *VAR_15 = FUNC_2(VAR_14);

 FUNC_1(&VAR_14->dev, "id %x event %x\n",
  VAR_15->regs->reg_id, VAR_15->regs->reg_data);

 switch (VAR_15->regs->reg_data) {
 case 0:
  FUNC_3(VAR_14,
          FUNC_0(VAR_10, 0, 0,
           VAR_3,
           VAR_5, 0, 0, 0),
          VAR_15->event_timestamp);
  break;
 case 1:
  if (VAR_15->activity_running > VAR_15->event_val)
   FUNC_3(VAR_14,
           FUNC_0(VAR_0, 0,
            VAR_6,
            VAR_3,
            VAR_5,
            0, 0, 0),
           VAR_15->event_timestamp);
  break;
 case 2:
  if (VAR_15->activity_walking < VAR_15->event_val)
   FUNC_3(VAR_14,
           FUNC_0(VAR_0, 0,
            VAR_7,
            VAR_1,
            VAR_5,
            0, 0, 0),
           VAR_15->event_timestamp);
  break;
 case 3:
  FUNC_3(VAR_14,
          FUNC_0(VAR_9, 0, VAR_8,
           VAR_2,
           VAR_4, 0, 0, 0),
          VAR_15->event_timestamp);
  break;
 default:
  break;
 }

 return VAR_11;
}
