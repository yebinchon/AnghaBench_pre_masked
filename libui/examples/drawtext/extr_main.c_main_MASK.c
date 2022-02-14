
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiInitOptions ;
typedef int uiForm ;
typedef int uiBox ;
struct TYPE_3__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (int *,char*,int ,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char const*) ;
 char* FUNC_15 (int *) ;
 int FUNC_16 () ;
 int * FUNC_17 (TYPE_1__*) ;
 int * FUNC_18 () ;
 int * FUNC_19 () ;
 int * FUNC_20 () ;
 int * FUNC_21 () ;
 int * FUNC_22 () ;
 int * FUNC_23 (char*,int,int,int) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 () ;
 int FUNC_26 (int *,int ,int *) ;
 int FUNC_27 (int *,int ) ;
 int FUNC_28 (int *,int) ;

int FUNC_29(void)
{
 uiInitOptions VAR_16;
 const char *VAR_17;
 uiBox *VAR_18, *VAR_19;
 uiForm *VAR_20;

 VAR_4.Draw = VAR_6;
 VAR_4.MouseEvent = VAR_9;
 VAR_4.MouseCrossed = VAR_8;
 VAR_4.DragBroken = VAR_5;
 VAR_4.KeyEvent = VAR_7;

 FUNC_2(&VAR_16, 0, sizeof (uiInitOptions));
 VAR_17 = FUNC_15(&VAR_16);
 if (VAR_17 != ((void*)0)) {
  FUNC_0(VAR_15, "error initializing ui: %s\n", VAR_17);
  FUNC_14(VAR_17);
  return 1;
 }

 FUNC_24(VAR_14, ((void*)0));

 FUNC_1();

 VAR_10 = FUNC_23("libui Text-Drawing Example", 640, 480, 1);
 FUNC_28(VAR_10, 1);
 FUNC_26(VAR_10, VAR_11, ((void*)0));

 VAR_18 = FUNC_21();
 FUNC_4(VAR_18, 1);
 FUNC_27(VAR_10, FUNC_8(VAR_18));

 VAR_19 = FUNC_22();
 FUNC_4(VAR_19, 1);
 FUNC_3(VAR_18, FUNC_8(VAR_19), 0);

 VAR_3 = FUNC_19();
 FUNC_10(VAR_3, VAR_13, ((void*)0));
 FUNC_3(VAR_19, FUNC_8(VAR_3), 0);

 VAR_20 = FUNC_20();
 FUNC_12(VAR_20, 1);

 FUNC_3(VAR_19, FUNC_8(VAR_20), 0);

 VAR_0 = FUNC_18();

 FUNC_5(VAR_0, "Left");
 FUNC_5(VAR_0, "Center");
 FUNC_5(VAR_0, "Right");
 FUNC_7(VAR_0, 0);
 FUNC_6(VAR_0, VAR_12, ((void*)0));
 FUNC_11(VAR_20, "Alignment", FUNC_8(VAR_0), 0);

 VAR_1 = FUNC_17(&VAR_4);
 FUNC_3(VAR_18, FUNC_8(VAR_1), 1);

 FUNC_9(FUNC_8(VAR_10));
 FUNC_16();
 FUNC_13(VAR_2);
 FUNC_25();
 return 0;
}
