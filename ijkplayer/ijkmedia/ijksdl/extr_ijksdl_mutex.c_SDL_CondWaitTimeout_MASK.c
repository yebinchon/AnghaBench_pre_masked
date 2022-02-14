
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {int id; } ;
typedef TYPE_1__ SDL_mutex ;
typedef TYPE_1__ SDL_cond ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int *,int *,struct timespec*) ;

int FUNC_3(SDL_cond *VAR_3, SDL_mutex *VAR_4, uint32_t VAR_5)
{
    int VAR_6;
    struct timeval VAR_7;
    struct timespec VAR_8;

    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    if (!VAR_3 || !VAR_4) {
        return -1;
    }

    FUNC_1(&VAR_7, ((void*)0));

    VAR_8.tv_sec = VAR_7.tv_sec + (VAR_5 / 1000);
    VAR_8.tv_nsec = (VAR_7.tv_usec + (VAR_5 % 1000) * 1000) * 1000;
    if (VAR_8.tv_nsec > 1000000000) {
        VAR_8.tv_sec += 1;
        VAR_8.tv_nsec -= 1000000000;
    }

    while (1) {
        VAR_6 = FUNC_2(&VAR_3->id, &VAR_4->id, &VAR_8);
        if (VAR_6 == 0)
            return 0;
        else if (VAR_6 == VAR_0)
            continue;
        else if (VAR_6 == VAR_1)
            return VAR_2;
        else
            break;
    }

    return -1;
}
