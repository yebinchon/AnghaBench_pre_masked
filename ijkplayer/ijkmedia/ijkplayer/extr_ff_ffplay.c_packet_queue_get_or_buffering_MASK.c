
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int packet_buffering; } ;
struct TYPE_7__ {scalar_t__ is_buffer_indicator; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ FFPlayer ;
typedef int AVPacket ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int,int*) ;

__attribute__((used)) static int FUNC_4(FFPlayer *VAR_0, PacketQueue *VAR_1, AVPacket *VAR_2, int *VAR_3, int *VAR_4)
{
    FUNC_0(VAR_4);
    if (!VAR_0->packet_buffering)
        return FUNC_3(VAR_1, VAR_2, 1, VAR_3);

    while (1) {
        int VAR_5 = FUNC_3(VAR_1, VAR_2, 0, VAR_3);
        if (VAR_5 < 0)
            return -1;
        else if (VAR_5 == 0) {
            if (VAR_1->is_buffer_indicator && !*VAR_4)
                FUNC_2(VAR_0, 1);
            VAR_5 = FUNC_3(VAR_1, VAR_2, 1, VAR_3);
            if (VAR_5 < 0)
                return -1;
        }

        if (*VAR_4 == *VAR_3) {
            FUNC_1(VAR_2);
            continue;
        }
        else
            break;
    }

    return 1;
}
