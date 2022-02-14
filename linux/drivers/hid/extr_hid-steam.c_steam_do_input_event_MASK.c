
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct steam_device {int dummy; } ;
struct input_dev {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5(struct steam_device *VAR_30,
  struct input_dev *VAR_31, u8 *VAR_32)
{

 u8 VAR_33, VAR_34, VAR_35;
 s16 VAR_36, VAR_37;
 bool VAR_38, VAR_39;

 VAR_33 = VAR_32[8];
 VAR_34 = VAR_32[9];
 VAR_35 = VAR_32[10];

 FUNC_2(VAR_31, VAR_3, VAR_32[11]);
 FUNC_2(VAR_31, VAR_2, VAR_32[12]);
 VAR_38 = VAR_35 & FUNC_0(3);
 VAR_39 = VAR_35 & FUNC_0(7);
 VAR_36 = FUNC_4(VAR_32 + 16);
 VAR_37 = -FUNC_4(VAR_32 + 18);

 FUNC_2(VAR_31, VAR_38 ? VAR_0 : VAR_6, VAR_36);
 FUNC_2(VAR_31, VAR_38 ? VAR_1 : VAR_7, VAR_37);

 if (VAR_38 && !VAR_39) {
  FUNC_2(VAR_31, VAR_6, 0);
  FUNC_2(VAR_31, VAR_7, 0);
 }

 if (!(VAR_38 || VAR_39)) {
  FUNC_2(VAR_31, VAR_0, 0);
  FUNC_2(VAR_31, VAR_1, 0);
 }

 FUNC_2(VAR_31, VAR_4, FUNC_4(VAR_32 + 20));
 FUNC_2(VAR_31, VAR_5, -FUNC_4(VAR_32 + 22));

 FUNC_1(VAR_31, VAR_29, VAR_26, !!(VAR_33 & FUNC_0(0)));
 FUNC_1(VAR_31, VAR_29, VAR_24, !!(VAR_33 & FUNC_0(1)));
 FUNC_1(VAR_31, VAR_29, VAR_25, !!(VAR_33 & FUNC_0(2)));
 FUNC_1(VAR_31, VAR_29, VAR_23, !!(VAR_33 & FUNC_0(3)));
 FUNC_1(VAR_31, VAR_29, VAR_28, !!(VAR_33 & FUNC_0(4)));
 FUNC_1(VAR_31, VAR_29, VAR_9, !!(VAR_33 & FUNC_0(5)));
 FUNC_1(VAR_31, VAR_29, VAR_27, !!(VAR_33 & FUNC_0(6)));
 FUNC_1(VAR_31, VAR_29, VAR_8, !!(VAR_33 & FUNC_0(7)));
 FUNC_1(VAR_31, VAR_29, VAR_17, !!(VAR_34 & FUNC_0(4)));
 FUNC_1(VAR_31, VAR_29, VAR_16, !!(VAR_34 & FUNC_0(5)));
 FUNC_1(VAR_31, VAR_29, VAR_18, !!(VAR_34 & FUNC_0(6)));
 FUNC_1(VAR_31, VAR_29, VAR_14, !!(VAR_34 & FUNC_0(7)));
 FUNC_1(VAR_31, VAR_29, VAR_15, !!(VAR_35 & FUNC_0(0)));
 FUNC_1(VAR_31, VAR_29, VAR_22, !!(VAR_35 & FUNC_0(2)));
 FUNC_1(VAR_31, VAR_29, VAR_21, !!(VAR_35 & FUNC_0(6)));
 FUNC_1(VAR_31, VAR_29, VAR_19, VAR_38 || VAR_39);
 FUNC_1(VAR_31, VAR_29, VAR_20, !!(VAR_35 & FUNC_0(4)));
 FUNC_1(VAR_31, VAR_29, VAR_13, !!(VAR_34 & FUNC_0(0)));
 FUNC_1(VAR_31, VAR_29, VAR_12, !!(VAR_34 & FUNC_0(1)));
 FUNC_1(VAR_31, VAR_29, VAR_11, !!(VAR_34 & FUNC_0(2)));
 FUNC_1(VAR_31, VAR_29, VAR_10, !!(VAR_34 & FUNC_0(3)));

 FUNC_3(VAR_31);
}
