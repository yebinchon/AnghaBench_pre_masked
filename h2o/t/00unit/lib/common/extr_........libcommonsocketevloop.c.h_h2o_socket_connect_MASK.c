
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_evloop_socket_t {int super; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;
typedef int h2o_socket_t ;
typedef int h2o_socket_cb ;
typedef int h2o_loop_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int ) ;
 struct st_h2o_evloop_socket_t* FUNC_3 (int *,int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *,int ) ;

h2o_socket_t *FUNC_6(h2o_loop_t *VAR_6, struct sockaddr *VAR_7, socklen_t VAR_8, h2o_socket_cb VAR_9)
{
    int VAR_10;
    struct st_h2o_evloop_socket_t *VAR_11;

    if ((VAR_10 = FUNC_0(VAR_7->sa_family, VAR_4, 0)) == -1)
        return ((void*)0);
    FUNC_4(VAR_10, VAR_1, VAR_3);
    if (!(FUNC_2(VAR_10, VAR_7, VAR_8) == 0 || VAR_5 == VAR_0)) {
        FUNC_1(VAR_10);
        return ((void*)0);
    }

    VAR_11 = FUNC_3(VAR_6, VAR_10, VAR_2);
    FUNC_5(&VAR_11->super, VAR_9);
    return &VAR_11->super;
}
