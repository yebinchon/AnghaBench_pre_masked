
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int inner; } ;
struct TYPE_6__ {TYPE_1__* ijkio_app_ctx; TYPE_3__* priv_data; } ;
struct TYPE_5__ {scalar_t__ ijkio_interrupt_callback; } ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOFFioContext ;
typedef int IjkAVDictionary ;
typedef int AVIOInterruptCB ;
typedef int AVDictionary ;


 int FUNC_0 (int **) ;
 int FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (int *,char const*,int,int *,int **,int *,int *,int *) ;
 int FUNC_3 (int **,int *) ;

__attribute__((used)) static int FUNC_4(IjkURLContext *VAR_0, const char *VAR_1, int VAR_2, IjkAVDictionary **VAR_3) {
    int VAR_4 = -1;

    IjkIOFFioContext *VAR_5= VAR_0->priv_data;
    if (!VAR_5)
        return -1;

    AVDictionary *VAR_6 = ((void*)0);
    FUNC_3(&VAR_6, *VAR_3);

    FUNC_1(VAR_1, "ffio:", &VAR_1);
    if (VAR_0->ijkio_app_ctx) {
        VAR_4 = FUNC_2(&VAR_5->inner, VAR_1, VAR_2, (AVIOInterruptCB *)VAR_0->ijkio_app_ctx->ijkio_interrupt_callback,
                                &VAR_6, ((void*)0), ((void*)0), ((void*)0));
    } else {
        VAR_4 = -1;
    }

    FUNC_0(&VAR_6);

    return VAR_4;
}
