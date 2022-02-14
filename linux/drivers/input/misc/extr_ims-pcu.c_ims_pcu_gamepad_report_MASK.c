
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct input_dev {int dummy; } ;
struct ims_pcu_gamepad {struct input_dev* input; } ;
struct ims_pcu {struct ims_pcu_gamepad* gamepad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct ims_pcu *VAR_8, u32 VAR_9)
{
 struct ims_pcu_gamepad *VAR_10 = VAR_8->gamepad;
 struct input_dev *VAR_11 = VAR_10->input;
 int VAR_12, VAR_13;

 VAR_12 = !!(VAR_9 & (1 << 14)) - !!(VAR_9 & (1 << 13));
 VAR_13 = !!(VAR_9 & (1 << 12)) - !!(VAR_9 & (1 << 11));

 FUNC_0(VAR_11, VAR_0, VAR_12);
 FUNC_0(VAR_11, VAR_1, VAR_13);

 FUNC_1(VAR_11, VAR_2, VAR_9 & (1 << 7));
 FUNC_1(VAR_11, VAR_3, VAR_9 & (1 << 8));
 FUNC_1(VAR_11, VAR_6, VAR_9 & (1 << 9));
 FUNC_1(VAR_11, VAR_7, VAR_9 & (1 << 10));
 FUNC_1(VAR_11, VAR_5, VAR_9 & (1 << 15));
 FUNC_1(VAR_11, VAR_4, VAR_9 & (1 << 16));

 FUNC_2(VAR_11);
}
