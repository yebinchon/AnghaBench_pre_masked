
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int onToggledSignal; int toggleButton; } ;
typedef TYPE_1__ uiCheckbox ;
typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(uiCheckbox *VAR_2, int VAR_3)
{
 gboolean VAR_4;

 VAR_4 = VAR_0;
 if (VAR_3)
  VAR_4 = VAR_1;

 FUNC_0(VAR_2->toggleButton, VAR_2->onToggledSignal);
 FUNC_2(VAR_2->toggleButton, VAR_4);
 FUNC_1(VAR_2->toggleButton, VAR_2->onToggledSignal);
}
