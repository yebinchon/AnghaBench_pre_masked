
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int start_on_prepared; int msg_queue; } ;
struct TYPE_15__ {int what; scalar_t__ arg1; } ;
struct TYPE_14__ {int restart; int restart_from_beginning; int mutex; TYPE_8__* ffplayer; int mp_state; int seek_msec; int seek_req; } ;
typedef TYPE_1__ IjkMediaPlayer ;
typedef TYPE_2__ AVMessage ;


 int VAR_0 ;






 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_8__*,int ,char*,...) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*,scalar_t__) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_2__*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(IjkMediaPlayer *VAR_6, AVMessage *VAR_7, int VAR_8)
{
    FUNC_1(VAR_6);
    while (1) {
        int VAR_9 = 0;
        int VAR_10 = FUNC_12(&VAR_6->ffplayer->msg_queue, VAR_7, VAR_8);
        if (VAR_10 <= 0)
            return VAR_10;

        switch (VAR_7->what) {
        case 132:
            FUNC_0("ijkmp_get_msg: FFP_MSG_PREPARED\n");
            FUNC_13(&VAR_6->mutex);
            if (VAR_6->mp_state == VAR_1) {
                FUNC_7(VAR_6, VAR_4);
            } else {

                FUNC_2(VAR_6->ffplayer, VAR_0, "FFP_MSG_PREPARED: expecting mp_state==MP_STATE_ASYNC_PREPARING\n");
            }
            if (!VAR_6->ffplayer->start_on_prepared) {
                FUNC_7(VAR_6, VAR_3);
            }
            FUNC_14(&VAR_6->mutex);
            break;

        case 133:
            FUNC_0("ijkmp_get_msg: FFP_MSG_COMPLETED\n");

            FUNC_13(&VAR_6->mutex);
            VAR_6->restart = 1;
            VAR_6->restart_from_beginning = 1;
            FUNC_7(VAR_6, VAR_2);
            FUNC_14(&VAR_6->mutex);
            break;

        case 131:
            FUNC_0("ijkmp_get_msg: FFP_MSG_SEEK_COMPLETE\n");

            FUNC_13(&VAR_6->mutex);
            VAR_6->seek_req = 0;
            VAR_6->seek_msec = 0;
            FUNC_14(&VAR_6->mutex);
            break;

        case 128:
            FUNC_0("ijkmp_get_msg: FFP_REQ_START\n");
            VAR_9 = 1;
            FUNC_13(&VAR_6->mutex);
            if (0 == FUNC_10(VAR_6->mp_state)) {

                if (VAR_6->restart) {
                    if (VAR_6->restart_from_beginning) {
                        FUNC_2(VAR_6->ffplayer, VAR_0, "ijkmp_get_msg: FFP_REQ_START: restart from beginning\n");
                        VAR_10 = FUNC_5(VAR_6->ffplayer, 0);
                        if (VAR_10 == 0)
                            FUNC_7(VAR_6, VAR_5);
                    } else {
                        FUNC_2(VAR_6->ffplayer, VAR_0, "ijkmp_get_msg: FFP_REQ_START: restart from seek pos\n");
                        VAR_10 = FUNC_6(VAR_6->ffplayer);
                        if (VAR_10 == 0)
                            FUNC_7(VAR_6, VAR_5);
                    }
                    VAR_6->restart = 0;
                    VAR_6->restart_from_beginning = 0;
                } else {
                    FUNC_2(VAR_6->ffplayer, VAR_0, "ijkmp_get_msg: FFP_REQ_START: start on fly\n");
                    VAR_10 = FUNC_6(VAR_6->ffplayer);
                    if (VAR_10 == 0)
                        FUNC_7(VAR_6, VAR_5);
                }
            }
            FUNC_14(&VAR_6->mutex);
            break;

        case 130:
            FUNC_0("ijkmp_get_msg: FFP_REQ_PAUSE\n");
            VAR_9 = 1;
            FUNC_13(&VAR_6->mutex);
            if (0 == FUNC_8(VAR_6->mp_state)) {
                int VAR_11 = FUNC_3(VAR_6->ffplayer);
                if (VAR_11 == 0)
                    FUNC_7(VAR_6, VAR_3);
            }
            FUNC_14(&VAR_6->mutex);
            break;

        case 129:
            FUNC_0("ijkmp_get_msg: FFP_REQ_SEEK\n");
            VAR_9 = 1;

            FUNC_13(&VAR_6->mutex);
            if (0 == FUNC_9(VAR_6->mp_state)) {
                VAR_6->restart_from_beginning = 0;
                if (0 == FUNC_4(VAR_6->ffplayer, VAR_7->arg1)) {
                    FUNC_2(VAR_6->ffplayer, VAR_0, "ijkmp_get_msg: FFP_REQ_SEEK: seek to %d\n", (int)VAR_7->arg1);
                }
            }
            FUNC_14(&VAR_6->mutex);
            break;
        }
        if (VAR_9) {
            FUNC_11(VAR_7);
            continue;
        }

        return VAR_10;
    }

    return -1;
}
