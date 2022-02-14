
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int children; int stretchygroup; int container; } ;
typedef TYPE_1__ uiForm ;
struct formChild {int oldvalign; int oldvexpand; int oldhalign; int oldhexpand; scalar_t__ stretchy; int c; int label; } ;
typedef int GtkWidget ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 struct formChild* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;

void FUNC_13(uiForm *VAR_1, int VAR_2)
{
 struct formChild *VAR_3;
 GtkWidget *VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 VAR_4 = FUNC_0(FUNC_9(VAR_3->c));

 FUNC_4(VAR_3->label);

 FUNC_10(VAR_3->c, ((void*)0));
 FUNC_12(FUNC_11(VAR_3->c), VAR_1->container, VAR_0);

 if (VAR_3->stretchy)
  FUNC_3(VAR_1->stretchygroup, VAR_4);
 FUNC_6(VAR_4, VAR_3->oldhexpand);
 FUNC_5(VAR_4, VAR_3->oldhalign);
 FUNC_8(VAR_4, VAR_3->oldvexpand);
 FUNC_7(VAR_4, VAR_3->oldvalign);

 FUNC_2(VAR_1->children, VAR_2);
}
