
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc_keypad {int input; int * keymap; struct tc3589x* tc3589x; } ;
struct tc3589x {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
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
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tc3589x*,int ) ;
 int FUNC_5 (struct tc3589x*,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_18, void *VAR_19)
{
 struct tc_keypad *VAR_20 = VAR_19;
 struct tc3589x *VAR_21 = VAR_20->tc3589x;
 u8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 u8 VAR_27;

 for (VAR_22 = 0; VAR_22 < VAR_7 * 2; VAR_22++) {
  VAR_25 = FUNC_4(VAR_21, VAR_11);


  if (VAR_25 == VAR_9 ||
    VAR_25 == VAR_8)
   continue;


  VAR_24 = VAR_25 & VAR_2;
  VAR_23 = (VAR_25 & VAR_3) >> VAR_5;
  VAR_27 = FUNC_0(VAR_23, VAR_24,
      VAR_10);
  VAR_26 = VAR_25 & VAR_4;

  FUNC_1(VAR_20->input, VAR_0, VAR_6, VAR_27);
  FUNC_2(VAR_20->input, VAR_20->keymap[VAR_27], !VAR_26);
  FUNC_3(VAR_20->input);
 }


 FUNC_5(VAR_21, VAR_15,
   0x0, VAR_13 | VAR_17);

 FUNC_5(VAR_21, VAR_16,
   0x0, VAR_14 | VAR_12);

 return VAR_1;
}
