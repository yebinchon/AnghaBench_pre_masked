
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int value; } ;
struct TYPE_14__ {int probesize; int format_probesize; int max_analyze_duration; int fps_probe_size; int max_ts_probe; int nb_streams; int * streams; int interrupt_callback; int * metadata; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int url; } ;
struct TYPE_13__ {TYPE_3__* inner; TYPE_1__ io_control; scalar_t__ open_opts; } ;
typedef TYPE_2__ Context ;
typedef int AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,scalar_t__,int ) ;
 int FUNC_2 (int **) ;
 TYPE_4__* FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int **,char*,int,int ) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__**) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int * FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__**,int ,int *,int **) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int ,int *,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_2)
{
    Context *VAR_3 = VAR_2->priv_data;
    AVDictionary *VAR_4 = ((void*)0);
    AVFormatContext *VAR_5 = ((void*)0);
    int VAR_6 = -1;
    int VAR_7 = 0;
    AVDictionaryEntry *VAR_8 = ((void*)0);
    int VAR_9 = 0;

    VAR_5 = FUNC_5();
    if (!VAR_5) {
        VAR_6 = FUNC_0(VAR_1);
        goto fail;
    }

    if (VAR_3->open_opts)
        FUNC_1(&VAR_4, VAR_3->open_opts, 0);

    FUNC_4(&VAR_4, "probesize", VAR_2->probesize, 0);
    FUNC_4(&VAR_4, "formatprobesize", VAR_2->format_probesize, 0);
    FUNC_4(&VAR_4, "analyzeduration", VAR_2->max_analyze_duration, 0);
    FUNC_4(&VAR_4, "fpsprobesize", VAR_2->fps_probe_size, 0);
    FUNC_4(&VAR_4, "max_ts_probe", VAR_2->max_ts_probe, 0);

    VAR_8 = FUNC_3(VAR_4, "skip-calc-frame-rate", ((void*)0), VAR_0);
    if (VAR_8) {
        VAR_9 = (int) FUNC_11(VAR_8->value, ((void*)0), 10);
        if (VAR_9 > 0) {
            FUNC_4(&VAR_5->metadata, "skip-calc-frame-rate", VAR_9, 0);
        }
    }

    VAR_5->interrupt_callback = VAR_2->interrupt_callback;
    VAR_6 = FUNC_9(&VAR_5, VAR_3->io_control.url, ((void*)0), &VAR_4);
    if (VAR_6 < 0)
        goto fail;

    VAR_6 = FUNC_7(VAR_5, ((void*)0));
    if (VAR_6 < 0)
        goto fail;

    for (VAR_7 = 0; VAR_7 < VAR_5->nb_streams; VAR_7++) {
        AVStream *VAR_10 = FUNC_8(VAR_2, ((void*)0));
        if (!VAR_10) {
            VAR_6 = FUNC_0(VAR_1);
            goto fail;
        }

        VAR_6 = FUNC_10(VAR_10, VAR_5->streams[VAR_7]);
        if (VAR_6 < 0)
            goto fail;
    }

    FUNC_6(&VAR_3->inner);
    VAR_3->inner = VAR_5;
    VAR_5 = ((void*)0);
    VAR_6 = 0;
fail:
    FUNC_2(&VAR_4);
    FUNC_6(&VAR_5);
    return VAR_6;
}
