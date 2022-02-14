
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_evloop_epoll_t {int super; int ep; } ;
typedef int h2o_evloop_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

h2o_evloop_t *FUNC_7(void)
{
    struct st_h2o_evloop_epoll_t *VAR_5 = (struct st_h2o_evloop_epoll_t *)FUNC_0(sizeof(*VAR_5));

    FUNC_5(&VAR_3);
    VAR_5->ep = FUNC_1(10);
    while (FUNC_2(VAR_5->ep, VAR_2, VAR_1) == -1) {
        if (VAR_4 != VAR_0) {
            char VAR_6[128];
            FUNC_3("h2o_evloop_create: failed to set FD_CLOEXEC: %s\n", FUNC_4(VAR_4, VAR_6, sizeof(VAR_6)));
        }
    }
    FUNC_6(&VAR_3);

    return &VAR_5->super;
}
