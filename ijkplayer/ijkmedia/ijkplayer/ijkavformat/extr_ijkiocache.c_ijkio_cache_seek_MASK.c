
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_10__ {TYPE_1__* prot; } ;
struct TYPE_9__ {scalar_t__ logical_size; scalar_t__ read_logical_pos; int seek_request; int seek_whence; scalar_t__ seek_ret; int file_mutex; int cond_wakeup_main; int cond_wakeup_file_background; scalar_t__ seek_completed; scalar_t__ seek_pos; int cache_file_forwards_capacity; TYPE_4__* inner; scalar_t__ cache_file_close; } ;
struct TYPE_8__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {scalar_t__ (* url_seek ) (TYPE_4__*,scalar_t__,int) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_4__*,scalar_t__,int) ;

__attribute__((used)) static int64_t FUNC_7(IjkURLContext *VAR_6, int64_t VAR_7, int VAR_8) {
    IjkIOCacheContext *VAR_9= VAR_6->priv_data;
    int64_t VAR_10 = 0;
    int64_t VAR_11 = 0;
    if (!VAR_9 || !VAR_9->inner || !VAR_9->inner->prot)
        return FUNC_0(VAR_1);

    if (VAR_8 == VAR_3) {
        return VAR_9->logical_size;
    } else if (VAR_8 == VAR_4) {
        VAR_11 = VAR_7 + VAR_9->read_logical_pos;
    } else if (VAR_8 == VAR_5){
        VAR_11 = VAR_7;
    } else {
        return FUNC_0(VAR_0);
    }
    if (VAR_11 < 0)
        return FUNC_0(VAR_0);

    if (VAR_9->cache_file_close) {
        return VAR_9->inner->prot->url_seek(VAR_9->inner, VAR_11, VAR_5);
    }

    if (!VAR_9->cache_file_forwards_capacity) {
        VAR_9->read_logical_pos = VAR_11;
        return VAR_11;
    }

    FUNC_4(&VAR_9->file_mutex);
    VAR_9->seek_request = 1;
    VAR_9->seek_pos = VAR_11;
    VAR_9->seek_whence = VAR_5;
    VAR_9->seek_completed = 0;

    while (1) {
        if (FUNC_1(VAR_6)) {
            VAR_10 = VAR_2;
            break;
        }
        if (VAR_9->seek_completed) {
            VAR_10 = VAR_9->seek_ret;
            break;
        }
        FUNC_2(&VAR_9->cond_wakeup_file_background);
        FUNC_3(&VAR_9->cond_wakeup_main, &VAR_9->file_mutex);
    }

    FUNC_5(&VAR_9->file_mutex);
    return VAR_10;
}
