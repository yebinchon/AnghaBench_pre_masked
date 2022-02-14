
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiBox ;
struct TYPE_3__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 TYPE_1__ VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,int *) ;
 int * FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (char*) ;
 int * FUNC_10 (char*) ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;
 int * FUNC_13 () ;

uiBox *FUNC_14(void)
{
 uiBox *VAR_16;
 uiBox *VAR_17;
 uiBox *VAR_18;

 VAR_16 = FUNC_1();
 VAR_17 = VAR_16;

 VAR_18 = FUNC_0();
 FUNC_2(VAR_17, FUNC_5(VAR_18), 0);

 VAR_14 = FUNC_12();

 FUNC_6(VAR_14, "Enter text here");
 FUNC_2(VAR_18, FUNC_5(VAR_14), 1);

 VAR_13 = FUNC_13();
 FUNC_7(VAR_13, VAR_7, ((void*)0));
 FUNC_2(VAR_18, FUNC_5(VAR_13), 1);

 VAR_12 = FUNC_11();
 FUNC_4(VAR_12, VAR_6, ((void*)0));
 FUNC_2(VAR_18, FUNC_5(VAR_12), 1);

 VAR_18 = FUNC_0();
 FUNC_2(VAR_17, FUNC_5(VAR_18), 0);

 VAR_9 = FUNC_9("Apply");
 FUNC_2(VAR_18, FUNC_5(VAR_9), 1);

 VAR_15 = FUNC_12();
 FUNC_6(VAR_15, "-1");
 FUNC_2(VAR_18, FUNC_5(VAR_15), 1);

 VAR_5 = FUNC_10("No Z Color");
 FUNC_3(VAR_5, VAR_8, ((void*)0));
 FUNC_2(VAR_18, FUNC_5(VAR_5), 0);

 VAR_11.Draw = VAR_1;
 VAR_11.MouseEvent = VAR_4;
 VAR_11.MouseCrossed = VAR_3;
 VAR_11.DragBroken = VAR_0;
 VAR_11.KeyEvent = VAR_2;
 VAR_10 = FUNC_8(&VAR_11);
 FUNC_2(VAR_17, FUNC_5(VAR_10), 1);


 VAR_18 = FUNC_0();
 FUNC_2(VAR_17, FUNC_5(VAR_18), 0);
 FUNC_2(VAR_18, FUNC_5(FUNC_13()), 1);
 FUNC_2(VAR_18, FUNC_5(FUNC_11()), 1);

 return VAR_16;
}
