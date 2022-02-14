
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_buf_t ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int *,struct sockaddr const*) ;
 int FUNC_1 (int *,int const*,unsigned int,struct sockaddr const*,int) ;

int FUNC_2(uv_udp_t* VAR_0,
                    const uv_buf_t VAR_1[],
                    unsigned int VAR_2,
                    const struct sockaddr* VAR_3) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_3);
  if (VAR_4 < 0)
    return VAR_4;

  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
