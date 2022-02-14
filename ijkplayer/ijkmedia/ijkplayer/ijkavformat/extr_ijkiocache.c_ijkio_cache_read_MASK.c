
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {TYPE_1__* prot; } ;
struct TYPE_13__ {scalar_t__ cache_file_forwards_capacity; scalar_t__ read_logical_pos; int io_error; scalar_t__ file_logical_pos; int file_mutex; int cond_wakeup_file_background; scalar_t__ io_eof_reached; int cond_wakeup_main; TYPE_5__* inner; scalar_t__ cache_file_close; } ;
struct TYPE_12__ {TYPE_3__* priv_data; } ;
struct TYPE_11__ {int (* url_seek ) (TYPE_5__*,scalar_t__,int ) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_11(IjkURLContext *VAR_4, unsigned char *VAR_5, int VAR_6) {
    IjkIOCacheContext *VAR_7 = VAR_4->priv_data;
    int64_t VAR_8 = 0;
    int VAR_9 = VAR_6;
    unsigned char *VAR_10 = VAR_5;
    int VAR_11 = 0;

    if (!VAR_7 || !VAR_7->inner || !VAR_7->inner->prot)
        return FUNC_0(VAR_0);

    if (VAR_7->cache_file_close) {
        return FUNC_10(VAR_4, VAR_10, VAR_9);
    }

    if (!VAR_7->cache_file_forwards_capacity) {
        VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6);
        if (VAR_8 >= 0) {
            VAR_7->read_logical_pos += VAR_8;
        }
        FUNC_1(VAR_4);
        return (int)VAR_8;
    }

    FUNC_7(&VAR_7->file_mutex);
    while (VAR_9 > 0) {
        if (FUNC_2(VAR_4)) {
            VAR_8 = VAR_2;
            break;
        }

        if (VAR_7->cache_file_close) {
            VAR_8 = VAR_7->inner->prot->url_seek(VAR_7->inner, VAR_7->read_logical_pos, VAR_3);
            if (VAR_8 < 0) {
                FUNC_8(&VAR_7->file_mutex);
                return (int)VAR_8;
            }

            VAR_11 = FUNC_10(VAR_4, VAR_10, VAR_9);
            VAR_9 -= VAR_11;
            VAR_8 = VAR_6 - VAR_9;
            FUNC_8(&VAR_7->file_mutex);
            return (int)VAR_8;
        }

        VAR_11 = FUNC_4(VAR_4, VAR_10, VAR_9);
        if (VAR_11 > 0) {
            VAR_9 -= VAR_11;
            VAR_8 = VAR_6 - VAR_9;
            VAR_10 += VAR_11;
            VAR_7->read_logical_pos += VAR_11;
            if (VAR_9 <= 0)
                break;
        } else if (VAR_7->io_eof_reached) {
            if (VAR_8 <= 0) {
                if (VAR_7->io_error)
                    VAR_8 = VAR_7->io_error;
                else
                    VAR_8 = VAR_1;
            }
            break;
        }
        FUNC_5(&VAR_7->cond_wakeup_file_background);
        FUNC_6(&VAR_7->cond_wakeup_main, &VAR_7->file_mutex);
    }

    if (VAR_8 != VAR_6 || (!VAR_7->io_eof_reached && (VAR_7->file_logical_pos - VAR_7->read_logical_pos) <= VAR_7->cache_file_forwards_capacity)) {
        FUNC_5(&VAR_7->cond_wakeup_file_background);
    }
    FUNC_8(&VAR_7->file_mutex);
    return (int)VAR_8;
}
