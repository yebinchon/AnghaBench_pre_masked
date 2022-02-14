
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* onSelected ) (TYPE_1__*,void*) ;void* onSelectedData; } ;
typedef TYPE_1__ uiRadioButtons ;



void FUNC_0(uiRadioButtons *VAR_0, void (*VAR_1)(uiRadioButtons *, void *), void *VAR_2)
{
 VAR_0->onSelected = VAR_1;
 VAR_0->onSelectedData = VAR_2;
}
