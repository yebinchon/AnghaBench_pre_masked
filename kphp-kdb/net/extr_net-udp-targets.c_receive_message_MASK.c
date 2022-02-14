
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_target {int dummy; } ;
struct udp_socket {int dummy; } ;
struct TYPE_3__ {int total_bytes; } ;
struct udp_msg {TYPE_1__ raw; } ;
struct TYPE_4__ {int (* on_receive ) (struct udp_msg*) ;} ;
 TYPE_2__* FUNC_0 (struct udp_socket*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int*,int) ;
 int FUNC_3 (struct udp_msg*) ;
 int FUNC_4 (struct udp_msg*) ;
 int FUNC_5 (struct udp_msg*) ;
 int FUNC_6 (struct udp_msg*) ;
 int FUNC_7 (struct udp_msg*) ;
 int FUNC_8 (struct udp_msg*) ;
 int FUNC_9 (struct udp_msg*) ;

int FUNC_10 (struct udp_socket *VAR_0, struct udp_target *VAR_1, struct udp_msg *VAR_2) {
  if (VAR_2->raw.total_bytes >= 4) {

    int VAR_3;
    FUNC_1 (FUNC_2 (&VAR_2->raw, &VAR_3, 4) == 4);
    switch (VAR_3) {
    case 129:
      FUNC_8 (VAR_2);
      return 0;
    case 128:
      FUNC_9 (VAR_2);
      return 0;
    case 133:
      return 0;
    case 134:
      return 0;
    case 130:
      FUNC_7 (VAR_2);
      return 0;
    case 131:
      FUNC_6 (VAR_2);
      return 0;
    case 132:
      FUNC_5 (VAR_2);
      return 0;
    default:
      FUNC_0 (VAR_0)->on_receive (VAR_2);
      return 0;
    }
  } else {
    FUNC_0 (VAR_0)->on_receive (VAR_2);

    return 0;
  }
}
