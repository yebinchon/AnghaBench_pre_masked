
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_4__ {int crypto_flags; int in_packet_num; } ;
struct TYPE_3__ {int (* rpc_ready ) (struct connection*) ;} ;


 TYPE_2__* FUNC_0 (struct connection*) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 int FUNC_2 (struct connection*) ;

int FUNC_3 (struct connection *VAR_0) {
  FUNC_0(VAR_0)->crypto_flags = 512 + 1;
  FUNC_0(VAR_0)->in_packet_num = -3;
  return FUNC_1(VAR_0)->rpc_ready ? FUNC_1(VAR_0)->rpc_ready (VAR_0) : 0;
}
