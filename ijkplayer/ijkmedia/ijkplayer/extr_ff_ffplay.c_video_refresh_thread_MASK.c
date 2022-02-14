
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ show_mode; scalar_t__ force_refresh; int paused; int abort_request; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_5__ {TYPE_1__* is; } ;
typedef TYPE_2__ FFPlayer ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,double*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
    FFPlayer *VAR_3 = VAR_2;
    VideoState *VAR_4 = VAR_3->is;
    double VAR_5 = 0.0;
    while (!VAR_4->abort_request) {
        if (VAR_5 > 0.0)
            FUNC_0((int)(int64_t)(VAR_5 * 1000000.0));
        VAR_5 = VAR_0;
        if (VAR_4->show_mode != VAR_1 && (!VAR_4->paused || VAR_4->force_refresh))
            FUNC_1(VAR_3, &VAR_5);
    }

    return 0;
}
