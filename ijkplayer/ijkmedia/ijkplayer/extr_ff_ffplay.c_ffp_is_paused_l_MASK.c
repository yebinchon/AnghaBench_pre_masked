
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int paused; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_6__ {TYPE_1__* is; } ;
typedef TYPE_2__ FFPlayer ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(FFPlayer *VAR_0)
{
    FUNC_0(VAR_0);
    VideoState *VAR_1 = VAR_0->is;
    if (!VAR_1)
        return 1;

    return VAR_1->paused;
}
