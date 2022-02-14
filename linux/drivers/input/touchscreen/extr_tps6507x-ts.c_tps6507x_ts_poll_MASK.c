
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pressure; scalar_t__ x; scalar_t__ y; } ;
struct tps6507x_ts {scalar_t__ min_pressure; int pendown; TYPE_1__ tc; int dev; } ;
struct input_polled_dev {struct input_dev* input; struct tps6507x_ts* private; } ;
struct input_dev {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 scalar_t__ FUNC_4 (struct tps6507x_ts*,int ,scalar_t__*) ;
 int FUNC_5 (struct tps6507x_ts*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct input_polled_dev *VAR_7)
{
 struct tps6507x_ts *VAR_8 = VAR_7->private;
 struct input_dev *VAR_9 = VAR_7->input;
 bool VAR_10;
 s32 VAR_11;

 VAR_11 = FUNC_4(VAR_8, VAR_4,
          &VAR_8->tc.pressure);
 if (VAR_11)
  goto done;

 VAR_10 = VAR_8->tc.pressure > VAR_8->min_pressure;

 if (FUNC_6(!VAR_10 && VAR_8->pendown)) {
  FUNC_0(VAR_8->dev, "UP\n");
  FUNC_2(VAR_9, VAR_3, 0);
  FUNC_1(VAR_9, VAR_0, 0);
  FUNC_3(VAR_9);
  VAR_8->pendown = 0;
 }

 if (VAR_10) {

  if (!VAR_8->pendown) {
   FUNC_0(VAR_8->dev, "DOWN\n");
   FUNC_2(VAR_9, VAR_3, 1);
  } else
   FUNC_0(VAR_8->dev, "still down\n");

  VAR_11 = FUNC_4(VAR_8, VAR_5,
            &VAR_8->tc.x);
  if (VAR_11)
   goto done;

  VAR_11 = FUNC_4(VAR_8, VAR_6,
            &VAR_8->tc.y);
  if (VAR_11)
   goto done;

  FUNC_1(VAR_9, VAR_1, VAR_8->tc.x);
  FUNC_1(VAR_9, VAR_2, VAR_8->tc.y);
  FUNC_1(VAR_9, VAR_0, VAR_8->tc.pressure);
  FUNC_3(VAR_9);
  VAR_8->pendown = 1;
 }

done:
 FUNC_5(VAR_8);
}
