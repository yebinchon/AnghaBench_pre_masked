
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct elan_drvdata {struct input_dev* input; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct elan_drvdata*,int*,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct elan_drvdata *VAR_3, u8 *VAR_4)
{
 struct input_dev *VAR_5 = VAR_3->input;
 u8 *VAR_6;
 int VAR_7;
 VAR_6 = VAR_4 + 2;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_4[1] & FUNC_0(VAR_7 + 3)) {
   FUNC_1(VAR_3, VAR_6, VAR_7);
   VAR_6 += VAR_1;
  } else {
   FUNC_1(VAR_3, ((void*)0), VAR_7);
  }
 }

 FUNC_3(VAR_5, VAR_0, VAR_4[1] & 0x01);
 FUNC_2(VAR_5);
 FUNC_4(VAR_5);
}
