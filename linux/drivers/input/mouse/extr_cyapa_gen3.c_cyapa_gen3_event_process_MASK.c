
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct cyapa_touch {int id; int xy_hi; int x_lo; int y_lo; int pressure; } ;
struct cyapa_reg_data {int finger_btn; struct cyapa_touch* touches; } ;
struct cyapa {int btn_capability; struct input_dev* input; } ;


 int VAR_0 ;
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
 int VAR_12 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;

__attribute__((used)) static int FUNC_6(struct cyapa *VAR_13,
        struct cyapa_reg_data *VAR_14)
{
 struct input_dev *VAR_15 = VAR_13->input;
 int VAR_16;
 int VAR_17;

 VAR_16 = (VAR_14->finger_btn >> 4) & 0x0f;
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  const struct cyapa_touch *VAR_18 = &VAR_14->touches[VAR_17];

  int VAR_19 = VAR_18->id - 1;

  FUNC_1(VAR_15, VAR_19);
  FUNC_0(VAR_15, VAR_9, 1);
  FUNC_3(VAR_15, VAR_0,
     ((VAR_18->xy_hi & 0xf0) << 4) | VAR_18->x_lo);
  FUNC_3(VAR_15, VAR_1,
     ((VAR_18->xy_hi & 0x0f) << 8) | VAR_18->y_lo);
  FUNC_3(VAR_15, VAR_2, VAR_18->pressure);
 }

 FUNC_2(VAR_15);

 if (VAR_13->btn_capability & VAR_6)
  FUNC_4(VAR_15, VAR_3,
     !!(VAR_14->finger_btn & VAR_10));
 if (VAR_13->btn_capability & VAR_7)
  FUNC_4(VAR_15, VAR_4,
     !!(VAR_14->finger_btn & VAR_11));
 if (VAR_13->btn_capability & VAR_8)
  FUNC_4(VAR_15, VAR_5,
     !!(VAR_14->finger_btn & VAR_12));
 FUNC_5(VAR_15);

 return 0;
}
