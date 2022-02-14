
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ write_queue_size; } ;
typedef TYPE_1__ uv_tcp_t ;
struct TYPE_6__ {scalar_t__ handle; } ;
typedef TYPE_2__ uv_shutdown_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(uv_shutdown_t* VAR_4, int VAR_5) {
  uv_tcp_t* VAR_6;

  FUNC_0(VAR_4 == &VAR_2);
  FUNC_0(VAR_5 == 0);

  VAR_6 = (uv_tcp_t*)(VAR_4->handle);


  FUNC_0(VAR_6->write_queue_size == 0);


  VAR_1++;


  FUNC_0(VAR_3 == VAR_0);
}
