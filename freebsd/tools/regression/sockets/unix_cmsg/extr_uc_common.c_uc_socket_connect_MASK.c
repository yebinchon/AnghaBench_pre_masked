
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {int sun_path; int sun_len; } ;
struct TYPE_4__ {TYPE_1__ serv_addr_sun; } ;


 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(int VAR_1)
{
 FUNC_1("connect");

 if (FUNC_0(VAR_1, (struct sockaddr *)&VAR_0.serv_addr_sun,
     VAR_0.serv_addr_sun.sun_len) < 0) {
  FUNC_2("socket_connect: connect(%s)", VAR_0.serv_addr_sun.sun_path);
  return (-1);
 }
 return (0);
}
