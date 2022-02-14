
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int cnt; TYPE_4__* bufs; TYPE_4__* alloced_ptr; TYPE_4__* smallbufs; } ;
struct TYPE_9__ {int * write; } ;
struct TYPE_10__ {TYPE_1__ _cb; } ;
struct st_h2o_evloop_socket_t {TYPE_3__ _wreq; int _flags; int fd; TYPE_2__ super; } ;
typedef int h2o_socket_t ;
typedef int * h2o_socket_cb ;
struct TYPE_12__ {scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_4__ h2o_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_4__ FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (struct st_h2o_evloop_socket_t*) ;
 int FUNC_5 (struct st_h2o_evloop_socket_t*) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__**,size_t*,size_t*) ;

void FUNC_7(h2o_socket_t *VAR_1, h2o_iovec_t *VAR_2, size_t VAR_3, h2o_socket_cb VAR_4)
{
    struct st_h2o_evloop_socket_t *VAR_5 = (struct st_h2o_evloop_socket_t *)VAR_1;
    size_t VAR_6, VAR_7;

    FUNC_1(VAR_5->super._cb.write == ((void*)0));
    FUNC_1(VAR_5->_wreq.cnt == 0);
    VAR_5->super._cb.write = VAR_4;


    if (FUNC_6(VAR_5->fd, &VAR_2, &VAR_3, &VAR_6) != 0) {

        VAR_5->_wreq.bufs = VAR_5->_wreq.smallbufs;
        VAR_5->_wreq.cnt = 1;
        *VAR_5->_wreq.bufs = FUNC_2(FUNC_0("deadbeef"));
        VAR_5->_flags |= VAR_0;
        FUNC_4(VAR_5);
        return;
    }
    if (VAR_3 == 0) {

        VAR_5->_flags |= VAR_0;
        FUNC_4(VAR_5);
        return;
    }


    if (VAR_3 <= sizeof(VAR_5->_wreq.smallbufs) / sizeof(VAR_5->_wreq.smallbufs[0])) {
        VAR_5->_wreq.bufs = VAR_5->_wreq.smallbufs;
    } else {
        VAR_5->_wreq.bufs = FUNC_3(sizeof(h2o_iovec_t) * VAR_3);
        VAR_5->_wreq.alloced_ptr = VAR_5->_wreq.bufs;
    }
    VAR_5->_wreq.bufs[0].base = VAR_2[0].base + VAR_6;
    VAR_5->_wreq.bufs[0].len = VAR_2[0].len - VAR_6;
    for (VAR_7 = 1; VAR_7 < VAR_3; ++VAR_7)
        VAR_5->_wreq.bufs[VAR_7] = VAR_2[VAR_7];
    VAR_5->_wreq.cnt = VAR_3;


    FUNC_5(VAR_5);
}
