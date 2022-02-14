
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int file_handle_retry_count; int file_error_count; int fd; int cache_file_close; int * tree_info; scalar_t__ cur_file_no; int cache_info_map; TYPE_1__* ijkio_app_ctx; int cache_file_path; int read_logical_pos; int file_logical_pos; scalar_t__ io_eof_reached; scalar_t__ file_inner_pos; scalar_t__ cache_physical_pos; scalar_t__* last_physical_pos; } ;
struct TYPE_8__ {TYPE_2__* ijkio_app_ctx; TYPE_4__* priv_data; } ;
struct TYPE_7__ {int mutex; } ;
struct TYPE_6__ {int fd; int shared; } ;
typedef TYPE_3__ IjkURLContext ;
typedef TYPE_4__ IjkIOCacheContext ;
typedef int IjkCacheTreeInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(IjkURLContext *VAR_7) {
    IjkIOCacheContext *VAR_8 = VAR_7->priv_data;

    FUNC_0(((void*)0), VAR_0, "ijkio_cache_file_error\n");
    if (VAR_8 && VAR_8->file_handle_retry_count > 3) {
        FUNC_7(&VAR_7->ijkio_app_ctx->mutex);
        VAR_8->file_error_count++;
        if (!VAR_8->ijkio_app_ctx->shared) {
            FUNC_5(VAR_8->cache_info_map, ((void*)0), VAR_6);
            FUNC_3(VAR_8->cache_info_map);
            VAR_8->tree_info = ((void*)0);
            *VAR_8->last_physical_pos = 0;
            VAR_8->cache_physical_pos = 0;
            VAR_8->file_inner_pos = 0;
            VAR_8->io_eof_reached = 0;
            VAR_8->file_logical_pos = VAR_8->read_logical_pos;
            FUNC_2(VAR_8->fd);
            VAR_8->fd = -1;
            VAR_8->ijkio_app_ctx->fd = -1;
            if (VAR_8->file_error_count > 3) {
                VAR_8->cache_file_close = 1;
                FUNC_9(VAR_8->cache_file_path);
                FUNC_0(((void*)0), VAR_0, "ijkio_cache_file_error will remove file\n");
                goto fail;
            }
            VAR_8->fd = FUNC_6(VAR_8->cache_file_path, VAR_4 | VAR_2 | VAR_3 | VAR_5, 0600);
            VAR_8->ijkio_app_ctx->fd = VAR_8->fd;
            if (VAR_8->fd >= 0) {
                VAR_8->file_handle_retry_count = 0;
                VAR_8->tree_info = FUNC_1(1, sizeof(IjkCacheTreeInfo));
                if (!VAR_8->tree_info) {
                    VAR_8->cache_file_close = 1;
                    goto fail;
                }
                FUNC_4(VAR_8->cache_info_map, (int64_t)VAR_8->cur_file_no, VAR_8->tree_info);
            } else {
                FUNC_0(((void*)0), VAR_0, "ijkio_cache_file_error will cache_file_close\n");
                VAR_8->cache_file_close = 1;
                goto fail;
            }
        }
        FUNC_8(&VAR_7->ijkio_app_ctx->mutex);
    }

    return 0;

fail:
    FUNC_8(&VAR_7->ijkio_app_ctx->mutex);
    return VAR_1;
}
