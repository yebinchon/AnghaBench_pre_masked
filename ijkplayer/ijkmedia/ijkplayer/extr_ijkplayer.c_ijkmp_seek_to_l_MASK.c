
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int seek_req; long seek_msec; int ffplayer; int mp_state; } ;
typedef TYPE_1__ IjkMediaPlayer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(IjkMediaPlayer *VAR_1, long VAR_2)
{
    FUNC_1(VAR_1);

    FUNC_0(FUNC_4(VAR_1->mp_state));

    VAR_1->seek_req = 1;
    VAR_1->seek_msec = VAR_2;
    FUNC_3(VAR_1->ffplayer, VAR_0);
    FUNC_2(VAR_1->ffplayer, VAR_0, (int)VAR_2);


    return 0;
}
