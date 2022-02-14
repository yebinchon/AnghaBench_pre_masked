
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ seek_pos; TYPE_1__* ic; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_9__ {scalar_t__ no_time_adjust; TYPE_2__* is; } ;
struct TYPE_7__ {scalar_t__ start_time; } ;
typedef TYPE_3__ FFPlayer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 double FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (double) ;

long FUNC_4(FFPlayer *VAR_1)
{
    FUNC_0(VAR_1);
    VideoState *VAR_2 = VAR_1->is;
    if (!VAR_2 || !VAR_2->ic)
        return 0;

    int64_t VAR_3 = VAR_2->ic->start_time;
    int64_t VAR_4 = 0;
    if (VAR_3 > 0 && VAR_3 != VAR_0)
        VAR_4 = FUNC_1(VAR_3);

    int64_t VAR_5 = 0;
    double VAR_6 = FUNC_2(VAR_2);
    if (FUNC_3(VAR_6)) {
        VAR_5 = FUNC_1(VAR_2->seek_pos);
    } else {
        VAR_5 = VAR_6 * 1000;
    }





    if (VAR_1->no_time_adjust) {
        return (long)VAR_5;
    }

    if (VAR_5 < 0 || VAR_5 < VAR_4)
        return 0;

    int64_t VAR_7 = VAR_5 - VAR_4;
    return (long)VAR_7;
}
