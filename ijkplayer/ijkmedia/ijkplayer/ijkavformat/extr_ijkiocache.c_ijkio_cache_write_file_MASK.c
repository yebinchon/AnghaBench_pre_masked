
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_17__ {TYPE_2__* prot; } ;
struct TYPE_16__ {scalar_t__ logical_pos; scalar_t__ size; } ;
struct TYPE_15__ {scalar_t__ file_logical_pos; scalar_t__ file_logical_end; int io_eof_reached; scalar_t__ logical_size; scalar_t__ file_inner_pos; scalar_t__ async_open; int io_error; int file_mutex; int cond_wakeup_file_background; int * cache_count_bytes; TYPE_6__* inner; int inner_options; int inner_flags; int inner_url; TYPE_1__* tree_info; } ;
struct TYPE_14__ {TYPE_4__* priv_data; } ;
struct TYPE_13__ {scalar_t__ (* url_seek ) (TYPE_6__*,scalar_t__,int ) ;scalar_t__ (* url_read ) (TYPE_6__*,unsigned char*,int) ;} ;
struct TYPE_12__ {int root; } ;
typedef TYPE_3__ IjkURLContext ;
typedef TYPE_4__ IjkIOCacheContext ;
typedef TYPE_5__ IjkCacheEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__*,unsigned char*,int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 TYPE_5__* FUNC_4 (int ,scalar_t__*,int ,void**) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_6__*,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (TYPE_6__*,unsigned char*,int) ;

__attribute__((used)) static int64_t FUNC_11(IjkURLContext *VAR_3) {
    IjkIOCacheContext *VAR_4= VAR_3->priv_data;
    int64_t VAR_5;
    unsigned char VAR_6[4096] = {0};
    int VAR_7 = 4096;
    int64_t VAR_8 = (int64_t)VAR_7;

    IjkCacheEntry *VAR_9 = ((void*)0) ,*VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12[2] = {((void*)0), ((void*)0)};

    if (!VAR_4 || !VAR_4->inner || !VAR_4->inner->prot)
        return FUNC_1(VAR_0);

    VAR_9 = FUNC_4(VAR_4->tree_info->root, &VAR_4->file_logical_pos, VAR_2, (void**)VAR_12);

    if (!VAR_9)
        VAR_10 = VAR_12[0];

    if (VAR_10) {
        int64_t VAR_13 = VAR_4->file_logical_pos - VAR_10->logical_pos;
        FUNC_3(VAR_10->logical_pos <= VAR_4->file_logical_pos);
        if (VAR_13 < VAR_10->size) {
            VAR_4->file_logical_pos = VAR_10->logical_pos + VAR_10->size;
        }
    } else if (VAR_9) {
        int64_t VAR_14 = VAR_4->file_logical_pos - VAR_9->logical_pos;
        FUNC_3(VAR_9->logical_pos <= VAR_4->file_logical_pos);
        if (VAR_14 < VAR_9->size) {
            VAR_4->file_logical_pos = VAR_9->logical_pos + VAR_9->size;
        }
    }

    VAR_11 = VAR_12[1];

    if (VAR_11) {
        VAR_8 = VAR_11->logical_pos - VAR_4->file_logical_pos;
        VAR_8 = FUNC_0(VAR_8, VAR_7);
    }

    if (VAR_8 == 0) {
        return 0;
    }

    if (VAR_4->file_logical_end > 0 && VAR_4->file_logical_pos == VAR_4->file_logical_end) {
        VAR_4->io_eof_reached = 1;
        return 0;
    }

    if (VAR_4->file_logical_pos >= VAR_4->logical_size) {
        VAR_4->io_eof_reached = 1;
        return 0;
    }
    if (VAR_4->file_logical_pos != VAR_4->file_inner_pos) {
        if (VAR_4->async_open > 0) {
            VAR_5 = FUNC_5(VAR_3, VAR_4->inner_url, VAR_4->inner_flags, &VAR_4->inner_options);
            if (VAR_5 != 0) {
                VAR_4->io_eof_reached = 1;
                VAR_4->io_error = (int)VAR_5;
                return VAR_5;
            }
            VAR_4->async_open = 0;
        }

        VAR_5 = VAR_4->inner->prot->url_seek(VAR_4->inner, VAR_4->file_logical_pos, VAR_1);

        if (VAR_5 < 0) {
            VAR_4->io_eof_reached = 1;
            if (VAR_4->file_logical_end == VAR_4->file_logical_pos) {
                VAR_4->file_inner_pos = VAR_4->file_logical_end;
            }
            return VAR_5;
        }
        VAR_4->file_inner_pos = VAR_5;
    }
    if (VAR_4->async_open > 0) {
        VAR_5 = FUNC_5(VAR_3, VAR_4->inner_url, VAR_4->inner_flags, &VAR_4->inner_options);
        if (VAR_5 != 0) {
            VAR_4->io_eof_reached = 1;
            VAR_4->io_error = (int)VAR_5;
            return VAR_5;
        }
        VAR_4->async_open = 0;
    }
    VAR_5 = VAR_4->inner->prot->url_read(VAR_4->inner, VAR_6, (int)VAR_8);
    if (VAR_5 == 0 && VAR_8 > 0) {
        VAR_4->file_logical_end = VAR_4->file_logical_pos;
    }
    if (VAR_5 <= 0) {
        VAR_4->io_eof_reached = 1;
        VAR_4->io_error = (int)VAR_5;
        return VAR_5;
    }
    *VAR_4->cache_count_bytes += VAR_5;
    VAR_4->file_inner_pos += VAR_5;

    FUNC_7(&VAR_4->file_mutex);
    VAR_5 = FUNC_2(VAR_3, VAR_6, (int)VAR_5);

    if (VAR_5 > 0) {
        VAR_4->file_logical_pos += VAR_5;
        FUNC_6(&VAR_4->cond_wakeup_file_background);
    }
    FUNC_8(&VAR_4->file_mutex);

    return VAR_5;
}
