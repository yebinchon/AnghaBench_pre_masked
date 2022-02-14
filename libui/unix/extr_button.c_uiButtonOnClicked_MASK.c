
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* onClicked ) (TYPE_1__*,void*) ;void* onClickedData; } ;
typedef TYPE_1__ uiButton ;



void FUNC_0(uiButton *VAR_0, void (*VAR_1)(uiButton *, void *), void *VAR_2)
{
 VAR_0->onClicked = VAR_1;
 VAR_0->onClickedData = VAR_2;
}
