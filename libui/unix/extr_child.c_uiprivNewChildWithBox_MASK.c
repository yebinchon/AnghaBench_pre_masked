
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * box; int widget; } ;
typedef TYPE_1__ uiprivChild ;
typedef int uiControl ;
typedef int GtkWidget ;
typedef int GtkContainer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_9 (int *,int *,int ) ;

uiprivChild *FUNC_10(uiControl *VAR_3, uiControl *VAR_4, GtkContainer *VAR_5, int VAR_6)
{
 uiprivChild *VAR_7;
 GtkWidget *VAR_8;

 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_8 = FUNC_1(VAR_1, 0);
 FUNC_7(VAR_8);
 VAR_7 = FUNC_9(VAR_3, VAR_4, FUNC_0(VAR_8));
 FUNC_4(VAR_7->widget, VAR_2);
 FUNC_3(VAR_7->widget, VAR_0);
 FUNC_6(VAR_7->widget, VAR_2);
 FUNC_5(VAR_7->widget, VAR_0);
 VAR_7->box = VAR_8;
 FUNC_2(VAR_5, VAR_7->box);
 FUNC_8(VAR_7, VAR_6);
 return VAR_7;
}
