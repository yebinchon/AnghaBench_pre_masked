
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int step; scalar_t__ paused; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_6__ {TYPE_1__* is; } ;
typedef TYPE_2__ FFPlayer ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(FFPlayer *VAR_0)
{
    VideoState *VAR_1 = VAR_0->is;
    VAR_1->step = 1;

    if (VAR_1->paused)
        FUNC_0(VAR_0, 0);
}
