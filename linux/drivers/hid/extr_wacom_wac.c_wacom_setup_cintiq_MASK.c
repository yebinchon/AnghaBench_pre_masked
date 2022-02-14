
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {int tilt_fuzz; } ;
struct wacom_wac {struct wacom_features features; struct input_dev* pen_input; } ;
struct input_dev {int keybit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_3 (struct wacom_wac*) ;

__attribute__((used)) static void FUNC_4(struct wacom_wac *VAR_7)
{
 struct input_dev *VAR_8 = VAR_7->pen_input;
 struct wacom_features *VAR_9 = &VAR_7->features;

 FUNC_3(VAR_7);

 FUNC_0(VAR_6, VAR_8->keybit);
 FUNC_0(VAR_4, VAR_8->keybit);
 FUNC_0(VAR_5, VAR_8->keybit);
 FUNC_0(VAR_3, VAR_8->keybit);

 FUNC_2(VAR_8, VAR_2, 0, 1023, 0, 0);
 FUNC_2(VAR_8, VAR_0, -64, 63, VAR_9->tilt_fuzz, 0);
 FUNC_1(VAR_8, VAR_0, 57);
 FUNC_2(VAR_8, VAR_1, -64, 63, VAR_9->tilt_fuzz, 0);
 FUNC_1(VAR_8, VAR_1, 57);
}
