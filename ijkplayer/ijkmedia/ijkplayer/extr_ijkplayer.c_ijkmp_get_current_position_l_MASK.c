
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long seek_msec; int ffplayer; scalar_t__ seek_req; } ;
typedef TYPE_1__ IjkMediaPlayer ;


 long FUNC_0 (int ) ;

__attribute__((used)) static long FUNC_1(IjkMediaPlayer *VAR_0)
{
    if (VAR_0->seek_req)
        return VAR_0->seek_msec;
    return FUNC_0(VAR_0->ffplayer);
}
