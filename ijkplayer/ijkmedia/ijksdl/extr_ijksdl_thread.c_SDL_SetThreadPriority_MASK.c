
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
typedef int pthread_t ;
typedef scalar_t__ SDL_ThreadPriority ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int*,struct sched_param*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int,struct sched_param*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;

int FUNC_6(SDL_ThreadPriority VAR_2)
{
    struct sched_param VAR_3;
    int VAR_4;
    pthread_t VAR_5 = FUNC_2();

    if (FUNC_1(VAR_5, &VAR_4, &VAR_3) < 0) {
        FUNC_0("pthread_getschedparam() failed");
        return -1;
    }
    if (VAR_2 == VAR_1) {
        VAR_3.sched_priority = FUNC_5(VAR_4);
    } else if (VAR_2 == VAR_0) {
        VAR_3.sched_priority = FUNC_4(VAR_4);
    } else {
        int VAR_6 = FUNC_5(VAR_4);
        int VAR_7 = FUNC_4(VAR_4);
        VAR_3.sched_priority = (VAR_6 + (VAR_7 - VAR_6) / 2);
    }
    if (FUNC_3(VAR_5, VAR_4, &VAR_3) < 0) {
        FUNC_0("pthread_setschedparam() failed");
        return -1;
    }
    return 0;
}
