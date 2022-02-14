
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int h2o_conn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static socklen_t FUNC_2(h2o_conn_t *VAR_1, struct sockaddr *VAR_2)
{
    struct sockaddr_in *VAR_3 = (void *)VAR_2;
    VAR_3->sin_family = VAR_0;
    VAR_3->sin_addr.s_addr = FUNC_0(0x7f000001);
    VAR_3->sin_port = FUNC_1(80);
    return sizeof(*VAR_3);
}
