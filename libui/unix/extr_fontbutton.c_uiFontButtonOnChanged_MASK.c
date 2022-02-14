
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* onChanged ) (TYPE_1__*,void*) ;void* onChangedData; } ;
typedef TYPE_1__ uiFontButton ;



void FUNC_0(uiFontButton *VAR_0, void (*VAR_1)(uiFontButton *, void *), void *VAR_2)
{
 VAR_0->onChanged = VAR_1;
 VAR_0->onChangedData = VAR_2;
}
