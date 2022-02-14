
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* changing; int buttons; } ;
typedef TYPE_1__ uiRadioButtons ;
typedef void* gboolean ;
typedef int GtkToggleButton ;


 void* VAR_0 ;
 int * FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(uiRadioButtons *VAR_2, int VAR_3)
{
 GtkToggleButton *VAR_4;
 gboolean VAR_5;

 VAR_5 = VAR_1;

 if (VAR_3 == -1) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 == -1)
   return;
  VAR_5 = VAR_0;
 }
 VAR_4 = FUNC_0(FUNC_1(VAR_2->buttons, VAR_3));

 VAR_2->changing = VAR_1;
 FUNC_2(VAR_4, VAR_5);
 VAR_2->changing = VAR_0;
}
