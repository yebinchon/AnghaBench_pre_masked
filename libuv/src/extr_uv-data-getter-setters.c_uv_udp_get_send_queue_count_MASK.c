
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t send_queue_count; } ;
typedef TYPE_1__ uv_udp_t ;



size_t FUNC_0(const uv_udp_t* VAR_0) {
  return VAR_0->send_queue_count;
}
