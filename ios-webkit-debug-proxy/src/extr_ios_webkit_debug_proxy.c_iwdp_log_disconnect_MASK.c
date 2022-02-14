
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* iwdp_iport_t ;
struct TYPE_5__ {int port; char* device_name; char* device_id; TYPE_1__* iwi; } ;
struct TYPE_4__ {scalar_t__ connected; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(iwdp_iport_t VAR_0) {
  if (VAR_0->iwi && VAR_0->iwi->connected) {
    FUNC_0("Disconnected :%d from %s (%s)\n", VAR_0->port,
        VAR_0->device_name, VAR_0->device_id);
  } else {
    FUNC_0("Unable to connect to %s (%s)\n  Please"
        " verify that Settings > Safari > Advanced > Web Inspector = ON\n",
        VAR_0->device_name, VAR_0->device_id);
  }
}
