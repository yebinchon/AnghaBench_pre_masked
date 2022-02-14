
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;
typedef int sem_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (int ,struct timespec*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int * FUNC_4 (int ,int,int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct timespec*) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_8 ;

int FUNC_8(int VAR_9)
{
    int VAR_10;
    int VAR_11;
    sem_t *VAR_12;
    sem_t *VAR_13;
    struct timespec VAR_14;

    if (VAR_9 <= 1) {
        FUNC_1("sync_wait: number of processes should be larger than 1\n");
        return -1;
    }

    if (FUNC_0(VAR_0, &VAR_14) == -1) {
        FUNC_1("clock_gettime error\n");
        return -1;
    }
    VAR_14.tv_sec += VAR_8;


    VAR_10 = VAR_3 | VAR_2;
    VAR_12 = FUNC_4(VAR_4, VAR_10, 0644, 0);
    VAR_13 = FUNC_4(VAR_5, VAR_10, 0644, 0);
    if (VAR_12 == VAR_6 || VAR_13 == VAR_6) {
        FUNC_1("sync_wait: sem_open failed\n");
        return -1;
    }

    if (FUNC_5(VAR_13) < 0) {
        FUNC_1("sync_wait: sem_post failed\n");
        return -1;
    }
    if (FUNC_3(VAR_13, &VAR_11) < 0) {
        FUNC_1("sync_wait: sem_getvalue failed\n");
        return -1;
    }
    FUNC_1("%d processes have arrived, waiting for the left %d\n", VAR_11, VAR_9-VAR_11);
    if (VAR_11 >= VAR_9) {
        while (VAR_9-1 > 0) {
            if (FUNC_5(VAR_12) < 0) {
                FUNC_1("sync_wait: sem_post failed\n");
                return -1;
            }
            VAR_9--;
        }
    } else {
        if (FUNC_6(VAR_12, &VAR_14) < 0) {
            if (VAR_7 == VAR_1) {
                FUNC_1("sync_wait: sem_timewait time out\n");
            } else {
                FUNC_1("sync_wait: sem_timewait error\n");
            }
            return -1;
        }

    }

    FUNC_2(VAR_13);
    FUNC_2(VAR_12);

    FUNC_7(VAR_5);
    FUNC_7(VAR_4);

    return 0;
}
