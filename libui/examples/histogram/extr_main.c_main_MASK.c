
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uiInitOptions ;
struct TYPE_5__ {int A; int B; int G; int R; } ;
typedef TYPE_1__ uiDrawBrush ;
typedef int uiBox ;
struct TYPE_6__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,double) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int VAR_15 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (int *) ;
 int FUNC_14 () ;
 int * FUNC_15 (TYPE_2__*) ;
 int * FUNC_16 () ;
 int * FUNC_17 () ;
 int * FUNC_18 (int ,int) ;
 int * FUNC_19 () ;
 int * FUNC_20 (char*,int,int,int) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *,int ,int *) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 () ;
 int FUNC_25 (int *,int ,int *) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,int) ;

int FUNC_28(void)
{
 uiInitOptions VAR_16;
 const char *VAR_17;
 uiBox *VAR_18, *VAR_19;
 int VAR_20;
 uiDrawBrush VAR_21;

 VAR_3.Draw = VAR_5;
 VAR_3.MouseEvent = VAR_8;
 VAR_3.MouseCrossed = VAR_7;
 VAR_3.DragBroken = VAR_4;
 VAR_3.KeyEvent = VAR_6;

 FUNC_1(&VAR_16, 0, sizeof (uiInitOptions));
 VAR_17 = FUNC_13(&VAR_16);
 if (VAR_17 != ((void*)0)) {
  FUNC_0(VAR_15, "error initializing ui: %s\n", VAR_17);
  FUNC_12(VAR_17);
  return 1;
 }

 FUNC_21(VAR_14, ((void*)0));

 VAR_10 = FUNC_20("libui Histogram Example", 640, 480, 1);
 FUNC_27(VAR_10, 1);
 FUNC_25(VAR_10, VAR_11, ((void*)0));

 VAR_18 = FUNC_17();
 FUNC_7(VAR_18, 1);
 FUNC_26(VAR_10, FUNC_10(VAR_18));

 VAR_19 = FUNC_19();
 FUNC_7(VAR_19, 1);
 FUNC_6(VAR_18, FUNC_10(VAR_19), 0);

 FUNC_4(FUNC_5(((void*)0)));
 for (VAR_20 = 0; VAR_20 < 10; VAR_20++) {
  VAR_2[VAR_20] = FUNC_18(0, 100);
  FUNC_23(VAR_2[VAR_20], FUNC_2() % 101);
  FUNC_22(VAR_2[VAR_20], VAR_13, ((void*)0));
  FUNC_6(VAR_19, FUNC_10(VAR_2[VAR_20]), 0);
 }

 VAR_0 = FUNC_16();

 FUNC_3(&VAR_21, VAR_1, 1.0);
 FUNC_9(VAR_0,
  VAR_21.R,
  VAR_21.G,
  VAR_21.B,
  VAR_21.A);
 FUNC_8(VAR_0, VAR_12, ((void*)0));
 FUNC_6(VAR_19, FUNC_10(VAR_0), 0);

 VAR_9 = FUNC_15(&VAR_3);
 FUNC_6(VAR_18, FUNC_10(VAR_9), 1);

 FUNC_11(FUNC_10(VAR_10));
 FUNC_14();
 FUNC_24();
 return 0;
}
