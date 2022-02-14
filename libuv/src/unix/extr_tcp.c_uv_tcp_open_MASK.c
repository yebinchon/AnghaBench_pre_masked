
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int loop; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_os_sock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(uv_tcp_t* VAR_3, uv_os_sock_t VAR_4) {
  int VAR_5;

  if (FUNC_0(VAR_3->loop, VAR_4))
    return VAR_0;

  VAR_5 = FUNC_1(VAR_4, 1);
  if (VAR_5)
    return VAR_5;

  return FUNC_2((uv_stream_t*)VAR_3,
                         VAR_4,
                         VAR_1 | VAR_2);
}
