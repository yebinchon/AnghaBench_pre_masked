
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
typedef int int64_t ;
struct TYPE_3__ {scalar_t__ size; int end; scalar_t__ should_abort; int mutex; int wakeup_enqueue_cond; } ;
typedef TYPE_1__ SDL_AMediaCodec_FakeFifo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

ssize_t FUNC_3(SDL_AMediaCodec_FakeFifo* VAR_2, int64_t VAR_3)
{
    int VAR_4 = -1;
    if (VAR_2->should_abort)
        return VAR_1;

    FUNC_1(VAR_2->mutex);
    if (!VAR_2->should_abort) {
        if (VAR_2->size >= VAR_0) {
            FUNC_0(VAR_2->wakeup_enqueue_cond, VAR_2->mutex, VAR_3 / 1000);
        }

        if (VAR_2->size < VAR_0) {
            VAR_4 = VAR_2->end;
        }
    }
    FUNC_2(VAR_2->mutex);

    if (VAR_2->should_abort)
        return -1;

    return VAR_4;
}
