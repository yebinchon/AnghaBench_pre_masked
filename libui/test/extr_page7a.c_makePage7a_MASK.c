
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiGroup ;
typedef int uiBox ;
typedef int uiAreaHandler ;
struct TYPE_3__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;
struct TYPE_4__ {TYPE_1__ ah; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (char*) ;
 int * FUNC_10 () ;
 int * FUNC_11 (char*) ;

uiGroup *FUNC_12(void)
{
 uiGroup *VAR_13;
 uiBox *VAR_14, *VAR_15;

 VAR_3.ah.Draw = VAR_5;
 VAR_3.ah.MouseEvent = VAR_8;
 VAR_3.ah.MouseCrossed = VAR_7;
 VAR_3.ah.DragBroken = VAR_4;
 VAR_3.ah.KeyEvent = VAR_6;

 VAR_13 = FUNC_0("Arc Test");

 VAR_14 = FUNC_2();
 FUNC_7(VAR_13, FUNC_5(VAR_14));

 VAR_0 = FUNC_8((uiAreaHandler *) (&VAR_3));
 FUNC_3(VAR_14, FUNC_5(VAR_0), 1);

 VAR_15 = FUNC_1();
 FUNC_3(VAR_14, FUNC_5(VAR_15), 0);

 FUNC_3(VAR_15, FUNC_5(FUNC_11("Start Angle")), 0);
 VAR_11 = FUNC_10();
 FUNC_6(VAR_11, VAR_2, ((void*)0));
 FUNC_3(VAR_15, FUNC_5(VAR_11), 1);

 VAR_15 = FUNC_1();
 FUNC_3(VAR_14, FUNC_5(VAR_15), 0);

 FUNC_3(VAR_15, FUNC_5(FUNC_11("Sweep")), 0);
 VAR_12 = FUNC_10();
 FUNC_6(VAR_12, VAR_2, ((void*)0));
 FUNC_3(VAR_15, FUNC_5(VAR_12), 1);

 VAR_9 = FUNC_9("Negative");
 FUNC_4(VAR_9, VAR_1, ((void*)0));
 FUNC_3(VAR_14, FUNC_5(VAR_9), 0);

 VAR_10 = FUNC_9("Radians");
 FUNC_4(VAR_10, VAR_1, ((void*)0));
 FUNC_3(VAR_14, FUNC_5(VAR_10), 0);

 return VAR_13;
}
