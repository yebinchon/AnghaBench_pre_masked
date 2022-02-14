
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_udp_t ;
struct TYPE_7__ {scalar_t__ loop; int accepted_fd; int type; int io_watcher; TYPE_2__* queued_fds; int flags; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_8__ {int* fds; scalar_t__ offset; } ;
typedef TYPE_2__ uv__stream_queued_fds_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (int *,int) ;

int FUNC_7(uv_stream_t* VAR_6, uv_stream_t* VAR_7) {
  int VAR_8;

  FUNC_0(VAR_6->loop == VAR_7->loop);

  if (VAR_6->accepted_fd == -1)
    return VAR_1;

  switch (VAR_7->type) {
    case 130:
    case 129:
      VAR_8 = FUNC_5(VAR_7,
                            VAR_6->accepted_fd,
                            VAR_4 | VAR_5);
      if (VAR_8) {

        FUNC_2(VAR_6->accepted_fd);
        goto done;
      }
      break;

    case 128:
      VAR_8 = FUNC_6((uv_udp_t*) VAR_7, VAR_6->accepted_fd);
      if (VAR_8) {
        FUNC_2(VAR_6->accepted_fd);
        goto done;
      }
      break;

    default:
      return VAR_2;
  }

  VAR_7->flags |= VAR_3;

done:

  if (VAR_6->queued_fds != ((void*)0)) {
    uv__stream_queued_fds_t* VAR_9;

    VAR_9 = VAR_6->queued_fds;


    VAR_6->accepted_fd = VAR_9->fds[0];


    FUNC_0(VAR_9->offset > 0);
    if (--VAR_9->offset == 0) {
      FUNC_3(VAR_9);
      VAR_6->queued_fds = ((void*)0);
    } else {

      FUNC_1(VAR_9->fds,
              VAR_9->fds + 1,
              VAR_9->offset * sizeof(*VAR_9->fds));
    }
  } else {
    VAR_6->accepted_fd = -1;
    if (VAR_8 == 0)
      FUNC_4(VAR_6->loop, &VAR_6->io_watcher, VAR_0);
  }
  return VAR_8;
}
