
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int buffering_on; int seek_buffering; scalar_t__ seek_req; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_8__ {TYPE_1__* is; int packet_buffering; } ;
typedef TYPE_2__ FFPlayer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(FFPlayer *VAR_3, int VAR_4)
{
    if (!VAR_3->packet_buffering)
        return;

    VideoState *VAR_5 = VAR_3->is;
    if (VAR_4 && !VAR_5->buffering_on) {
        FUNC_0(VAR_3, VAR_0, "ffp_toggle_buffering_l: start\n");
        VAR_5->buffering_on = 1;
        FUNC_2(VAR_3);
        if (VAR_5->seek_req) {
            VAR_5->seek_buffering = 1;
            FUNC_1(VAR_3, VAR_2, 1);
        } else {
            FUNC_1(VAR_3, VAR_2, 0);
        }
    } else if (!VAR_4 && VAR_5->buffering_on){
        FUNC_0(VAR_3, VAR_0, "ffp_toggle_buffering_l: end\n");
        VAR_5->buffering_on = 0;
        FUNC_2(VAR_3);
        if (VAR_5->seek_buffering) {
            VAR_5->seek_buffering = 0;
            FUNC_1(VAR_3, VAR_1, 1);
        } else {
            FUNC_1(VAR_3, VAR_1, 0);
        }
    }
}
