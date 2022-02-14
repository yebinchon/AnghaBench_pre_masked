
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int is_streamed; int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_15__ {int is_streamed; } ;
struct TYPE_14__ {TYPE_1__* opaque; int callback; } ;
struct TYPE_13__ {int ring; TYPE_5__* inner; int mutex; int cond_wakeup_main; int cond_wakeup_background; int async_buffer_thread; int logical_size; int interrupt_callback; scalar_t__ app_ctx_intptr; int * app_ctx; int backwards_capacity; int forwards_capacity; } ;
typedef TYPE_2__ Context ;
typedef TYPE_3__ AVIOInterruptCB ;
typedef int AVDictionary ;
typedef int AVApplicationContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,char*,scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ,...) ;
 int FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__**,char const*,int,TYPE_3__*,int **,int ,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_14(URLContext *VAR_3, const char *VAR_4, int VAR_5, AVDictionary **VAR_6)
{
    Context *VAR_7 = VAR_3->priv_data;
    int VAR_8;
    AVIOInterruptCB VAR_9 = {.callback = VAR_2, .opaque = VAR_3};

    FUNC_3(VAR_4, "async:", &VAR_4);

    VAR_8 = FUNC_13(&VAR_7->ring, VAR_7->forwards_capacity, VAR_7->backwards_capacity);
    if (VAR_8 < 0)
        goto fifo_fail;

    if (VAR_7->app_ctx_intptr) {
        VAR_7->app_ctx = (AVApplicationContext *)(intptr_t)VAR_7->app_ctx_intptr;
        FUNC_0(VAR_6, "ijkapplication", VAR_7->app_ctx_intptr, 0);
    }

    VAR_7->interrupt_callback = VAR_3->interrupt_callback;
    VAR_8 = FUNC_5(&VAR_7->inner, VAR_4, VAR_5, &VAR_9, VAR_6, VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3);
    if (VAR_8 != 0) {
        FUNC_2(VAR_3, VAR_0, "ffurl_open_whitelist failed : %s, %s\n", FUNC_1(VAR_8), VAR_4);
        goto url_fail;
    }

    VAR_7->logical_size = FUNC_6(VAR_7->inner);
    VAR_3->is_streamed = VAR_7->inner->is_streamed;

    VAR_8 = FUNC_11(&VAR_7->mutex, ((void*)0));
    if (VAR_8 != 0) {
        FUNC_2(VAR_3, VAR_0, "pthread_mutex_init failed : %s\n", FUNC_1(VAR_8));
        goto mutex_fail;
    }

    VAR_8 = FUNC_8(&VAR_7->cond_wakeup_main, ((void*)0));
    if (VAR_8 != 0) {
        FUNC_2(VAR_3, VAR_0, "pthread_cond_init failed : %s\n", FUNC_1(VAR_8));
        goto cond_wakeup_main_fail;
    }

    VAR_8 = FUNC_8(&VAR_7->cond_wakeup_background, ((void*)0));
    if (VAR_8 != 0) {
        FUNC_2(VAR_3, VAR_0, "pthread_cond_init failed : %s\n", FUNC_1(VAR_8));
        goto cond_wakeup_background_fail;
    }

    VAR_8 = FUNC_9(&VAR_7->async_buffer_thread, ((void*)0), VAR_1, VAR_3);
    if (VAR_8) {
        FUNC_2(VAR_3, VAR_0, "pthread_create failed : %s\n", FUNC_1(VAR_8));
        goto thread_fail;
    }

    return 0;

thread_fail:
    FUNC_7(&VAR_7->cond_wakeup_background);
cond_wakeup_background_fail:
    FUNC_7(&VAR_7->cond_wakeup_main);
cond_wakeup_main_fail:
    FUNC_10(&VAR_7->mutex);
mutex_fail:
    FUNC_4(VAR_7->inner);
url_fail:
    FUNC_12(&VAR_7->ring);
fifo_fail:
    return VAR_8;
}
