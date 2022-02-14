
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 scalar_t__ FUNC_0 (int *,struct sockaddr*,int*) ;

int FUNC_1(uv_udp_t* VAR_0) {
  struct sockaddr_storage VAR_1;
  int VAR_2;

  VAR_2 = sizeof(VAR_1);
  if (FUNC_0(VAR_0, (struct sockaddr*) &VAR_1, &VAR_2) != 0)
    return 0;

  return VAR_2 > 0;
}
