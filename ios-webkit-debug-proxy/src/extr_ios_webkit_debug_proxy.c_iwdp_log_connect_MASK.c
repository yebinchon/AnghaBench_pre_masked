
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* iwdp_iport_t ;
struct TYPE_3__ {char* device_id; int port; char* device_name; } ;


 int FUNC_0 (char*,int,...) ;

void FUNC_1(iwdp_iport_t VAR_0) {
  if (VAR_0->device_id) {
    FUNC_0("Connected :%d to %s (%s)\n", VAR_0->port, VAR_0->device_name,
        VAR_0->device_id);
  } else {
    FUNC_0("Listing devices on :%d\n", VAR_0->port);
  }
}
