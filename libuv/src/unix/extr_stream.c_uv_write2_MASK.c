
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {unsigned int nbufs; int queue; scalar_t__ write_index; int * bufs; int * bufsml; TYPE_2__* send_handle; scalar_t__ error; TYPE_2__* handle; int cb; } ;
typedef TYPE_1__ uv_write_t ;
typedef int uv_write_cb ;
struct TYPE_12__ {scalar_t__ type; int flags; scalar_t__ write_queue_size; int io_watcher; int loop; scalar_t__ connect_req; int write_queue; } ;
typedef TYPE_2__ uv_stream_t ;
struct TYPE_13__ {int ipc; } ;
typedef TYPE_3__ uv_pipe_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
typedef int bufs ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int const*,unsigned int) ;
 scalar_t__ FUNC_5 (int const*,unsigned int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (unsigned int) ;
 int FUNC_9 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;

int FUNC_13(uv_write_t* VAR_12,
              uv_stream_t* VAR_13,
              const uv_buf_t VAR_14[],
              unsigned int VAR_15,
              uv_stream_t* VAR_16,
              uv_write_cb VAR_17) {
  int VAR_18;

  FUNC_3(VAR_15 > 0);
  FUNC_3((VAR_13->type == VAR_9 ||
          VAR_13->type == VAR_8 ||
          VAR_13->type == VAR_10) &&
         "uv_write (unix) does not yet support other types of streams");

  if (FUNC_10(VAR_13) < 0)
    return VAR_1;

  if (!(VAR_13->flags & VAR_7))
    return VAR_5;

  if (VAR_16) {
    if (VAR_13->type != VAR_8 || !((uv_pipe_t*)VAR_13)->ipc)
      return VAR_2;







    if (FUNC_6((uv_handle_t*) VAR_16) < 0)
      return VAR_1;






  }







  VAR_18 = (VAR_13->write_queue_size == 0);


  FUNC_9(VAR_13->loop, VAR_12, VAR_11);
  VAR_12->cb = VAR_17;
  VAR_12->handle = VAR_13;
  VAR_12->error = 0;
  VAR_12->send_handle = VAR_16;
  FUNC_1(&VAR_12->queue);

  VAR_12->bufs = VAR_12->bufsml;
  if (VAR_15 > FUNC_0(VAR_12->bufsml))
    VAR_12->bufs = FUNC_8(VAR_15 * sizeof(VAR_14[0]));

  if (VAR_12->bufs == ((void*)0))
    return VAR_3;

  FUNC_4(VAR_12->bufs, VAR_14, VAR_15 * sizeof(VAR_14[0]));
  VAR_12->nbufs = VAR_15;
  VAR_12->write_index = 0;
  VAR_13->write_queue_size += FUNC_5(VAR_14, VAR_15);


  FUNC_2(&VAR_13->write_queue, &VAR_12->queue);





  if (VAR_13->connect_req) {

  }
  else if (VAR_18) {
    FUNC_12(VAR_13);
  }
  else {





    FUNC_3(!(VAR_13->flags & VAR_6));
    FUNC_7(VAR_13->loop, &VAR_13->io_watcher, VAR_0);
    FUNC_11(VAR_13);
  }

  return 0;
}
