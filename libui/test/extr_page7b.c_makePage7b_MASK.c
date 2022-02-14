
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
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (int *,int,int) ;

uiGroup *FUNC_7(void)
{
 uiGroup *VAR_8;
 uiBox *VAR_9;

 VAR_1.ah.Draw = VAR_3;
 VAR_1.ah.MouseEvent = VAR_6;
 VAR_1.ah.MouseCrossed = VAR_5;
 VAR_1.ah.DragBroken = VAR_2;
 VAR_1.ah.KeyEvent = VAR_4;

 VAR_8 = FUNC_0("Scrolling Mouse Test");

 VAR_9 = FUNC_1();
 FUNC_4(VAR_8, FUNC_3(VAR_9));

 VAR_0 = FUNC_6((uiAreaHandler *) (&VAR_1), 5000, 5000);
 FUNC_2(VAR_9, FUNC_3(VAR_0), 1);

 VAR_7 = FUNC_5("");
 FUNC_2(VAR_9, FUNC_3(VAR_7), 0);

 return VAR_8;
}
