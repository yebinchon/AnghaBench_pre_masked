
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ cache_max_capacity; int fd; int read_logical_pos; int file_logical_pos; scalar_t__ io_eof_reached; scalar_t__ cache_physical_pos; scalar_t__* last_physical_pos; int tree_info; scalar_t__ cur_file_no; int cache_info_map; TYPE_1__* ijkio_app_ctx; } ;
struct TYPE_8__ {TYPE_2__* ijkio_app_ctx; TYPE_4__* priv_data; } ;
struct TYPE_7__ {int mutex; } ;
struct TYPE_6__ {int shared; } ;
typedef TYPE_3__ IjkURLContext ;
typedef TYPE_4__ IjkIOCacheContext ;
typedef int IjkCacheTreeInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int64_t FUNC_9(IjkURLContext *VAR_4, int64_t *VAR_5, int VAR_6) {
    IjkIOCacheContext *VAR_7 = VAR_4->priv_data;
    FUNC_0(((void*)0), VAR_0, "ijkio_cache_file_overrang will flush file\n");

    FUNC_7(&VAR_4->ijkio_app_ctx->mutex);

    if (!VAR_7->ijkio_app_ctx->shared) {
        FUNC_3(VAR_7->cache_info_map, (int64_t)VAR_7->cur_file_no);
        FUNC_4(VAR_7->cache_info_map, ((void*)0), VAR_3);
        FUNC_1(VAR_7->cache_info_map);
        FUNC_6(VAR_7->tree_info, 0, sizeof(IjkCacheTreeInfo));
        FUNC_2(VAR_7->cache_info_map, (int64_t)VAR_7->cur_file_no, VAR_7->tree_info);
        *VAR_7->last_physical_pos = 0;
        VAR_7->cache_physical_pos = 0;
        VAR_7->io_eof_reached = 0;
        VAR_7->file_logical_pos = VAR_7->read_logical_pos;
        *VAR_5 = FUNC_5(VAR_7->fd, 0, VAR_2);
        if (*VAR_5 < 0) {
            goto fail;
        }
    } else {
        goto fail;
    }

    FUNC_8(&VAR_4->ijkio_app_ctx->mutex);
    return VAR_7->cache_max_capacity;

fail:
    FUNC_8(&VAR_4->ijkio_app_ctx->mutex);
    return VAR_1;
}
