
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {struct input_dev* pen_input; } ;
struct input_dev {int keybit; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct wacom_wac*) ;

__attribute__((used)) static void FUNC_5(struct wacom_wac *VAR_11)
{
 struct input_dev *VAR_12 = VAR_11->pen_input;

 FUNC_3(VAR_12, VAR_9, VAR_10);

 FUNC_4(VAR_11);

 FUNC_0(VAR_3, VAR_12->keybit);
 FUNC_0(VAR_5, VAR_12->keybit);
 FUNC_0(VAR_4, VAR_12->keybit);
 FUNC_0(VAR_6, VAR_12->keybit);
 FUNC_0(VAR_2, VAR_12->keybit);
 FUNC_0(VAR_8, VAR_12->keybit);
 FUNC_0(VAR_7, VAR_12->keybit);

 FUNC_2(VAR_12, VAR_0, -900, 899, 0, 0);
 FUNC_1(VAR_12, VAR_0, 287);
 FUNC_2(VAR_12, VAR_1, -1023, 1023, 0, 0);
}
