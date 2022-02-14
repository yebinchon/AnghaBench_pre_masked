
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct elan_drvdata {int* prev_report; struct input_dev* input; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct elan_drvdata*,int*,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int*,int*,int) ;

__attribute__((used)) static void FUNC_6(struct elan_drvdata *VAR_5, u8 *VAR_6)
{
 int VAR_7;
 struct input_dev *VAR_8 = VAR_5->input;
 if (VAR_6[0] == VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_6[2] & FUNC_0(VAR_7 + 3))
    FUNC_1(VAR_5, VAR_6 + 3, VAR_7);
   else
    FUNC_1(VAR_5, ((void*)0), VAR_7);
  }
  FUNC_3(VAR_8, VAR_0, VAR_6[2] & 0x01);
 }






 if (VAR_6[0] == VAR_2) {
  FUNC_5(VAR_5->prev_report, VAR_6,
         sizeof(VAR_5->prev_report));
  return;
 }

 if (VAR_6[0] == VAR_3) {
  int VAR_9 = 0;
  u8 *VAR_10 = VAR_5->prev_report;

  if (VAR_10[0] != VAR_2)
   return;

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_10[2] & FUNC_0(VAR_7 + 3)) {
    if (!VAR_9) {
     VAR_9 = 1;
     FUNC_1(VAR_5, VAR_10 + 3, VAR_7);
    } else {
     FUNC_1(VAR_5, VAR_6 + 1, VAR_7);
    }
   } else {
    FUNC_1(VAR_5, ((void*)0), VAR_7);
   }
  }
  FUNC_3(VAR_8, VAR_0, VAR_10[2] & 0x01);
 }

 FUNC_2(VAR_8);
 FUNC_4(VAR_8);
}
