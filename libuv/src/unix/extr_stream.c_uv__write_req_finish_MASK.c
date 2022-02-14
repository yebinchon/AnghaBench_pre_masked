
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; int queue; int * bufs; int * bufsml; TYPE_2__* handle; } ;
typedef TYPE_1__ uv_write_t ;
struct TYPE_5__ {int io_watcher; int loop; int write_completed_queue; } ;
typedef TYPE_2__ uv_stream_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(uv_write_t* VAR_0) {
  uv_stream_t* VAR_1 = VAR_0->handle;


  FUNC_1(&VAR_0->queue);







  if (VAR_0->error == 0) {
    if (VAR_0->bufs != VAR_0->bufsml)
      FUNC_2(VAR_0->bufs);
    VAR_0->bufs = ((void*)0);
  }




  FUNC_0(&VAR_1->write_completed_queue, &VAR_0->queue);
  FUNC_3(VAR_1->loop, &VAR_1->io_watcher);
}
