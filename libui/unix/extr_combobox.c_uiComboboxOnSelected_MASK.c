
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* onSelected ) (TYPE_1__*,void*) ;void* onSelectedData; } ;
typedef TYPE_1__ uiCombobox ;



void FUNC_0(uiCombobox *VAR_0, void (*VAR_1)(uiCombobox *VAR_2, void *VAR_3), void *VAR_4)
{
 VAR_0->onSelected = VAR_1;
 VAR_0->onSelectedData = VAR_4;
}
