
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timer_callback_t ;
struct TYPE_2__ {int timer; } ;
struct fd {TYPE_1__ timerfd; } ;
typedef scalar_t__ int_t ;
typedef int fd_t ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fd* FUNC_2 (int *) ;
 int FUNC_3 (struct fd*,scalar_t__) ;
 int FUNC_4 (int ,struct fd*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

fd_t FUNC_5(int_t VAR_5, int_t VAR_6) {
    FUNC_1("timerfd_create(%d, %#x)", VAR_5, VAR_6);
    if (VAR_5 != VAR_0) {
        FUNC_0("timerfd %d", VAR_5);
        return VAR_1;
    }

    struct fd *VAR_7 = FUNC_2(&VAR_4);
    if (VAR_7 == ((void*)0))
        return VAR_2;

    VAR_7->timerfd.timer = FUNC_4((timer_callback_t) VAR_3, VAR_7);
    return FUNC_3(VAR_7, VAR_6);
}
