
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiButton ;
typedef int uiBox ;
typedef int uiAreaHandler ;
struct TYPE_3__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;
struct TYPE_4__ {TYPE_1__ ah; } ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (char*) ;
 int * FUNC_10 (char*) ;
 int * FUNC_11 () ;
 int * VAR_11 ;

uiBox *FUNC_12(void)
{
 uiBox *VAR_12;
 uiBox *VAR_13;
 uiButton *VAR_14;

 VAR_2.ah.Draw = VAR_4;
 VAR_2.ah.MouseEvent = VAR_7;
 VAR_2.ah.MouseCrossed = VAR_6;
 VAR_2.ah.DragBroken = VAR_3;
 VAR_2.ah.KeyEvent = VAR_5;

 VAR_12 = FUNC_1();

 VAR_13 = FUNC_0();
 FUNC_3(VAR_12, FUNC_7(VAR_13), 0);

 VAR_11 = FUNC_11();
 FUNC_2(VAR_11);

 FUNC_5(VAR_11, VAR_9, ((void*)0));
 FUNC_6(VAR_11, 0);
 FUNC_5(VAR_11, VAR_8, ((void*)0));
 FUNC_3(VAR_13, FUNC_7(VAR_11), 0);

 VAR_0 = FUNC_8((uiAreaHandler *) (&VAR_2));
 FUNC_3(VAR_12, FUNC_7(VAR_0), 1);

 VAR_13 = FUNC_0();
 FUNC_3(VAR_12, FUNC_7(VAR_13), 0);

 VAR_10 = FUNC_10("Consider key events handled");
 FUNC_3(VAR_13, FUNC_7(VAR_10), 1);

 VAR_14 = FUNC_9("Enable");
 FUNC_4(VAR_14, VAR_1, VAR_14);
 FUNC_3(VAR_13, FUNC_7(VAR_14), 0);

 VAR_14 = FUNC_9("Disable");
 FUNC_4(VAR_14, VAR_1, ((void*)0));
 FUNC_3(VAR_13, FUNC_7(VAR_14), 0);

 return VAR_12;
}
