
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op; int type; } ;
typedef TYPE_1__ dhcp_message_t ;



 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;

int FUNC_2 (dhcp_message_t *VAR_0, unsigned char *VAR_1, int VAR_2) {
  if (VAR_0->op != 1) {
    FUNC_1 (2, "Op code isn't BOOTREQUEST.\n");
    return -1;
  }

  switch (VAR_0->type) {
    case 128: return FUNC_0 (VAR_0, VAR_1, VAR_2);
    default: return -1;
  }
  return -1;
}
