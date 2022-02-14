
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ num_threads; int num_threads_idle; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_7(void)
{
    pthread_t VAR_2;
    pthread_attr_t VAR_3;
    int VAR_4;

    FUNC_3(&VAR_3);
    FUNC_4(&VAR_3, 1);
    FUNC_5(&VAR_3, 100 * 1024);
    if ((VAR_4 = FUNC_6(&VAR_2, ((void*)0), VAR_0, ((void*)0))) != 0) {
        char VAR_5[128];
        if (VAR_1.num_threads == 0) {
            FUNC_1("failed to start first thread for getaddrinfo: %s", FUNC_2(VAR_4, VAR_5, sizeof(VAR_5)));
        } else {
            FUNC_0("pthread_create(for getaddrinfo): %s", FUNC_2(VAR_4, VAR_5, sizeof(VAR_5)));
        }
        return;
    }

    ++VAR_1.num_threads;
    ++VAR_1.num_threads_idle;
}
