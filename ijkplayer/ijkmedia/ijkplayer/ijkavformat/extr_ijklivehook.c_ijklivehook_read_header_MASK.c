
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int filename; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int size; scalar_t__ retry_counter; int url; } ;
struct TYPE_9__ {int discontinuity; TYPE_1__ io_control; int open_opts; scalar_t__ app_ctx_intptr; int * app_ctx; } ;
typedef TYPE_2__ Context ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;
typedef int AVApplicationContext ;



 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int **,char*,int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,char*,char const**) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_1, AVDictionary **VAR_2)
{
    Context *VAR_3 = VAR_1->priv_data;
    const char *VAR_4 = ((void*)0);
    int VAR_5 = -1;

    VAR_3->app_ctx = (AVApplicationContext *)(intptr_t)VAR_3->app_ctx_intptr;
    FUNC_4(VAR_1->filename, "ijklivehook:", &VAR_4);

    VAR_3->io_control.size = sizeof(VAR_3->io_control);
    FUNC_7(VAR_3->io_control.url, VAR_4, sizeof(VAR_3->io_control.url));

    if (FUNC_3(VAR_3->io_control.url, "rtmp", ((void*)0)) ||
        FUNC_3(VAR_3->io_control.url, "rtsp", ((void*)0))) {

        FUNC_2(VAR_1, VAR_0, "remove 'timeout' option for rtmp.\n");
        FUNC_1(VAR_2, "timeout", ((void*)0), 0);
    }

    if (VAR_2)
        FUNC_0(&VAR_3->open_opts, *VAR_2, 0);

    VAR_3->io_control.retry_counter = 0;
    VAR_5 = FUNC_5(VAR_1);
    if (VAR_5) {
        VAR_5 = 128;
        goto fail;
    }
    VAR_5 = FUNC_6(VAR_1);
    while (VAR_5 < 0) {

        switch (VAR_5) {
            case 128:
                goto fail;
        }

        VAR_3->io_control.retry_counter++;
        VAR_5 = FUNC_5(VAR_1);
        if (VAR_5) {
            VAR_5 = 128;
            goto fail;
        }

        VAR_3->discontinuity = 1;
        VAR_5 = FUNC_6(VAR_1);
    }

    return 0;
fail:
    return VAR_5;
}
