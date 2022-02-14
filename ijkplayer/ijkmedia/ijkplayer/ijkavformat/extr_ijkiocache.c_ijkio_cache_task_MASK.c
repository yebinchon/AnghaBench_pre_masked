
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {int task_is_running; int io_eof_reached; int seek_completed; scalar_t__ read_logical_pos; scalar_t__ seek_pos; scalar_t__ file_logical_pos; scalar_t__ seek_ret; scalar_t__ cache_file_forwards_capacity; int file_mutex; int cond_wakeup_exit; int cond_wakeup_main; int cond_wakeup_file_background; scalar_t__ seek_request; scalar_t__ io_error; scalar_t__ cache_file_close; } ;
struct TYPE_3__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ IjkURLContext ;
typedef TYPE_2__ IjkIOCacheContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_2, void *VAR_3) {
    IjkIOCacheContext *VAR_4= ((IjkURLContext *)VAR_2)->priv_data;
    VAR_4->task_is_running = 1;
    int64_t VAR_5 = 0;

    while(1) {
        if (VAR_4->cache_file_close) {
            break;
        }
        if (FUNC_1(VAR_2)) {
            VAR_4->io_eof_reached = 1;
            VAR_4->io_error = VAR_1;
            break;
        }

        if (VAR_4->seek_request) {
            FUNC_5(&VAR_4->file_mutex);
            VAR_4->io_eof_reached = 0;
            VAR_4->io_error = 0;
            VAR_4->seek_completed = 1;
            VAR_4->seek_request = 0;
            VAR_4->read_logical_pos = VAR_4->seek_pos;
            VAR_4->file_logical_pos = VAR_4->seek_pos;
            VAR_4->seek_ret = VAR_4->seek_pos;
            FUNC_3(&VAR_4->cond_wakeup_main);
            FUNC_6(&VAR_4->file_mutex);
        }

        if (((VAR_4->file_logical_pos - VAR_4->read_logical_pos > VAR_4->cache_file_forwards_capacity)
            || VAR_4->io_eof_reached)) {
            FUNC_5(&VAR_4->file_mutex);
            FUNC_3(&VAR_4->cond_wakeup_main);
            FUNC_4(&VAR_4->cond_wakeup_file_background, &VAR_4->file_mutex);
            FUNC_6(&VAR_4->file_mutex);
        } else {
            VAR_5 = FUNC_2(VAR_2);
            if (VAR_5 > 0) {
                FUNC_5(&VAR_4->file_mutex);
                FUNC_3(&VAR_4->cond_wakeup_main);
                FUNC_6(&VAR_4->file_mutex);
            } else if (VAR_5 == VAR_0) {
                break;
            }
        }

        FUNC_0(VAR_2);
    }
    FUNC_5(&VAR_4->file_mutex);
    VAR_4->task_is_running = 0;
    FUNC_3(&VAR_4->cond_wakeup_main);
    FUNC_3(&VAR_4->cond_wakeup_exit);
    FUNC_6(&VAR_4->file_mutex);
}
