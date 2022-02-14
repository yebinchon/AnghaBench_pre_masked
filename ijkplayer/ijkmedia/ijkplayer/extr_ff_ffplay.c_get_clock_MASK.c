
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* queue_serial; scalar_t__ serial; double pts; double pts_drift; double last_updated; double speed; scalar_t__ paused; } ;
typedef TYPE_1__ Clock ;


 double VAR_0 ;
 double FUNC_0 () ;

__attribute__((used)) static double FUNC_1(Clock *VAR_1)
{
    if (*VAR_1->queue_serial != VAR_1->serial)
        return VAR_0;
    if (VAR_1->paused) {
        return VAR_1->pts;
    } else {
        double VAR_2 = FUNC_0() / 1000000.0;
        return VAR_1->pts_drift + VAR_2 - (VAR_2 - VAR_1->last_updated) * (1.0 - VAR_1->speed);
    }
}
