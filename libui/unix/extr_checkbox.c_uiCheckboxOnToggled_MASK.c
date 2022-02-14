
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* onToggled ) (TYPE_1__*,void*) ;void* onToggledData; } ;
typedef TYPE_1__ uiCheckbox ;



void FUNC_0(uiCheckbox *VAR_0, void (*VAR_1)(uiCheckbox *, void *), void *VAR_2)
{
 VAR_0->onToggled = VAR_1;
 VAR_0->onToggledData = VAR_2;
}
