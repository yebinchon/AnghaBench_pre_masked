
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * recv_cb; int * alloc_cb; int io_watcher; int loop; } ;
typedef TYPE_1__ uv_udp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;

int FUNC_3(uv_udp_t* VAR_2) {
  FUNC_2(VAR_2->loop, &VAR_2->io_watcher, VAR_0);

  if (!FUNC_1(&VAR_2->io_watcher, VAR_1))
    FUNC_0(VAR_2);

  VAR_2->alloc_cb = ((void*)0);
  VAR_2->recv_cb = ((void*)0);

  return 0;
}
