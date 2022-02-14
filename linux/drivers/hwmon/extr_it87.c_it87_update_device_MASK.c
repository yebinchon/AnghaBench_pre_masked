
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {int valid; int has_in; int** in; int has_fan; int** fan; int has_temp; int** temp; int* fan_div; int alarms; int beeps; int fan_main_ctrl; int fan_ctl; int has_pwm; int sensor; int extra; scalar_t__ type; int vid; int update_lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int * VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct it87_data* FUNC_6 (struct device*) ;
 scalar_t__ FUNC_7 (struct it87_data*) ;
 scalar_t__ FUNC_8 (struct it87_data*) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_9 (struct it87_data*,int ) ;
 int FUNC_10 (struct it87_data*,int) ;
 int FUNC_11 (struct it87_data*,int ,int) ;
 scalar_t__ VAR_27 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_28 ;

__attribute__((used)) static struct it87_data *FUNC_15(struct device *VAR_29)
{
 struct it87_data *VAR_30 = FUNC_6(VAR_29);
 int VAR_31;

 FUNC_12(&VAR_30->update_lock);

 if (FUNC_14(VAR_27, VAR_30->last_updated + VAR_0 + VAR_0 / 2) ||
     !VAR_30->valid) {
  if (VAR_28) {




   FUNC_11(VAR_30, VAR_5,
    FUNC_9(VAR_30, VAR_5) | 0x40);
  }
  for (VAR_31 = 0; VAR_31 < VAR_23; VAR_31++) {
   if (!(VAR_30->has_in & FUNC_0(VAR_31)))
    continue;

   VAR_30->in[VAR_31][0] =
    FUNC_9(VAR_30, VAR_17[VAR_31]);


   if (VAR_31 >= VAR_24)
    continue;

   VAR_30->in[VAR_31][1] =
    FUNC_9(VAR_30, FUNC_5(VAR_31));
   VAR_30->in[VAR_31][2] =
    FUNC_9(VAR_30, FUNC_4(VAR_31));
  }

  for (VAR_31 = 0; VAR_31 < VAR_18; VAR_31++) {

   if (!(VAR_30->has_fan & FUNC_0(VAR_31)))
    continue;

   VAR_30->fan[VAR_31][1] =
    FUNC_9(VAR_30, VAR_12[VAR_31]);
   VAR_30->fan[VAR_31][0] = FUNC_9(VAR_30,
           VAR_6[VAR_31]);

   if (FUNC_7(VAR_30)) {
    VAR_30->fan[VAR_31][0] |= FUNC_9(VAR_30,
      VAR_7[VAR_31]) << 8;
    VAR_30->fan[VAR_31][1] |= FUNC_9(VAR_30,
      VAR_8[VAR_31]) << 8;
   }
  }
  for (VAR_31 = 0; VAR_31 < VAR_20; VAR_31++) {
   if (!(VAR_30->has_temp & FUNC_0(VAR_31)))
    continue;
   VAR_30->temp[VAR_31][0] =
    FUNC_9(VAR_30, FUNC_1(VAR_31));

   if (FUNC_8(VAR_30) && VAR_31 < VAR_22)
    VAR_30->temp[VAR_31][3] =
      FUNC_9(VAR_30,
        VAR_15[VAR_31]);

   if (VAR_31 >= VAR_21)
    continue;

   VAR_30->temp[VAR_31][1] =
    FUNC_9(VAR_30, FUNC_3(VAR_31));
   VAR_30->temp[VAR_31][2] =
    FUNC_9(VAR_30, FUNC_2(VAR_31));
  }


  if ((VAR_30->has_fan & 0x07) && !FUNC_7(VAR_30)) {
   VAR_31 = FUNC_9(VAR_30, VAR_10);
   VAR_30->fan_div[0] = VAR_31 & 0x07;
   VAR_30->fan_div[1] = (VAR_31 >> 3) & 0x07;
   VAR_30->fan_div[2] = (VAR_31 & 0x40) ? 3 : 1;
  }

  VAR_30->alarms =
   FUNC_9(VAR_30, VAR_1) |
   (FUNC_9(VAR_30, VAR_2) << 8) |
   (FUNC_9(VAR_30, VAR_3) << 16);
  VAR_30->beeps = FUNC_9(VAR_30, VAR_4);

  VAR_30->fan_main_ctrl = FUNC_9(VAR_30,
    VAR_11);
  VAR_30->fan_ctl = FUNC_9(VAR_30, VAR_9);
  for (VAR_31 = 0; VAR_31 < VAR_19; VAR_31++) {
   if (!(VAR_30->has_pwm & FUNC_0(VAR_31)))
    continue;
   FUNC_10(VAR_30, VAR_31);
  }

  VAR_30->sensor = FUNC_9(VAR_30, VAR_13);
  VAR_30->extra = FUNC_9(VAR_30, VAR_14);





  if (VAR_30->type == VAR_25 || VAR_30->type == VAR_26) {
   VAR_30->vid = FUNC_9(VAR_30, VAR_16);




   VAR_30->vid &= 0x3f;
  }
  VAR_30->last_updated = VAR_27;
  VAR_30->valid = 1;
 }

 FUNC_13(&VAR_30->update_lock);

 return VAR_30;
}
