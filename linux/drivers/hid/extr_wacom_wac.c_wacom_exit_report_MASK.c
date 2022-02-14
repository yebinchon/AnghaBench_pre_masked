
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ type; } ;
struct wacom_wac {unsigned char* data; scalar_t__* tool; scalar_t__* id; int * serial; struct wacom_features features; struct input_dev* pen_input; } ;
struct input_dev {int dummy; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct input_dev*,int ,int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct wacom_wac *VAR_24)
{
 struct input_dev *VAR_25 = VAR_24->pen_input;
 struct wacom_features *VAR_26 = &VAR_24->features;
 unsigned char *VAR_27 = VAR_24->data;
 int VAR_28 = (VAR_26->type == VAR_21) ? (VAR_27[1] & 0x01) : 0;





 FUNC_1(VAR_25, VAR_8, 0);
 FUNC_1(VAR_25, VAR_9, 0);
 FUNC_1(VAR_25, VAR_0, 0);
 FUNC_1(VAR_25, VAR_5, 0);
 FUNC_1(VAR_25, VAR_6, 0);
 if (VAR_24->tool[VAR_28] >= VAR_18) {
  FUNC_2(VAR_25, VAR_12, 0);
  FUNC_2(VAR_25, VAR_13, 0);
  FUNC_2(VAR_25, VAR_14, 0);
  FUNC_2(VAR_25, VAR_15, 0);
  FUNC_2(VAR_25, VAR_11, 0);
  FUNC_1(VAR_25, VAR_4, 0);
  FUNC_1(VAR_25, VAR_3, 0);
 } else {
  FUNC_1(VAR_25, VAR_2, 0);
  FUNC_2(VAR_25, VAR_16, 0);
  FUNC_2(VAR_25, VAR_17, 0);
  FUNC_2(VAR_25, VAR_19, 0);
  FUNC_1(VAR_25, VAR_7, 0);
  if (VAR_26->type >= VAR_22)
   FUNC_1(VAR_25, VAR_10, 0);
 }
 FUNC_2(VAR_25, VAR_24->tool[VAR_28], 0);
 FUNC_1(VAR_25, VAR_1, 0);
 FUNC_0(VAR_25, VAR_20, VAR_23, VAR_24->serial[VAR_28]);
 VAR_24->id[VAR_28] = 0;
}
