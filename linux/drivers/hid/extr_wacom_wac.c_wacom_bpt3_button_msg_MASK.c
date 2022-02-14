
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ type; } ;
struct wacom_wac {struct wacom_features features; struct input_dev* pad_input; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct wacom_wac *VAR_6, unsigned char *VAR_7)
{
 struct input_dev *VAR_8 = VAR_6->pad_input;
 struct wacom_features *VAR_9 = &VAR_6->features;

 if (VAR_9->type == VAR_4 || VAR_9->type == VAR_5) {
  FUNC_0(VAR_8, VAR_2, (VAR_7[1] & 0x02) != 0);
  FUNC_0(VAR_8, VAR_0, (VAR_7[1] & 0x08) != 0);
 } else {
  FUNC_0(VAR_8, VAR_0, (VAR_7[1] & 0x02) != 0);
  FUNC_0(VAR_8, VAR_2, (VAR_7[1] & 0x08) != 0);
 }
 FUNC_0(VAR_8, VAR_1, (VAR_7[1] & 0x04) != 0);
 FUNC_0(VAR_8, VAR_3, (VAR_7[1] & 0x01) != 0);
}
