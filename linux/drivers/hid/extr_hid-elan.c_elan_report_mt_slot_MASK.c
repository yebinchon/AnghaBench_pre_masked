
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct elan_drvdata {int max_y; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct elan_drvdata *VAR_4, u8 *VAR_5,
    unsigned int VAR_6)
{
 struct input_dev *VAR_7 = VAR_4->input;
 int VAR_8, VAR_9, VAR_10;

 bool VAR_11 = !!VAR_5;

 FUNC_1(VAR_7, VAR_6);
 FUNC_0(VAR_7, VAR_3, VAR_11);
 if (VAR_11) {
  VAR_8 = ((VAR_5[0] & 0xF0) << 4) | VAR_5[1];
  VAR_9 = VAR_4->max_y -
      (((VAR_5[0] & 0x07) << 8) | VAR_5[2]);
  VAR_10 = VAR_5[4];

  FUNC_2(VAR_7, VAR_0, VAR_8);
  FUNC_2(VAR_7, VAR_1, VAR_9);
  FUNC_2(VAR_7, VAR_2, VAR_10);
 }
}
