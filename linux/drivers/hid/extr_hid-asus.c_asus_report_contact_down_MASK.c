
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {int dummy; } ;
struct asus_drvdata {TYPE_1__* tp; struct input_dev* input; } ;
struct TYPE_2__ {int max_y; int contact_size; } ;


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
 int FUNC_0 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct asus_drvdata *VAR_11,
  int VAR_12, u8 *VAR_13)
{
 struct input_dev *VAR_14 = VAR_11->input;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_17 = (VAR_13[0] & VAR_6) << 4 | VAR_13[1];
 VAR_18 = VAR_11->tp->max_y - ((VAR_13[0] & VAR_7) << 8 | VAR_13[2]);

 FUNC_0(VAR_14, VAR_0, VAR_17);
 FUNC_0(VAR_14, VAR_1, VAR_18);

 if (VAR_11->tp->contact_size < 5)
  return;

 if (VAR_12 == VAR_10) {
  VAR_15 = VAR_9;
  VAR_16 = VAR_8;
 } else {
  VAR_15 = (VAR_13[3] >> 4) & VAR_5;
  VAR_16 = VAR_13[4] & VAR_4;
 }

 FUNC_0(VAR_14, VAR_3, VAR_15);
 FUNC_0(VAR_14, VAR_2, VAR_16);
}
