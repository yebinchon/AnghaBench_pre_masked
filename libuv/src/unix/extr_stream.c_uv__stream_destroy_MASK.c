
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; scalar_t__ write_queue_size; TYPE_5__* shutdown_req; int loop; TYPE_5__* connect_req; int io_watcher; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_9__ {int (* cb ) (TYPE_5__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(uv_stream_t* VAR_4) {
  FUNC_0(!FUNC_3(&VAR_4->io_watcher, VAR_0 | VAR_1));
  FUNC_0(VAR_4->flags & VAR_3);

  if (VAR_4->connect_req) {
    FUNC_4(VAR_4->loop, VAR_4->connect_req);
    VAR_4->connect_req->cb(VAR_4->connect_req, VAR_2);
    VAR_4->connect_req = ((void*)0);
  }

  FUNC_5(VAR_4, VAR_2);
  FUNC_6(VAR_4);

  if (VAR_4->shutdown_req) {





    FUNC_4(VAR_4->loop, VAR_4->shutdown_req);
    VAR_4->shutdown_req->cb(VAR_4->shutdown_req, VAR_2);
    VAR_4->shutdown_req = ((void*)0);
  }

  FUNC_0(VAR_4->write_queue_size == 0);
}
