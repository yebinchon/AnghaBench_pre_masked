
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int widget; } ;
typedef TYPE_1__ uiWindow ;
typedef int gint ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_9__ {int width; int height; } ;
typedef TYPE_2__ GtkAllocation ;
typedef int GdkWindow ;
typedef int GdkScreen ;
typedef TYPE_3__ GdkRectangle ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,TYPE_3__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

void FUNC_6(uiWindow *VAR_0)
{
 gint VAR_1, VAR_2;
 GtkAllocation VAR_3;
 GdkWindow *VAR_4;
 GdkScreen *VAR_5;
 GdkRectangle VAR_6;

 FUNC_3(VAR_0->widget, &VAR_3);
 VAR_4 = FUNC_4(VAR_0->widget);
 VAR_5 = FUNC_2(VAR_4);
 FUNC_1(VAR_5,
  FUNC_0(VAR_5, VAR_4),
  &VAR_6);

 VAR_1 = (VAR_6.width - VAR_3.width) / 2;
 VAR_2 = (VAR_6.height - VAR_3.height) / 2;

 FUNC_5(VAR_0, VAR_1, VAR_2);
}
