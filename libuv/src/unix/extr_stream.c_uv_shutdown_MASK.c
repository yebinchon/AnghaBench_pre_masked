
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; int flags; int io_watcher; int loop; TYPE_2__* shutdown_req; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_10__ {int cb; TYPE_1__* handle; } ;
typedef TYPE_2__ uv_shutdown_t ;
typedef int uv_shutdown_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(uv_shutdown_t* VAR_9, uv_stream_t* VAR_10, uv_shutdown_cb VAR_11) {
  FUNC_0(VAR_10->type == VAR_7 ||
         VAR_10->type == VAR_8 ||
         VAR_10->type == VAR_5);

  if (!(VAR_10->flags & VAR_4) ||
      VAR_10->flags & VAR_2 ||
      VAR_10->flags & VAR_3 ||
      FUNC_2(VAR_10)) {
    return VAR_1;
  }

  FUNC_0(FUNC_4(VAR_10) >= 0);


  FUNC_3(VAR_10->loop, VAR_9, VAR_6);
  VAR_9->handle = VAR_10;
  VAR_9->cb = VAR_11;
  VAR_10->shutdown_req = VAR_9;
  VAR_10->flags |= VAR_3;

  FUNC_1(VAR_10->loop, &VAR_10->io_watcher, VAR_0);
  FUNC_5(VAR_10);

  return 0;
}
