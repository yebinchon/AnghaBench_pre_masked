
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int socket; } ;
typedef TYPE_1__ uv_udp_t ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr*,int ,int) ;
 int FUNC_2 (int) ;

int FUNC_3(uv_udp_t* VAR_1) {
    int VAR_2;
    struct sockaddr VAR_3;

    FUNC_1(&VAR_3, 0, sizeof(VAR_3));

    VAR_2 = FUNC_0(VAR_1->socket, &VAR_3, sizeof(VAR_3));
    if (VAR_2)
      return FUNC_2(VAR_2);

    VAR_1->flags &= ~VAR_0;
    return 0;
}
