
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ total_bytes; } ;
struct udp_msg {TYPE_1__ raw; } ;
struct TYPE_4__ {int window_size; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct udp_msg*) ;

void FUNC_1 (struct udp_msg *VAR_1) {
  VAR_0->window_size -= VAR_1->raw.total_bytes;
  FUNC_0 (VAR_1);
}
