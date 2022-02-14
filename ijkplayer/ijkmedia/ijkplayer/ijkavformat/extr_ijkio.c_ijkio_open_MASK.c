
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int interrupt_callback; TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {scalar_t__ io_manager_ctx; } ;
struct TYPE_8__ {TYPE_3__* cur_ffmpeg_ctx; int * ijkio_interrupt_callback; } ;
typedef TYPE_2__ IjkIOManagerContext ;
typedef int IjkAVIOInterruptCB ;
typedef int IjkAVDictionary ;
typedef TYPE_3__ Context ;
typedef int AVDictionary ;


 int FUNC_0 (char const*,char*,char const**) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char const*,int,int **) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_0, const char *VAR_1, int VAR_2, AVDictionary **VAR_3)
{
    Context *VAR_4 = VAR_0->priv_data;
    int VAR_5 = -1;

    if (!VAR_4 || !VAR_4->io_manager_ctx)
        return -1;

    IjkIOManagerContext *VAR_6 = (IjkIOManagerContext *)(VAR_4->io_manager_ctx);
    VAR_6->ijkio_interrupt_callback = (IjkAVIOInterruptCB *)&(VAR_0->interrupt_callback);

    FUNC_0(VAR_1, "ijkio:", &VAR_1);
    IjkAVDictionary *VAR_7 = ((void*)0);
    FUNC_2(&VAR_7, *VAR_3);

    VAR_6->cur_ffmpeg_ctx = VAR_4;

    VAR_5 = FUNC_4(VAR_6, VAR_1, VAR_2, &VAR_7);
    FUNC_1(&VAR_7);

    if (VAR_5 != 0) {
        FUNC_3(VAR_6);
    }

    return VAR_5;
}
