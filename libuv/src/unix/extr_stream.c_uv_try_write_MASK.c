
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ error; int * bufs; int * bufsml; int queue; } ;
typedef TYPE_1__ uv_write_t ;
struct TYPE_10__ {scalar_t__ write_queue_size; int io_watcher; int loop; int * connect_req; } ;
typedef TYPE_2__ uv_stream_t ;
typedef int uv_buf_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 size_t FUNC_1 (int const*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 size_t FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int const*,unsigned int,int ) ;

int FUNC_9(uv_stream_t* VAR_3,
                 const uv_buf_t VAR_4[],
                 unsigned int VAR_5) {
  int VAR_6;
  int VAR_7;
  size_t VAR_8;
  size_t VAR_9;
  uv_write_t VAR_10;


  if (VAR_3->connect_req != ((void*)0) || VAR_3->write_queue_size != 0)
    return VAR_1;

  VAR_7 = FUNC_3(&VAR_3->io_watcher, VAR_0);

  VAR_6 = FUNC_8(&VAR_10, VAR_3, VAR_4, VAR_5, VAR_2);
  if (VAR_6 != 0)
    return VAR_6;


  VAR_8 = FUNC_1(VAR_4, VAR_5);
  if (VAR_10.bufs != ((void*)0))
    VAR_9 = FUNC_7(&VAR_10);
  else
    VAR_9 = 0;
  VAR_8 -= VAR_9;
  VAR_3->write_queue_size -= VAR_9;


  FUNC_0(&VAR_10.queue);
  FUNC_5(VAR_3->loop, &VAR_10);
  if (VAR_10.bufs != VAR_10.bufsml)
    FUNC_2(VAR_10.bufs);
  VAR_10.bufs = ((void*)0);


  if (!VAR_7) {
    FUNC_4(VAR_3->loop, &VAR_3->io_watcher, VAR_0);
    FUNC_6(VAR_3);
  }

  if (VAR_8 == 0 && VAR_9 != 0)
    return VAR_10.error < 0 ? VAR_10.error : VAR_1;
  else
    return VAR_8;
}
