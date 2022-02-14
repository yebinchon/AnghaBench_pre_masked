
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
struct TYPE_2__ {scalar_t__ p_frame; scalar_t__ d_frame; int p_done; int particles_lock; int dt; int t; int d_done; } ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,struct timespec*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_7(void* VAR_2)
{
    GLFWwindow* VAR_3 = VAR_2;

    for (;;)
    {
        FUNC_4(&VAR_1.particles_lock);


        while (!FUNC_3(VAR_3) &&
               VAR_1.p_frame > VAR_1.d_frame)
        {
            struct timespec VAR_4;
            FUNC_0(VAR_0, &VAR_4);
            VAR_4.tv_nsec += 100 * 1000 * 1000;
            VAR_4.tv_sec += VAR_4.tv_nsec / (1000 * 1000 * 1000);
            VAR_4.tv_nsec %= 1000 * 1000 * 1000;
            FUNC_2(&VAR_1.d_done, &VAR_1.particles_lock, &VAR_4);
        }

        if (FUNC_3(VAR_3))
            break;


        FUNC_6(VAR_1.t, VAR_1.dt);


        VAR_1.p_frame++;


        FUNC_5(&VAR_1.particles_lock);
        FUNC_1(&VAR_1.p_done);
    }

    return 0;
}
