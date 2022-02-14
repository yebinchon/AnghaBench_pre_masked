
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
struct timer_spec {TYPE_4__ value; TYPE_2__ interval; } ;
struct tgroup {int lock; } ;
struct TYPE_8__ {int usec; int sec; } ;
struct TYPE_6__ {int usec; int sec; } ;
struct itimerval_ {TYPE_3__ value; TYPE_1__ interval; } ;
typedef int int_t ;
typedef int addr_t ;
struct TYPE_10__ {struct tgroup* group; } ;


 int FUNC_0 (char*,int,int ,int,int ,int,int ) ;
 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_1 (struct tgroup*,int,struct timer_spec,struct timer_spec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,struct itimerval_) ;
 scalar_t__ FUNC_5 (int ,struct itimerval_) ;

int_t FUNC_6(int_t VAR_2, addr_t VAR_3, addr_t VAR_4) {
    struct itimerval_ VAR_5;
    if (FUNC_4(VAR_3, VAR_5))
        return VAR_0;
    FUNC_0("setitimer(%d, {%ds %dus, %ds %dus}, 0x%x)", VAR_2, VAR_5.value.sec, VAR_5.value.usec, VAR_5.interval.sec, VAR_5.interval.usec, VAR_4);

    struct timer_spec VAR_6 = {
        .interval.tv_sec = VAR_5.interval.sec,
        .interval.tv_nsec = VAR_5.interval.usec * 1000,
        .value.tv_sec = VAR_5.value.sec,
        .value.tv_nsec = VAR_5.value.usec * 1000,
    };
    struct timer_spec VAR_7;

    struct tgroup *VAR_8 = VAR_1->group;
    FUNC_2(&VAR_8->lock);
    int VAR_9 = FUNC_1(VAR_8, VAR_2, VAR_6, &VAR_7);
    FUNC_3(&VAR_8->lock);
    if (VAR_9 < 0)
        return VAR_9;

    if (VAR_4 != 0) {
        struct itimerval_ VAR_10;
        VAR_10.interval.sec = VAR_7.interval.tv_sec;
        VAR_10.interval.usec = VAR_7.interval.tv_nsec / 1000;
        VAR_10.value.sec = VAR_7.value.tv_sec;
        VAR_10.value.usec = VAR_7.value.tv_nsec / 1000;
        if (FUNC_5(VAR_4, VAR_10))
            return VAR_0;
    }

    return 0;
}
