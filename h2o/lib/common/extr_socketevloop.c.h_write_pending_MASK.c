
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cnt; TYPE_4__* bufs; } ;
struct TYPE_5__ {int * write; } ;
struct TYPE_6__ {TYPE_1__ _cb; } ;
struct st_h2o_evloop_socket_t {int _flags; TYPE_3__ _wreq; int fd; TYPE_2__ super; } ;
struct TYPE_8__ {size_t base; size_t len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct st_h2o_evloop_socket_t*) ;
 int FUNC_2 (struct st_h2o_evloop_socket_t*) ;
 int FUNC_3 (struct st_h2o_evloop_socket_t*) ;
 scalar_t__ FUNC_4 (int ,TYPE_4__**,scalar_t__*,size_t*) ;

void FUNC_5(struct st_h2o_evloop_socket_t *VAR_1)
{
    size_t VAR_2;

    FUNC_0(VAR_1->super._cb.write != ((void*)0));


    if (VAR_1->_wreq.cnt == 0)
        goto Complete;


    if (FUNC_4(VAR_1->fd, &VAR_1->_wreq.bufs, &VAR_1->_wreq.cnt, &VAR_2) == 0 && VAR_1->_wreq.cnt != 0) {

        VAR_1->_wreq.bufs[0].base += VAR_2;
        VAR_1->_wreq.bufs[0].len -= VAR_2;
        return;
    }


    FUNC_3(VAR_1);

Complete:
    VAR_1->_flags |= VAR_0;
    FUNC_1(VAR_1);
    FUNC_2(VAR_1);
}
