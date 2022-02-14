
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_18__ {int ijkio_interrupt_callback; scalar_t__ cache_info_map; int cache_file_path; } ;
struct TYPE_17__ {int value; } ;
struct TYPE_16__ {int auto_save_map; scalar_t__ cur_ffmpeg_ctx; scalar_t__ ijk_ctx_map; TYPE_8__* ijkio_app_ctx; int ijkio_interrupt_callback; int cache_map_path; } ;
struct TYPE_15__ {struct TYPE_15__* priv_data; TYPE_1__* prot; int state; TYPE_8__* ijkio_app_ctx; } ;
struct TYPE_14__ {int (* url_open2 ) (TYPE_2__*,char const*,int,int **) ;int (* url_close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOManagerContext ;
typedef TYPE_4__ IjkAVDictionaryEntry ;
typedef int IjkAVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__**,char const*) ;
 int FUNC_6 (TYPE_8__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int *,int) ;
 int FUNC_10 (TYPE_2__*,char const*,int,int **) ;
 int FUNC_11 (TYPE_2__*) ;

int FUNC_12(IjkIOManagerContext *VAR_2, const char *VAR_3, int VAR_4, IjkAVDictionary **VAR_5) {
    int VAR_6 = -1;
    int VAR_7 = 0;
    if (!VAR_2)
        return VAR_6;

    if (!VAR_2->ijkio_app_ctx) {
        return -1;
    }

    IjkAVDictionaryEntry *VAR_8 = ((void*)0);
    VAR_8 = FUNC_0(*VAR_5, "cache_file_path", ((void*)0), VAR_1);
    if (VAR_8) {
        FUNC_8(VAR_2->ijkio_app_ctx->cache_file_path, VAR_8->value);
    }

    VAR_8 = FUNC_0(*VAR_5, "cache_map_path", ((void*)0), VAR_1);
    if (VAR_8) {
        FUNC_8(VAR_2->cache_map_path, VAR_8->value);

        VAR_8 = FUNC_0(*VAR_5, "auto_save_map", ((void*)0), VAR_1);
        if (VAR_8) {
            VAR_2->auto_save_map = (int)FUNC_9(VAR_8->value, ((void*)0), 10);
        }

        if (VAR_2->ijkio_app_ctx->cache_info_map && !FUNC_4(VAR_2->ijkio_app_ctx->cache_info_map)) {
            VAR_8 = FUNC_0(*VAR_5, "parse_cache_map", ((void*)0), VAR_1);
            if (VAR_8) {
                VAR_7 = (int)FUNC_9(VAR_8->value, ((void*)0), 10);
                if (VAR_7) {
                    FUNC_6(VAR_2->ijkio_app_ctx, VAR_2->cache_map_path);
                }
            }
        }
    }

    VAR_2->ijkio_app_ctx->ijkio_interrupt_callback = VAR_2->ijkio_interrupt_callback;

    IjkURLContext *VAR_9 = ((void*)0);
    FUNC_5(&VAR_9, VAR_3);
    if (VAR_9) {
        VAR_9->ijkio_app_ctx = VAR_2->ijkio_app_ctx;
        if (VAR_2->ijk_ctx_map) {
            FUNC_7(VAR_2);
            VAR_9->state = VAR_0;
            FUNC_2(VAR_2->ijk_ctx_map, (int64_t)(intptr_t)VAR_2->cur_ffmpeg_ctx, VAR_9);
        }
        VAR_6 = VAR_9->prot->url_open2(VAR_9, VAR_3, VAR_4, VAR_5);
        if (VAR_6 != 0)
            goto fail;

        return VAR_6;
    }

fail:
    if (VAR_9) {
        if (VAR_9->prot && VAR_9->prot->url_close)
            VAR_6 = VAR_9->prot->url_close(VAR_9);

        if (VAR_2->ijk_ctx_map) {
            FUNC_3(VAR_2->ijk_ctx_map, (int64_t)(intptr_t)VAR_2->cur_ffmpeg_ctx);
        }
        FUNC_1(&VAR_9->priv_data);
        FUNC_1(&VAR_9);
    }
    return -1;
}
