
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sun_path; } ;
struct TYPE_4__ {int serv_sock_fd; TYPE_1__ serv_addr_sun; scalar_t__ server_flag; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(int VAR_1)
{
 int VAR_2;

 VAR_2 = 0;
 if (FUNC_0(VAR_1) < 0) {
  FUNC_1("socket_close: close");
  VAR_2 = -1;
 }
 if (VAR_0.server_flag && VAR_1 == VAR_0.serv_sock_fd)
  if (FUNC_2(VAR_0.serv_addr_sun.sun_path) < 0) {
   FUNC_1("socket_close: unlink(%s)",
       VAR_0.serv_addr_sun.sun_path);
   VAR_2 = -1;
  }
 return (VAR_2);
}
