
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int keybit; int evbit; int relbit; int propbit; } ;
struct cytp_data {int tp_max_abs_x; int tp_max_abs_y; int tp_max_pressure; int tp_res_y; int tp_res_x; int tp_min_pressure; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_26,
        struct cytp_data *VAR_27)
{
 int VAR_28;

 if (!VAR_27->tp_res_x || !VAR_27->tp_res_y)
  return -VAR_17;

 FUNC_1(VAR_18, VAR_26->evbit);
 FUNC_4(VAR_26, VAR_5, 0, VAR_27->tp_max_abs_x, 0, 0);
 FUNC_4(VAR_26, VAR_6, 0, VAR_27->tp_max_abs_y, 0, 0);
 FUNC_4(VAR_26, VAR_3,
        VAR_27->tp_min_pressure, VAR_27->tp_max_pressure, 0, 0);
 FUNC_4(VAR_26, VAR_4, 0, 255, 0, 0);


 FUNC_4(VAR_26, VAR_0, 0, VAR_27->tp_max_abs_x, 0, 0);
 FUNC_4(VAR_26, VAR_1, 0, VAR_27->tp_max_abs_y, 0, 0);
 FUNC_4(VAR_26, VAR_2, 0, 255, 0, 0);

 VAR_28 = FUNC_3(VAR_26, VAR_16,
   VAR_21|VAR_22);
 if (VAR_28 < 0)
  return VAR_28;

 FUNC_1(VAR_23, VAR_26->propbit);

 FUNC_2(VAR_26, VAR_5, VAR_27->tp_res_x);
 FUNC_2(VAR_26, VAR_6, VAR_27->tp_res_y);

 FUNC_2(VAR_26, VAR_0, VAR_27->tp_res_x);
 FUNC_2(VAR_26, VAR_1, VAR_27->tp_res_y);

 FUNC_1(VAR_15, VAR_26->keybit);
 FUNC_1(VAR_11, VAR_26->keybit);
 FUNC_1(VAR_10, VAR_26->keybit);
 FUNC_1(VAR_14, VAR_26->keybit);
 FUNC_1(VAR_12, VAR_26->keybit);
 FUNC_1(VAR_13, VAR_26->keybit);

 FUNC_0(VAR_20, VAR_26->evbit);
 FUNC_0(VAR_24, VAR_26->relbit);
 FUNC_0(VAR_25, VAR_26->relbit);

 FUNC_1(VAR_19, VAR_26->evbit);
 FUNC_1(VAR_7, VAR_26->keybit);
 FUNC_1(VAR_9, VAR_26->keybit);
 FUNC_1(VAR_8, VAR_26->keybit);

 return 0;
}
