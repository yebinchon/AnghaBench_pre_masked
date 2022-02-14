
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_7__ {int logical_pos; int io_error; int mutex; int cond_wakeup_background; int cond_wakeup_main; scalar_t__ io_eof_reached; int ring; } ;
typedef int RingBuffer ;
typedef TYPE_2__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void*,int,void (*) (void*,void*,int)) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_2, void *VAR_3, int VAR_4, int VAR_5,
                               void (*VAR_6)(void*, void*, int))
{
    Context *VAR_7 = VAR_2->priv_data;
    RingBuffer *VAR_8 = &VAR_7->ring;
    int VAR_9 = VAR_4;
    int VAR_10 = 0;

    FUNC_5(&VAR_7->mutex);

    while (VAR_9 > 0) {
        int VAR_11, VAR_12;
        if (FUNC_1(VAR_2)) {
            VAR_10 = VAR_1;
            break;
        }
        VAR_11 = FUNC_8(VAR_8);
        VAR_12 = FUNC_0(VAR_9, VAR_11);
        if (VAR_12 > 0) {
            FUNC_7(VAR_8, VAR_3, VAR_12, VAR_6);
            if (!VAR_6)
                VAR_3 = (uint8_t *)VAR_3 + VAR_12;
            VAR_7->logical_pos += VAR_12;
            VAR_9 -= VAR_12;
            VAR_10 = VAR_4 - VAR_9;

            if (VAR_9 <= 0 || !VAR_5)
                break;
        } else if (VAR_7->io_eof_reached) {
            if (VAR_10 <= 0) {
                if (VAR_7->io_error)
                    VAR_10 = VAR_7->io_error;
                else
                    VAR_10 = VAR_0;
            }
            break;
        }
        FUNC_3(&VAR_7->cond_wakeup_background);
        FUNC_4(&VAR_7->cond_wakeup_main, &VAR_7->mutex);
    }

    FUNC_3(&VAR_7->cond_wakeup_background);
    FUNC_6(&VAR_7->mutex);

    FUNC_2(VAR_2);
    return VAR_10;
}
