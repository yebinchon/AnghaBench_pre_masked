
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* buttons; } ;
typedef TYPE_1__ uiRadioButtons ;
typedef scalar_t__ guint ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef int GtkToggleButton ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(uiRadioButtons *VAR_0)
{
 GtkToggleButton *VAR_1;
 guint VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->buttons->len; VAR_2++) {
  VAR_1 = FUNC_0(FUNC_1(VAR_0->buttons, VAR_2));
  if (FUNC_2(VAR_1))
   return VAR_2;
 }
 return -1;
}
