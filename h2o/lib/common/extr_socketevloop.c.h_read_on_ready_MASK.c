
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int (* read ) (TYPE_5__*,char const*) ;} ;
struct TYPE_12__ {size_t bytes_read; TYPE_4__ _cb; TYPE_6__* input; TYPE_3__* ssl; } ;
struct st_h2o_evloop_socket_t {int _flags; TYPE_5__ super; int fd; } ;
struct TYPE_13__ {size_t size; } ;
struct TYPE_9__ {int * cb; } ;
struct TYPE_8__ {TYPE_6__* encrypted; } ;
struct TYPE_10__ {TYPE_2__ handshake; TYPE_1__ input; } ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_5__*) ;
 char* FUNC_1 (int ,TYPE_6__**) ;
 int FUNC_2 (TYPE_5__*,char const*) ;

__attribute__((used)) static void FUNC_3(struct st_h2o_evloop_socket_t *VAR_1)
{
    const char *VAR_2 = 0;
    size_t VAR_3 = VAR_1->super.input->size;

    if ((VAR_1->_flags & VAR_0) != 0)
        goto Notify;

    if ((VAR_2 = FUNC_1(VAR_1->fd, VAR_1->super.ssl == ((void*)0) ? &VAR_1->super.input : &VAR_1->super.ssl->input.encrypted)) != ((void*)0))
        goto Notify;

    if (VAR_1->super.ssl != ((void*)0) && VAR_1->super.ssl->handshake.cb == ((void*)0))
        VAR_2 = FUNC_0(&VAR_1->super);

Notify:




    VAR_1->super.bytes_read = VAR_1->super.input->size - VAR_3;
    VAR_1->super._cb.read(&VAR_1->super, VAR_2);
}
