
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dragevent; int widget; } ;
typedef TYPE_2__ uiArea ;
struct TYPE_4__ {int time; int y_root; int x_root; int button; } ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(uiArea *VAR_0)
{
 GtkWidget *VAR_1;

 if (VAR_0->dragevent == ((void*)0))
  FUNC_5("cannot call uiAreaBeginUserWindowMove() outside of a Mouse() with Down != 0");


 VAR_1 = FUNC_2(VAR_0->widget);
 if (VAR_1 == ((void*)0)) {

  return;
 }

 if (!FUNC_3(VAR_1)) {

  return;
 }
 if (!FUNC_0(VAR_1)) {

  return;
 }
 FUNC_4(FUNC_1(VAR_1),
  VAR_0->dragevent->button,
  VAR_0->dragevent->x_root,
  VAR_0->dragevent->y_root,
  VAR_0->dragevent->time);
}
