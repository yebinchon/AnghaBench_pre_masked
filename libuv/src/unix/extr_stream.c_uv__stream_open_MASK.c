
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {int flags; scalar_t__ type; TYPE_1__ io_watcher; } ;
typedef TYPE_2__ uv_stream_t ;
typedef int enable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int,int ,int ,int*,int) ;
 scalar_t__ FUNC_3 (int,int,int) ;
 scalar_t__ FUNC_4 (int,int) ;

int FUNC_5(uv_stream_t* VAR_9, int VAR_10, int VAR_11) {




  if (!(VAR_9->io_watcher.fd == -1 || VAR_9->io_watcher.fd == VAR_10))
    return VAR_4;

  FUNC_1(VAR_10 >= 0);
  VAR_9->flags |= VAR_11;

  if (VAR_9->type == VAR_7) {
    if ((VAR_9->flags & VAR_6) && FUNC_4(VAR_10, 1))
      return FUNC_0(VAR_8);


    if ((VAR_9->flags & VAR_5) &&
        FUNC_3(VAR_10, 1, 60)) {
      return FUNC_0(VAR_8);
    }
  }
  VAR_9->io_watcher.fd = VAR_10;

  return 0;
}
