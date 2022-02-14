
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int io_watcher; int loop; int * recv_cb; int * alloc_cb; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int * uv_udp_recv_cb ;
typedef int * uv_alloc_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

int FUNC_4(uv_udp_t* VAR_4,
                       uv_alloc_cb VAR_5,
                       uv_udp_recv_cb VAR_6) {
  int VAR_7;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
    return VAR_3;

  if (FUNC_1(&VAR_4->io_watcher, VAR_1))
    return VAR_2;

  VAR_7 = FUNC_3(VAR_4, VAR_0, 0);
  if (VAR_7)
    return VAR_7;

  VAR_4->alloc_cb = VAR_5;
  VAR_4->recv_cb = VAR_6;

  FUNC_2(VAR_4->loop, &VAR_4->io_watcher, VAR_1);
  FUNC_0(VAR_4);

  return 0;
}
