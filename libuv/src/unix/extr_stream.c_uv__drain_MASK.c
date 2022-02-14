
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; int loop; TYPE_2__* shutdown_req; int io_watcher; int write_queue; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_11__ {int (* cb ) (TYPE_2__*,int) ;} ;
typedef TYPE_2__ uv_shutdown_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(uv_stream_t* VAR_6) {
  uv_shutdown_t* VAR_7;
  int VAR_8;

  FUNC_2(FUNC_0(&VAR_6->write_queue));
  FUNC_5(VAR_6->loop, &VAR_6->io_watcher, VAR_0);
  FUNC_8(VAR_6);


  if ((VAR_6->flags & VAR_4) &&
      !(VAR_6->flags & VAR_2) &&
      !(VAR_6->flags & VAR_3)) {
    FUNC_2(VAR_6->shutdown_req);

    VAR_7 = VAR_6->shutdown_req;
    VAR_6->shutdown_req = ((void*)0);
    VAR_6->flags &= ~VAR_4;
    FUNC_6(VAR_6->loop, VAR_7);

    VAR_8 = 0;
    if (FUNC_3(FUNC_7(VAR_6), VAR_1))
      VAR_8 = FUNC_1(VAR_5);

    if (VAR_8 == 0)
      VAR_6->flags |= VAR_3;

    if (VAR_7->cb != ((void*)0))
      VAR_7->cb(VAR_7, VAR_8);
  }
}
