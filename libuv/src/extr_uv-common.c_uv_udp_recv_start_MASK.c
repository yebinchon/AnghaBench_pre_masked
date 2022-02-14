
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int * uv_udp_recv_cb ;
typedef int * uv_alloc_cb ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;

int FUNC_1(uv_udp_t* VAR_2,
                      uv_alloc_cb VAR_3,
                      uv_udp_recv_cb VAR_4) {
  if (VAR_2->type != VAR_1 || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
    return VAR_0;
  else
    return FUNC_0(VAR_2, VAR_3, VAR_4);
}
