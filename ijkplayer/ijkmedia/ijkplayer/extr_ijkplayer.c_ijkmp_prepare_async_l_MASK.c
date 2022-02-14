
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int msg_queue; } ;
struct TYPE_9__ {struct TYPE_9__* data_source; TYPE_5__* ffplayer; int _msg_thread; int msg_thread; int mp_state; } ;
typedef TYPE_1__ IjkMediaPlayer ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(IjkMediaPlayer *VAR_9)
{
    FUNC_2(VAR_9);

    FUNC_0(VAR_9->mp_state, VAR_4);

    FUNC_0(VAR_9->mp_state, VAR_0);
    FUNC_0(VAR_9->mp_state, VAR_6);
    FUNC_0(VAR_9->mp_state, VAR_7);
    FUNC_0(VAR_9->mp_state, VAR_5);
    FUNC_0(VAR_9->mp_state, VAR_1);

    FUNC_0(VAR_9->mp_state, VAR_3);
    FUNC_0(VAR_9->mp_state, VAR_2);

    FUNC_2(VAR_9->data_source);

    FUNC_4(VAR_9, VAR_0);

    FUNC_6(&VAR_9->ffplayer->msg_queue);


    FUNC_5(VAR_9);
    VAR_9->msg_thread = FUNC_1(&VAR_9->_msg_thread, VAR_8, VAR_9, "ff_msg_loop");



    int VAR_10 = FUNC_3(VAR_9->ffplayer, VAR_9->data_source);
    if (VAR_10 < 0) {
        FUNC_4(VAR_9, VAR_3);
        return VAR_10;
    }

    return 0;
}
