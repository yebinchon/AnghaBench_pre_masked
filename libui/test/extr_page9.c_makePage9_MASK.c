
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiBox ;
struct TYPE_3__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 TYPE_1__ VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (int *,char*) ;
 int * FUNC_9 (TYPE_1__*) ;
 int * FUNC_10 (char*) ;
 int * FUNC_11 (char*) ;
 int * FUNC_12 () ;
 int * FUNC_13 () ;

uiBox *FUNC_14(void)
{
 uiBox *VAR_21;
 uiBox *VAR_22;
 uiBox *VAR_23;

 VAR_21 = FUNC_1();
 VAR_22 = VAR_21;

 VAR_23 = FUNC_0();
 FUNC_2(VAR_22, FUNC_7(VAR_23), 0);

 VAR_15 = FUNC_13();

 FUNC_8(VAR_15, "Enter text here");
 FUNC_2(VAR_23, FUNC_7(VAR_15), 1);

 VAR_10 = FUNC_13();
 FUNC_8(VAR_10, "Arial");
 FUNC_2(VAR_23, FUNC_7(VAR_10), 1);

 VAR_12 = FUNC_13();
 FUNC_8(VAR_12, "10");
 FUNC_2(VAR_23, FUNC_7(VAR_12), 1);

 VAR_23 = FUNC_0();
 FUNC_2(VAR_22, FUNC_7(VAR_23), 0);

 VAR_16 = FUNC_12();
 FUNC_5(VAR_16, "Thin");
 FUNC_5(VAR_16, "Ultra Light");
 FUNC_5(VAR_16, "Light");
 FUNC_5(VAR_16, "Book");
 FUNC_5(VAR_16, "Normal");
 FUNC_5(VAR_16, "Medium");
 FUNC_5(VAR_16, "Semi Bold");
 FUNC_5(VAR_16, "Bold");
 FUNC_5(VAR_16, "Ultra Bold");
 FUNC_5(VAR_16, "Heavy");
 FUNC_5(VAR_16, "Ultra Heavy");
 FUNC_6(VAR_16, VAR_20);
 FUNC_2(VAR_23, FUNC_7(VAR_16), 1);

 VAR_11 = FUNC_12();
 FUNC_5(VAR_11, "Normal");
 FUNC_5(VAR_11, "Oblique");
 FUNC_5(VAR_11, "Italic");
 FUNC_6(VAR_11, VAR_18);
 FUNC_2(VAR_23, FUNC_7(VAR_11), 1);

 VAR_13 = FUNC_11("Small Caps");
 FUNC_2(VAR_23, FUNC_7(VAR_13), 1);

 VAR_23 = FUNC_0();
 FUNC_2(VAR_22, FUNC_7(VAR_23), 0);

 VAR_14 = FUNC_12();
 FUNC_5(VAR_14, "Ultra Condensed");
 FUNC_5(VAR_14, "Extra Condensed");
 FUNC_5(VAR_14, "Condensed");
 FUNC_5(VAR_14, "Semi Condensed");
 FUNC_5(VAR_14, "Normal");
 FUNC_5(VAR_14, "Semi Expanded");
 FUNC_5(VAR_14, "Expanded");
 FUNC_5(VAR_14, "Extra Expanded");
 FUNC_5(VAR_14, "Ultra Expanded");
 FUNC_6(VAR_14, VAR_19);
 FUNC_2(VAR_23, FUNC_7(VAR_14), 1);

 VAR_17 = FUNC_13();
 FUNC_8(VAR_17, "-1");
 FUNC_2(VAR_23, FUNC_7(VAR_17), 1);

 VAR_23 = FUNC_0();
 FUNC_2(VAR_22, FUNC_7(VAR_23), 0);

 VAR_7 = FUNC_10("Apply");
 FUNC_3(VAR_7, VAR_6, ((void*)0));
 FUNC_2(VAR_23, FUNC_7(VAR_7), 1);

 VAR_0 = FUNC_11("Add Leading");
 FUNC_4(VAR_0, 1);
 FUNC_2(VAR_23, FUNC_7(VAR_0), 0);

 VAR_9.Draw = VAR_2;
 VAR_9.MouseEvent = VAR_5;
 VAR_9.MouseCrossed = VAR_4;
 VAR_9.DragBroken = VAR_1;
 VAR_9.KeyEvent = VAR_3;
 VAR_8 = FUNC_9(&VAR_9);
 FUNC_2(VAR_22, FUNC_7(VAR_8), 1);

 return VAR_21;
}
