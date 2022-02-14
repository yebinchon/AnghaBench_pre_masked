
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int accepted_fd; int io_watcher; int * select; scalar_t__ write_queue_size; int write_completed_queue; int write_queue; scalar_t__ delayed_error; int * queued_fds; int * shutdown_req; int * connect_req; int * connection_cb; int * close_cb; int * alloc_cb; int * read_cb; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_7__ {int emfile_fd; } ;
typedef TYPE_2__ uv_loop_t ;
typedef int uv_handle_type ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

void FUNC_4(uv_loop_t* VAR_2,
                     uv_stream_t* VAR_3,
                     uv_handle_type VAR_4) {
  int VAR_5;

  FUNC_1(VAR_2, (uv_handle_t*)VAR_3, VAR_4);
  VAR_3->read_cb = ((void*)0);
  VAR_3->alloc_cb = ((void*)0);
  VAR_3->close_cb = ((void*)0);
  VAR_3->connection_cb = ((void*)0);
  VAR_3->connect_req = ((void*)0);
  VAR_3->shutdown_req = ((void*)0);
  VAR_3->accepted_fd = -1;
  VAR_3->queued_fds = ((void*)0);
  VAR_3->delayed_error = 0;
  FUNC_0(&VAR_3->write_queue);
  FUNC_0(&VAR_3->write_completed_queue);
  VAR_3->write_queue_size = 0;

  if (VAR_2->emfile_fd == -1) {
    VAR_5 = FUNC_3("/dev/null", VAR_0);
    if (VAR_5 < 0)



        VAR_5 = FUNC_3("/", VAR_0);
    if (VAR_5 >= 0)
      VAR_2->emfile_fd = VAR_5;
  }





  FUNC_2(&VAR_3->io_watcher, VAR_1, -1);
}
