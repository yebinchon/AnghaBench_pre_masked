
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int video_st; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_5__ {TYPE_1__* is; } ;
typedef TYPE_2__ FFPlayer ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(FFPlayer *VAR_0)
{
    VideoState *VAR_1 = VAR_0->is;
    if (!VAR_1)
        return 0;

    int VAR_2 = FUNC_1((int)((int64_t)FUNC_4(FUNC_2(FUNC_3(VAR_1->video_st))) % 360));
    switch (VAR_2) {
        case 0:
        case 90:
        case 180:
        case 270:
            break;
        case 360:
            VAR_2 = 0;
            break;
        default:
            FUNC_0("Unknown rotate degress: %d\n", VAR_2);
            VAR_2 = 0;
            break;
    }

    return VAR_2;
}
