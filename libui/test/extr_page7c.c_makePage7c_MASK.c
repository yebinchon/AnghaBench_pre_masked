
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiGroup ;
typedef int uiAreaHandler ;
struct TYPE_3__ {int KeyEvent; int DragBroken; int MouseCrossed; int MouseEvent; int Draw; } ;
struct TYPE_4__ {TYPE_1__ ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

uiGroup *FUNC_4(void)
{
 uiGroup *VAR_8;

 VAR_2.ah.Draw = VAR_4;
 VAR_2.ah.MouseEvent = VAR_7;
 VAR_2.ah.MouseCrossed = VAR_6;
 VAR_2.ah.DragBroken = VAR_3;
 VAR_2.ah.KeyEvent = VAR_5;

 VAR_8 = FUNC_0("Scrolling Drawing Test");

 VAR_0 = FUNC_3((uiAreaHandler *) (&VAR_2),
  VAR_1, VAR_1);
 FUNC_2(VAR_8, FUNC_1(VAR_0));

 return VAR_8;
}
