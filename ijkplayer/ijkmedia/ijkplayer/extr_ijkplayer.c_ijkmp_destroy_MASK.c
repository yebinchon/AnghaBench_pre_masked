
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_source; int mutex; int * msg_thread; int ffplayer; } ;
typedef TYPE_1__ IjkMediaPlayer ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) inline static void FUNC_5(IjkMediaPlayer *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_1(&VAR_0->ffplayer);
    if (VAR_0->msg_thread) {
        FUNC_0(VAR_0->msg_thread, ((void*)0));
        VAR_0->msg_thread = ((void*)0);
    }

    FUNC_4(&VAR_0->mutex);

    FUNC_2((void**)&VAR_0->data_source);
    FUNC_3(VAR_0, 0, sizeof(IjkMediaPlayer));
    FUNC_2((void**)&VAR_0);
}
