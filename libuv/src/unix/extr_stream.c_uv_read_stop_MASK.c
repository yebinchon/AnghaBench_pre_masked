
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int * alloc_cb; int * read_cb; int io_watcher; int loop; } ;
typedef TYPE_1__ uv_stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(uv_stream_t* VAR_3) {
  if (!(VAR_3->flags & VAR_2))
    return 0;

  VAR_3->flags &= ~VAR_2;
  FUNC_2(VAR_3->loop, &VAR_3->io_watcher, VAR_0);
  if (!FUNC_1(&VAR_3->io_watcher, VAR_1))
    FUNC_0(VAR_3);
  FUNC_3(VAR_3);

  VAR_3->read_cb = ((void*)0);
  VAR_3->alloc_cb = ((void*)0);
  return 0;
}
