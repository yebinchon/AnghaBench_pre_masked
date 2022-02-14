
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write_completed_queue; int write_queue; int io_watcher; scalar_t__ send_queue_count; scalar_t__ send_queue_size; int * recv_cb; int * alloc_cb; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_6 ;

int FUNC_4(uv_loop_t* VAR_7, uv_udp_t* VAR_8, unsigned int VAR_9) {
  int VAR_10;
  int VAR_11;
  int VAR_12;


  VAR_10 = VAR_9 & 0xFF;
  if (VAR_10 != VAR_0 && VAR_10 != VAR_1 && VAR_10 != VAR_2)
    return VAR_4;

  if (VAR_9 & ~0xFF)
    return VAR_4;

  if (VAR_10 != VAR_2) {
    VAR_11 = FUNC_3(VAR_10, VAR_3, 0);
    if (VAR_11 < 0)
      return VAR_11;
    VAR_12 = VAR_11;
  } else {
    VAR_12 = -1;
  }

  FUNC_1(VAR_7, (uv_handle_t*)VAR_8, VAR_5);
  VAR_8->alloc_cb = ((void*)0);
  VAR_8->recv_cb = ((void*)0);
  VAR_8->send_queue_size = 0;
  VAR_8->send_queue_count = 0;
  FUNC_2(&VAR_8->io_watcher, VAR_6, VAR_12);
  FUNC_0(&VAR_8->write_queue);
  FUNC_0(&VAR_8->write_completed_queue);

  return 0;
}
