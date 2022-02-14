
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* buttons; int container; } ;
typedef TYPE_1__ uiRadioButtons ;
struct TYPE_7__ {scalar_t__ len; } ;
typedef int GtkWidget ;
typedef int GtkRadioButton ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *,char*,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int *) ;
 int * FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

void FUNC_8(uiRadioButtons *VAR_1, const char *VAR_2)
{
 GtkWidget *VAR_3;
 GtkRadioButton *VAR_4;

 VAR_4 = ((void*)0);
 if (VAR_1->buttons->len > 0)
  VAR_4 = FUNC_0(FUNC_3(VAR_1->buttons, 0));
 VAR_3 = FUNC_6(VAR_4, VAR_2);
 FUNC_4(VAR_3, "toggled", FUNC_1(VAR_0), VAR_1);
 FUNC_5(VAR_1->container, VAR_3);
 FUNC_2(VAR_1->buttons, VAR_3);
 FUNC_7(VAR_3);
}
