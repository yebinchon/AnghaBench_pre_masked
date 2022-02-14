
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* func_ijkio_on_app_event ) (TYPE_1__*,int ,void*,int) ;} ;
typedef TYPE_1__ IjkIOApplicationContext ;
typedef int IjkIOAppCacheStatistic ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,void*,int) ;

void FUNC_1(IjkIOApplicationContext *VAR_1, IjkIOAppCacheStatistic *VAR_2) {
    if (VAR_1 && VAR_1->func_ijkio_on_app_event)
        VAR_1->func_ijkio_on_app_event(VAR_1, VAR_0, (void *)VAR_2, sizeof(IjkIOAppCacheStatistic));
}
