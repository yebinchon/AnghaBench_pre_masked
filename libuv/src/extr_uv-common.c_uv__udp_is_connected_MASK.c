
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ uv_udp_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,struct sockaddr*,int*) ;

int FUNC_1(uv_udp_t* VAR_1) {
  struct sockaddr_storage VAR_2;
  int VAR_3;
  if (VAR_1->type != VAR_0)
    return 0;

  VAR_3 = sizeof(VAR_2);
  if (FUNC_0(VAR_1, (struct sockaddr*) &VAR_2, &VAR_3) != 0)
    return 0;

  return VAR_3 > 0;
}
