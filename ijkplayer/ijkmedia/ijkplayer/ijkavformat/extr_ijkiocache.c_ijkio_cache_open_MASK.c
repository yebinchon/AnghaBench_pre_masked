
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef scalar_t__ int64_t ;
struct TYPE_23__ {struct TYPE_23__* priv_data; TYPE_1__* prot; TYPE_2__* ijkio_app_ctx; } ;
struct TYPE_22__ {int value; } ;
struct TYPE_21__ {int async_open; int cache_file_close; int cur_file_no; int only_read_file; scalar_t__* last_physical_pos; int fd; scalar_t__ cache_physical_pos; scalar_t__ logical_size; int inner_flags; int task_is_running; TYPE_6__* inner; scalar_t__ inner_options; int file_mutex; int cond_wakeup_main; int cond_wakeup_file_background; int cond_wakeup_exit; int threadpool_ctx; void* cache_file_forwards_capacity; int inner_url; TYPE_11__* tree_info; TYPE_2__* ijkio_app_ctx; int cache_info_map; int * cache_file_path; int * cache_count_bytes; void* cache_max_capacity; int ijkio_interrupt_callback; } ;
struct TYPE_20__ {TYPE_2__* ijkio_app_ctx; TYPE_4__* priv_data; } ;
struct TYPE_19__ {scalar_t__ last_physical_pos; int fd; int cache_count_bytes; int cache_info_map; int threadpool_ctx; int * cache_file_path; int ijkio_interrupt_callback; } ;
struct TYPE_18__ {int (* url_close ) (TYPE_6__*) ;} ;
struct TYPE_17__ {scalar_t__ physical_init_pos; int physical_size; scalar_t__ file_size; } ;
typedef TYPE_3__ IjkURLContext ;
typedef TYPE_4__ IjkIOCacheContext ;
typedef int IjkCacheTreeInfo ;
typedef TYPE_5__ IjkAVDictionaryEntry ;
typedef int IjkAVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_11__* FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,int *,int ) ;
 int FUNC_7 (scalar_t__*) ;
 TYPE_5__* FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (TYPE_6__**) ;
 int FUNC_10 (char const*,char*,char const**) ;
 int FUNC_11 (int ) ;
 TYPE_11__* FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ,scalar_t__,TYPE_11__*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int *,int ) ;
 int FUNC_16 (int ,int ,TYPE_3__*,int *,int ) ;
 int FUNC_17 (TYPE_6__**,char const*) ;
 int FUNC_18 (TYPE_3__*,char const*,int,int **) ;
 int VAR_12 ;
 scalar_t__ FUNC_19 (int,scalar_t__,int ) ;
 void* FUNC_20 (int *,int,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int *) ;
 int FUNC_26 (int ,char const*) ;
 scalar_t__ FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (int ,int *,int) ;
 void* FUNC_29 (int ,int *,int) ;
 int FUNC_30 (TYPE_6__*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_31(IjkURLContext *VAR_14, const char *VAR_15, int VAR_16, IjkAVDictionary **VAR_17) {
    IjkIOCacheContext *VAR_18= VAR_14->priv_data;
    int VAR_19 = 0;
    int64_t VAR_20 = 0;
    if (!VAR_18)
        return FUNC_0(VAR_4);

    VAR_18->ijkio_app_ctx = VAR_14->ijkio_app_ctx;
    if (VAR_18->ijkio_app_ctx == ((void*)0)) {
        return -1;
    }

    VAR_18->async_open = 0;
    VAR_18->ijkio_interrupt_callback = VAR_14->ijkio_app_ctx->ijkio_interrupt_callback;
    VAR_18->cache_file_forwards_capacity = 0;

    FUNC_10(VAR_15, "cache:", &VAR_15);
    VAR_18->cache_max_capacity = VAR_3;

    IjkAVDictionaryEntry *VAR_21 = ((void*)0);
    VAR_21 = FUNC_8(*VAR_17, "cache_max_capacity", ((void*)0), VAR_5);
    if (VAR_21) {
        VAR_18->cache_max_capacity = FUNC_29(VAR_21->value, ((void*)0), 10);
    }

    VAR_21 = FUNC_8(*VAR_17, "cache_file_forwards_capacity", ((void*)0), VAR_5);
    if (VAR_21) {
        VAR_18->cache_file_forwards_capacity = FUNC_29(VAR_21->value, ((void*)0), 10);
    }

    VAR_21 = FUNC_8(*VAR_17, "cache_file_close", ((void*)0), VAR_5);
    if (VAR_21) {
        VAR_18->cache_file_close = (int)FUNC_28(VAR_21->value, ((void*)0), 10);
        VAR_18->cache_file_close = VAR_18->cache_file_close != 0 ? 1 : 0;
    }

    VAR_21 = FUNC_8(*VAR_17, "cur_file_no", ((void*)0), VAR_5);
    if (VAR_21) {
        VAR_18->cur_file_no = (int)FUNC_28(VAR_21->value, ((void*)0), 10);
    }

    VAR_21 = FUNC_8(*VAR_17, "only_read_file", ((void*)0), VAR_5);
    if (VAR_21) {
        VAR_18->only_read_file = (int)FUNC_28(VAR_21->value, ((void*)0), 10);
        if (VAR_18->only_read_file) {
            VAR_18->cache_file_forwards_capacity = 0;
        }
    }

    VAR_18->cache_file_path = VAR_18->ijkio_app_ctx->cache_file_path;

    if (VAR_18->cache_file_path == ((void*)0) || 0 == FUNC_27(VAR_18->cache_file_path)) {
        VAR_18->cache_file_close = 1;
    }

    VAR_18->threadpool_ctx = VAR_18->ijkio_app_ctx->threadpool_ctx;
    VAR_18->cache_info_map = VAR_18->ijkio_app_ctx->cache_info_map;
    VAR_18->last_physical_pos = &VAR_18->ijkio_app_ctx->last_physical_pos;
    VAR_18->cache_count_bytes = &VAR_18->ijkio_app_ctx->cache_count_bytes;
    if (!VAR_18->last_physical_pos || !VAR_18->threadpool_ctx || !VAR_18->cache_info_map) {
        return -1;
    }

    if (!VAR_18->cache_file_close) {
        do {
            if (VAR_18->ijkio_app_ctx->fd >= 0) {
                VAR_18->fd = VAR_18->ijkio_app_ctx->fd;
            } else {
                if (FUNC_14(VAR_18->cache_info_map) > 0) {
                    FUNC_2(((void*)0), VAR_1, "ijkio cache will use the data that already exists\n");
                    VAR_18->fd = FUNC_20(VAR_18->cache_file_path, VAR_8 | VAR_6, 0600);
                    VAR_18->async_open = 1;
                    VAR_20 = FUNC_19(VAR_18->fd, 0, VAR_10);
                    if (VAR_20 < *VAR_18->last_physical_pos) {
                        FUNC_2(((void*)0), VAR_2, "ijkio cache exist is error, will delete last_physical_pos = %lld, cur_exist_file_size = %lld\n", *VAR_18->last_physical_pos, VAR_20);
                        FUNC_15(VAR_18->cache_info_map, ((void*)0), VAR_13);
                        FUNC_11(VAR_18->cache_info_map);
                        *VAR_18->last_physical_pos = 0;
                        VAR_18->cache_physical_pos = 0;
                    }
                } else {
                    VAR_18->fd = FUNC_20(VAR_18->cache_file_path, VAR_8 | VAR_6 | VAR_7 | VAR_9, 0600);
                }
                VAR_18->ijkio_app_ctx->fd = VAR_18->fd;
            }
            if (VAR_18->fd < 0) {
                VAR_18->cache_file_close = 1;
                break;
            }

            int64_t VAR_22 = FUNC_19(VAR_18->fd, *VAR_18->last_physical_pos, VAR_11);
            if (VAR_22 < 0) {
                VAR_18->cache_file_close = 1;
                FUNC_5(VAR_18->fd);
                VAR_18->fd = -1;
                VAR_18->ijkio_app_ctx->fd = -1;
                break;
            } else {
                VAR_18->cache_physical_pos = *VAR_18->last_physical_pos;
            }

            VAR_18->tree_info = FUNC_12(VAR_18->cache_info_map, (int64_t)VAR_18->cur_file_no);
            if (VAR_18->tree_info == ((void*)0)) {
                VAR_18->tree_info = FUNC_4(1, sizeof(IjkCacheTreeInfo));
                VAR_18->tree_info->physical_init_pos = *VAR_18->last_physical_pos;
                FUNC_13(VAR_18->cache_info_map, (int64_t)VAR_18->cur_file_no, VAR_18->tree_info);
            } else {
                if (VAR_18->tree_info->physical_size > 200 * 1024 && VAR_18->tree_info->file_size > 0) {
                    VAR_18->logical_size = VAR_18->tree_info->file_size;
                    VAR_18->async_open = 1;
                } else {
                    VAR_18->async_open = 0;
                }
            }
        } while(0);
    }

    VAR_19 = FUNC_17(&(VAR_18->inner), VAR_15);
    if (VAR_18->inner && !VAR_19) {
        VAR_18->inner->ijkio_app_ctx = VAR_18->ijkio_app_ctx;
        if (VAR_18->logical_size <= 0 || VAR_18->async_open == 0) {
            VAR_18->async_open = 0;
            VAR_19 = FUNC_18(VAR_14, VAR_15, VAR_16, VAR_17);
            if (VAR_19 != 0)
                goto url_fail;
        } else {
            VAR_18->tree_info->file_size = VAR_18->logical_size;
            FUNC_6(&VAR_18->inner_options, *VAR_17, 0);
            FUNC_26(VAR_18->inner_url, VAR_15);
            VAR_18->inner_flags = VAR_16;
            FUNC_3(VAR_14);
        }
    }

    VAR_19 = FUNC_25(&VAR_18->file_mutex, ((void*)0));
    if (VAR_19 != 0) {
        FUNC_2(((void*)0), VAR_0, "pthread_mutex_init failed : %s\n", FUNC_1(VAR_19));
        goto file_mutex_fail;
    }

    VAR_19 = FUNC_22(&VAR_18->cond_wakeup_main, ((void*)0));
    if (VAR_19 != 0) {
        FUNC_2(((void*)0), VAR_0, "pthread_cond_init failed : %s\n", FUNC_1(VAR_19));
        goto cond_wakeup_main_fail;
    }

    VAR_19 = FUNC_22(&VAR_18->cond_wakeup_file_background, ((void*)0));
    if (VAR_19 != 0) {
        FUNC_2(((void*)0), VAR_0, "pthread_cond_init failed : %s\n", FUNC_1(VAR_19));
        goto cond_wakeup_file_background_fail;
    }

    VAR_19 = FUNC_22(&VAR_18->cond_wakeup_exit, ((void*)0));
    if (VAR_19 != 0) {
        FUNC_2(((void*)0), VAR_0, "pthread_cond_init failed : %s\n", FUNC_1(VAR_19));
        goto cond_wakeup_exit_fail;
    }

    if (!VAR_18->cache_file_close && VAR_18->cache_file_forwards_capacity) {
        VAR_18->task_is_running = 1;
        VAR_19 = FUNC_16(VAR_18->threadpool_ctx, VAR_12, VAR_14, ((void*)0), 0);
        if (VAR_19) {
            VAR_18->task_is_running = 0;
            FUNC_23(&VAR_18->cond_wakeup_exit);
            goto thread_fail;
        }
    }

    return 0;

thread_fail:
    FUNC_21(&VAR_18->cond_wakeup_exit);
cond_wakeup_exit_fail:
    FUNC_21(&VAR_18->cond_wakeup_file_background);
cond_wakeup_file_background_fail:
    FUNC_21(&VAR_18->cond_wakeup_main);
cond_wakeup_main_fail:
    FUNC_24(&VAR_18->file_mutex);
file_mutex_fail:
    if (VAR_18->async_open) {
        if (VAR_18->inner_options) {
            FUNC_7(&VAR_18->inner_options);
        }
    } else {
        if (VAR_18->inner) {
            if (VAR_18->inner->prot && VAR_18->inner->prot->url_close) {
                VAR_18->inner->prot->url_close(VAR_18->inner);
            }
        }
    }
url_fail:
    if (VAR_18->inner) {
        FUNC_9(&VAR_18->inner->priv_data);
        FUNC_9(&VAR_18->inner);
    }
    return VAR_19;
}
