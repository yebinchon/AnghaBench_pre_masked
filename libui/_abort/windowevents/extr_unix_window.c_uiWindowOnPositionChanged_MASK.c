
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* onPositionChanged ) (TYPE_1__*,void*) ;void* onPositionChangedData; } ;
typedef TYPE_1__ uiWindow ;



void FUNC_0(uiWindow *VAR_0, void (*VAR_1)(uiWindow *, void *), void *VAR_2)
{
 VAR_0->onPositionChanged = VAR_1;
 VAR_0->onPositionChangedData = VAR_2;
}
