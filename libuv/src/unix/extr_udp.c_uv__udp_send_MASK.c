
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ send_queue_count; int flags; int io_watcher; int loop; int write_queue; int send_queue_size; } ;
typedef TYPE_1__ uv_udp_t ;
struct TYPE_16__ {int ss_family; } ;
struct TYPE_15__ {unsigned int nbufs; int queue; TYPE_9__* bufs; TYPE_9__* bufsml; TYPE_1__* handle; int send_cb; TYPE_9__ addr; } ;
typedef TYPE_2__ uv_udp_send_t ;
typedef int uv_udp_send_cb ;
struct sockaddr {int sa_family; } ;
typedef struct sockaddr uv_buf_t ;
typedef int bufs ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_9__*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_9__*,struct sockaddr const*,unsigned int) ;
 scalar_t__ FUNC_5 (TYPE_9__*,unsigned int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int *,int ) ;
 TYPE_9__* FUNC_8 (unsigned int) ;
 int FUNC_9 (int ,TYPE_2__*,int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;

int FUNC_13(uv_udp_send_t* VAR_5,
                 uv_udp_t* VAR_6,
                 const uv_buf_t VAR_7[],
                 unsigned int VAR_8,
                 const struct sockaddr* VAR_9,
                 unsigned int VAR_10,
                 uv_udp_send_cb VAR_11) {
  int VAR_12;
  int VAR_13;

  FUNC_3(VAR_8 > 0);

  if (VAR_9) {
    VAR_12 = FUNC_11(VAR_6, VAR_9->sa_family, 0);
    if (VAR_12)
      return VAR_12;
  }





  VAR_13 = (VAR_6->send_queue_count == 0);

  FUNC_9(VAR_6->loop, VAR_5, VAR_4);
  FUNC_3(VAR_10 <= sizeof(VAR_5->addr));
  if (VAR_9 == ((void*)0))
    VAR_5->addr.ss_family = VAR_0;
  else
    FUNC_4(&VAR_5->addr, VAR_9, VAR_10);
  VAR_5->send_cb = VAR_11;
  VAR_5->handle = VAR_6;
  VAR_5->nbufs = VAR_8;

  VAR_5->bufs = VAR_5->bufsml;
  if (VAR_8 > FUNC_0(VAR_5->bufsml))
    VAR_5->bufs = FUNC_8(VAR_8 * sizeof(VAR_7[0]));

  if (VAR_5->bufs == ((void*)0)) {
    FUNC_10(VAR_6->loop, VAR_5);
    return VAR_2;
  }

  FUNC_4(VAR_5->bufs, VAR_7, VAR_8 * sizeof(VAR_7[0]));
  VAR_6->send_queue_size += FUNC_5(VAR_5->bufs, VAR_5->nbufs);
  VAR_6->send_queue_count++;
  FUNC_2(&VAR_6->write_queue, &VAR_5->queue);
  FUNC_6(VAR_6);

  if (VAR_13 && !(VAR_6->flags & VAR_3)) {
    FUNC_12(VAR_6);





    if (!FUNC_1(&VAR_6->write_queue))
      FUNC_7(VAR_6->loop, &VAR_6->io_watcher, VAR_1);
  } else {
    FUNC_7(VAR_6->loop, &VAR_6->io_watcher, VAR_1);
  }

  return 0;
}
