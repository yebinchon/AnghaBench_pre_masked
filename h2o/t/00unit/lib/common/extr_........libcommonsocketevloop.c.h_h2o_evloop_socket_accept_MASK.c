
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct st_h2o_evloop_socket_t {int loop; int fd; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int peeraddr ;
struct TYPE_9__ {int _skip_tracing; } ;
typedef TYPE_1__ h2o_socket_t ;
typedef int flag ;
struct TYPE_12__ {TYPE_1__ super; } ;
struct TYPE_11__ {TYPE_1__ super; } ;
struct TYPE_10__ {scalar_t__ skip_tracing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct sockaddr*,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct sockaddr*,int*) ;
 TYPE_8__* FUNC_3 (int ,int,int ) ;
 TYPE_7__* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int,int ,int ) ;
 scalar_t__ FUNC_6 (int,int ,int ,int*,int*) ;
 int VAR_7 ;
 TYPE_3__ FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,struct sockaddr*,int) ;

h2o_socket_t *FUNC_9(h2o_socket_t *VAR_8)
{
    struct st_h2o_evloop_socket_t *VAR_9 = (struct st_h2o_evloop_socket_t *)VAR_8;
    int VAR_10;
    h2o_socket_t *VAR_11;






    struct sockaddr_storage *VAR_12 = ((void*)0);
    socklen_t *VAR_13 = ((void*)0);
    if ((VAR_10 = FUNC_2(VAR_9->fd, (struct sockaddr *)VAR_12, VAR_13)) == -1)
        return ((void*)0);
    FUNC_5(VAR_10, VAR_0, VAR_3);
    VAR_11 = &FUNC_4(VAR_9->loop, VAR_10, VAR_1)->super;


    if (VAR_12 != ((void*)0) && *VAR_13 <= sizeof(*VAR_12))
        FUNC_8(VAR_11, (struct sockaddr *)VAR_12, *VAR_13);
    if (FUNC_7(VAR_9->loop, VAR_7, VAR_11).skip_tracing)
        VAR_11->_skip_tracing = 1;
    return VAR_11;
}
