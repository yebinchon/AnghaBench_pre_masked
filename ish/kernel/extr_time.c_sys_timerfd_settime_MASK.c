
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct timer_spec {TYPE_4__ interval; TYPE_2__ value; } ;
struct TYPE_10__ {int nsec; int sec; } ;
struct TYPE_8__ {int nsec; int sec; } ;
struct itimerspec_ {TYPE_5__ interval; TYPE_3__ value; } ;
struct TYPE_6__ {int timer; } ;
struct fd {int lock; TYPE_1__ timerfd; int * ops; } ;
typedef int int_t ;
typedef int fd_t ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (char*,int ,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct timer_spec,struct timer_spec*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,struct itimerspec_) ;
 scalar_t__ FUNC_6 (scalar_t__,struct itimerspec_) ;

int_t FUNC_7(fd_t VAR_4, int_t VAR_5, addr_t VAR_6, addr_t VAR_7) {
    FUNC_0("timerfd_settime(%d, %d, %#x, %#x)", VAR_4, VAR_5, VAR_6, VAR_7);
    struct fd *VAR_8 = FUNC_1(VAR_4);
    if (VAR_8 == ((void*)0))
        return VAR_0;
    if (VAR_8->ops != &VAR_3)
        return VAR_2;
    struct itimerspec_ VAR_9;
    if (FUNC_5(VAR_6, VAR_9))
        return VAR_1;

    struct timer_spec VAR_10 = {
        .value.tv_sec = VAR_9.value.sec,
        .value.tv_nsec = VAR_9.value.nsec,
        .interval.tv_sec = VAR_9.interval.sec,
        .interval.tv_nsec = VAR_9.interval.nsec,
    };
    struct timer_spec VAR_11;
    FUNC_2(&VAR_8->lock);
    int VAR_12 = FUNC_3(VAR_8->timerfd.timer, VAR_10, &VAR_11);
    FUNC_4(&VAR_8->lock);
    if (VAR_12 < 0)
        return VAR_12;

    if (VAR_7) {
        struct itimerspec_ VAR_13 = {
            .value.sec = VAR_11.value.tv_sec,
            .value.nsec = VAR_11.value.tv_nsec,
            .interval.sec = VAR_11.interval.tv_sec,
            .interval.nsec = VAR_11.interval.tv_nsec,
        };
        if (FUNC_6(VAR_7, VAR_13))
            return VAR_1;
    }

    return 0;
}
