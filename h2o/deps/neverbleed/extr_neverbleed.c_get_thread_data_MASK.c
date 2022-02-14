
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_neverbleed_thread_data_t {scalar_t__ self_pid; int fd; } ;
typedef int ssize_t ;
typedef scalar_t__ pid_t ;
struct TYPE_3__ {int thread_key; int auth_token; int sun_; } ;
typedef TYPE_1__ neverbleed_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,void*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 () ;
 struct st_neverbleed_thread_data_t* FUNC_4 (int) ;
 struct st_neverbleed_thread_data_t* FUNC_5 (int ) ;
 int FUNC_6 (int ,struct st_neverbleed_thread_data_t*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int,int ,int) ;

struct st_neverbleed_thread_data_t *FUNC_10(neverbleed_t *VAR_5)
{
    struct st_neverbleed_thread_data_t *VAR_6;
    pid_t VAR_7 = FUNC_3();
    ssize_t VAR_8;

    if ((VAR_6 = FUNC_5(VAR_5->thread_key)) != ((void*)0)) {
        if (VAR_6->self_pid == VAR_7)
            return VAR_6;

        FUNC_0(VAR_6->fd);
    } else {
        if ((VAR_6 = FUNC_4(sizeof(*VAR_6))) == ((void*)0))
            FUNC_2("malloc failed");
    }

    VAR_6->self_pid = VAR_7;




    if ((VAR_6->fd = FUNC_8(VAR_1, VAR_3, 0)) == -1)
        FUNC_2("socket(2) failed");
    FUNC_7(VAR_6->fd);

    while (FUNC_1(VAR_6->fd, (void *)&VAR_5->sun_, sizeof(VAR_5->sun_)) != 0)
        if (VAR_4 != VAR_0)
            FUNC_2("failed to connect to privsep daemon");
    while ((VAR_8 = FUNC_9(VAR_6->fd, VAR_5->auth_token, sizeof(VAR_5->auth_token))) == -1 && VAR_4 == VAR_0)
        ;
    if (VAR_8 != sizeof(VAR_5->auth_token))
        FUNC_2("failed to send authentication token");
    FUNC_6(VAR_5->thread_key, VAR_6);

    return VAR_6;
}
