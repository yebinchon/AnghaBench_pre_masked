
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int smallbufs; int bufs; } ;
struct TYPE_4__ {int input; } ;
struct st_h2o_evloop_socket_t {int fd; int _flags; struct st_h2o_evloop_socket_t* _next_statechanged; struct st_h2o_evloop_socket_t* _next_pending; TYPE_1__ _wreq; int * loop; TYPE_2__ super; } ;
typedef int h2o_evloop_t ;


 int FUNC_0 (struct st_h2o_evloop_socket_t*) ;
 int FUNC_1 (int *,int *) ;
 struct st_h2o_evloop_socket_t* FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct st_h2o_evloop_socket_t*,int ,int) ;

__attribute__((used)) static struct st_h2o_evloop_socket_t *FUNC_4(h2o_evloop_t *VAR_1, int VAR_2, int VAR_3)
{
    struct st_h2o_evloop_socket_t *VAR_4;

    VAR_4 = FUNC_2(sizeof(*VAR_4));
    FUNC_3(VAR_4, 0, sizeof(*VAR_4));
    FUNC_1(&VAR_4->super.input, &VAR_0);
    VAR_4->loop = VAR_1;
    VAR_4->fd = VAR_2;
    VAR_4->_flags = VAR_3;
    VAR_4->_wreq.bufs = VAR_4->_wreq.smallbufs;
    VAR_4->_next_pending = VAR_4;
    VAR_4->_next_statechanged = VAR_4;

    FUNC_0(VAR_4);

    return VAR_4;
}
