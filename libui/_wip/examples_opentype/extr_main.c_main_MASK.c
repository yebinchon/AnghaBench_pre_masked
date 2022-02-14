
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiInitOptions ;
typedef int uiGrid ;
typedef int uiBox ;
struct TYPE_3__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_1 (int *,int ,int) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 () ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int *,int ,int,int,int,int,int,int ,int,int ) ;
 int FUNC_15 (int *,int) ;
 char* FUNC_16 (int *) ;
 int FUNC_17 () ;
 int * FUNC_18 (TYPE_1__*) ;
 int * FUNC_19 (char*) ;
 int * FUNC_20 () ;
 int * FUNC_21 () ;
 int * FUNC_22 () ;
 int * FUNC_23 () ;
 int * FUNC_24 (char*,int,int,int) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 () ;
 int FUNC_27 (int *,int ,int *) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,int) ;

int FUNC_30(void)
{
 uiInitOptions VAR_20;
 const char *VAR_21;
 uiGrid *VAR_22;
 uiBox *VAR_23;

 VAR_3.Draw = VAR_5;
 VAR_3.MouseEvent = VAR_8;
 VAR_3.MouseCrossed = VAR_7;
 VAR_3.DragBroken = VAR_4;
 VAR_3.KeyEvent = VAR_6;

 FUNC_1(&VAR_20, 0, sizeof (uiInitOptions));
 VAR_21 = FUNC_16(&VAR_20);
 if (VAR_21 != ((void*)0)) {
  FUNC_0(VAR_16, "error initializing ui: %s\n", VAR_21);
  FUNC_13(VAR_21);
  return 1;
 }

 FUNC_25(VAR_15, ((void*)0));


 VAR_9 = FUNC_24("libui OpenType Features Example", 640, 480, 1);
 FUNC_29(VAR_9, 1);
 FUNC_27(VAR_9, VAR_11, ((void*)0));

 VAR_22 = FUNC_22();
 FUNC_15(VAR_22, 1);
 FUNC_28(VAR_9, FUNC_6(VAR_22));

 VAR_2 = FUNC_21();
 FUNC_11(VAR_2, VAR_12, ((void*)0));
 FUNC_14(VAR_22, FUNC_6(VAR_2),
  0, 0, 1, 1,

  0, VAR_19, 0, VAR_18);

 VAR_17 = FUNC_20();
 FUNC_10(VAR_17, "afford afire aflight");
 FUNC_9(VAR_17, VAR_14, ((void*)0));
 FUNC_14(VAR_22, FUNC_6(VAR_17),
  1, 0, 1, 1,


  1, VAR_19, 0, VAR_18);

 VAR_23 = FUNC_23();
 FUNC_4(VAR_23, 1);
 FUNC_14(VAR_22, FUNC_6(VAR_23),
  0, 1, 1, 1,
  0, VAR_19, 1, VAR_19);

 VAR_10 = FUNC_19("NULL uiOpenTypeFeatures");
 FUNC_5(VAR_10, VAR_13, ((void*)0));
 FUNC_3(VAR_23, FUNC_6(VAR_10), 0);




 {
  int VAR_24;

  for (VAR_24 = 0; VAR_24 < 10; VAR_24++)
   FUNC_3(VAR_23, FUNC_6(FUNC_20()), 0);
 }



 VAR_0 = FUNC_18(&VAR_3);
 FUNC_14(VAR_22, FUNC_6(VAR_0),
  1, 1, 1, 1,
  1, VAR_19, 1, VAR_19);


 FUNC_2();

 FUNC_8(FUNC_6(VAR_9));
 FUNC_17();

 FUNC_7(FUNC_6(VAR_9));
 FUNC_12(VAR_1);
 FUNC_26();
 return 0;
}
