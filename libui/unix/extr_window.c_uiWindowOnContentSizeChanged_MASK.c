
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* onContentSizeChanged ) (TYPE_1__*,void*) ;void* onContentSizeChangedData; } ;
typedef TYPE_1__ uiWindow ;



void FUNC_0(uiWindow *VAR_0, void (*VAR_1)(uiWindow *, void *), void *VAR_2)
{
 VAR_0->onContentSizeChanged = VAR_1;
 VAR_0->onContentSizeChangedData = VAR_2;
}
