
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct sockaddr const*,unsigned int,unsigned int) ;

int FUNC_2(uv_udp_t* VAR_0,
                 const struct sockaddr* VAR_1,
                 unsigned int VAR_2,
                 unsigned int VAR_3) {
  int VAR_4;

  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_4)
    return FUNC_0(VAR_4);

  return 0;
}
