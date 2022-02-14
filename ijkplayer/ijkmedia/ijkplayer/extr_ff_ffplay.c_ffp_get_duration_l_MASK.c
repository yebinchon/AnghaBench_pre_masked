
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {TYPE_1__* ic; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_8__ {TYPE_2__* is; } ;
struct TYPE_6__ {int duration; } ;
typedef TYPE_3__ FFPlayer ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;

long FUNC_2(FFPlayer *VAR_0)
{
    FUNC_0(VAR_0);
    VideoState *VAR_1 = VAR_0->is;
    if (!VAR_1 || !VAR_1->ic)
        return 0;

    int64_t VAR_2 = FUNC_1(VAR_1->ic->duration);
    if (VAR_2 < 0)
        return 0;

    return (long)VAR_2;
}
