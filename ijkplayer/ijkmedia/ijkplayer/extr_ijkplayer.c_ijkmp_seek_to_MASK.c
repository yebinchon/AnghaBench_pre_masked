
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ IjkMediaPlayer ;


 int FUNC_0 (char*,long,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(IjkMediaPlayer *VAR_0, long VAR_1)
{
    FUNC_1(VAR_0);
    FUNC_0("ijkmp_seek_to(%ld)\n", VAR_1);
    FUNC_3(&VAR_0->mutex);
    int VAR_2 = FUNC_2(VAR_0, VAR_1);
    FUNC_4(&VAR_0->mutex);
    FUNC_0("ijkmp_seek_to(%ld)=%d\n", VAR_1, VAR_2);

    return VAR_2;
}
