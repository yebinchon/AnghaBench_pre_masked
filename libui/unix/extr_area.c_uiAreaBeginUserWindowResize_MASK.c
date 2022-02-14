
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uiWindowResizeEdge ;
struct TYPE_5__ {TYPE_1__* dragevent; int widget; } ;
typedef TYPE_2__ uiArea ;
struct TYPE_4__ {int time; int y_root; int x_root; int button; } ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(uiArea *VAR_1, uiWindowResizeEdge VAR_2)
{
 GtkWidget *VAR_3;

 if (VAR_1->dragevent == ((void*)0))
  FUNC_5("cannot call uiAreaBeginUserWindowResize() outside of a Mouse() with Down != 0");


 VAR_3 = FUNC_2(VAR_1->widget);
 if (VAR_3 == ((void*)0)) {

  return;
 }

 if (!FUNC_3(VAR_3)) {

  return;
 }
 if (!FUNC_0(VAR_3)) {

  return;
 }
 FUNC_4(FUNC_1(VAR_3),
  VAR_0[VAR_2],
  VAR_1->dragevent->button,
  VAR_1->dragevent->x_root,
  VAR_1->dragevent->y_root,
  VAR_1->dragevent->time);
}
