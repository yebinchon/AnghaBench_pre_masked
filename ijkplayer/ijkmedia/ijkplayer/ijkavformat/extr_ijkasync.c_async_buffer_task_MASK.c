
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int io_eof_reached; int io_error; int seek_completed; int forwards_capacity; int inner_io_error; int mutex; int cond_wakeup_main; int cond_wakeup_background; scalar_t__ seek_request; scalar_t__ seek_ret; int seek_whence; int seek_pos; int inner; int ring; } ;
typedef int RingBuffer ;
typedef TYPE_2__ Context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void*,int,void*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void *FUNC_13(void *VAR_2)
{
    URLContext *VAR_3 = VAR_2;
    Context *VAR_4 = VAR_3->priv_data;
    RingBuffer *VAR_5 = &VAR_4->ring;
    int VAR_6 = 0;
    int64_t VAR_7;
    int VAR_8 = 1;
    int64_t VAR_9 = 0;
    int64_t VAR_10 = FUNC_2();

    while (1) {
        int VAR_11, VAR_12;

        FUNC_8(&VAR_4->mutex);
        if (FUNC_1(VAR_3)) {
            VAR_4->io_eof_reached = 1;
            VAR_4->io_error = VAR_0;
            FUNC_6(&VAR_4->cond_wakeup_main);
            FUNC_9(&VAR_4->mutex);
            break;
        }

        if (VAR_4->seek_request) {
            VAR_7 = FUNC_5(VAR_4->inner, VAR_4->seek_pos, VAR_4->seek_whence);
            if (VAR_7 < 0) {
                VAR_4->io_eof_reached = 1;
                VAR_4->io_error = (int)VAR_7;
            } else {
                VAR_4->io_eof_reached = 0;
                VAR_4->io_error = 0;
            }

            VAR_4->seek_completed = 1;
            VAR_4->seek_ret = VAR_7;
            VAR_4->seek_request = 0;

            FUNC_11(VAR_5);

            FUNC_6(&VAR_4->cond_wakeup_main);
            FUNC_9(&VAR_4->mutex);

            VAR_8 = 0;
            continue;
        }

        VAR_11 = FUNC_12(VAR_5);
        if (VAR_4->io_eof_reached || VAR_11 <= 0) {
            FUNC_6(&VAR_4->cond_wakeup_main);
            FUNC_7(&VAR_4->cond_wakeup_background, &VAR_4->mutex);
            FUNC_9(&VAR_4->mutex);
            VAR_8 = 0;
            continue;
        }
        FUNC_9(&VAR_4->mutex);

        VAR_12 = FUNC_0(4096, VAR_11);
        VAR_6 = FUNC_10(VAR_5, (void *)VAR_3, VAR_12, (void *)VAR_1);
        if (VAR_6 > 0) {
            VAR_9 += VAR_6;
            if (VAR_9 > FUNC_0((1 * 1024 * 1024), VAR_4->forwards_capacity)) {
                int64_t VAR_13 = FUNC_2();
                FUNC_3(VAR_3, VAR_8, VAR_9, VAR_13 - VAR_10);
                VAR_8 = 1;
                VAR_9 = 0;
                VAR_10 = VAR_13;
            }
        }

        FUNC_8(&VAR_4->mutex);
        if (VAR_6 <= 0) {
            VAR_4->io_eof_reached = 1;
            if (VAR_4->inner_io_error < 0)
                VAR_4->io_error = VAR_4->inner_io_error;
        }

        FUNC_6(&VAR_4->cond_wakeup_main);
        FUNC_9(&VAR_4->mutex);

        FUNC_4(VAR_3);
    }

    return ((void*)0);
}
