
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* priv_data; TYPE_1__* prot; } ;
struct TYPE_9__ {int abort_request; TYPE_4__* inner; scalar_t__ inner_options; int file_mutex; int cond_wakeup_exit; int cond_wakeup_main; int cond_wakeup_file_background; scalar_t__ task_is_running; scalar_t__ cache_file_forwards_capacity; } ;
struct TYPE_8__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {int (* url_close ) (TYPE_4__*) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOCacheContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(IjkURLContext *VAR_1) {
    IjkIOCacheContext *VAR_2 = VAR_1->priv_data;
    int VAR_3 = 0;

    if (!VAR_2 || !VAR_2->inner || !VAR_2->inner->prot)
        return FUNC_0(VAR_0);

    if (VAR_2->cache_file_forwards_capacity) {
        FUNC_7(&VAR_2->file_mutex);
        VAR_2->abort_request = 1;
        FUNC_4(&VAR_2->cond_wakeup_file_background);
        while (VAR_2->task_is_running) {
            FUNC_5(&VAR_2->cond_wakeup_exit, &VAR_2->file_mutex);
        }
        FUNC_8(&VAR_2->file_mutex);
    } else {
        VAR_2->abort_request = 1;
    }

    FUNC_3(&VAR_2->cond_wakeup_file_background);
    FUNC_3(&VAR_2->cond_wakeup_main);
    FUNC_3(&VAR_2->cond_wakeup_exit);
    FUNC_6(&VAR_2->file_mutex);

    VAR_3 = VAR_2->inner->prot->url_close(VAR_2->inner);

    if (VAR_2->inner_options) {
        FUNC_1(&VAR_2->inner_options);
    }
    FUNC_2(&VAR_2->inner->priv_data);

    FUNC_2(&VAR_2->inner);
    return VAR_3;
}
