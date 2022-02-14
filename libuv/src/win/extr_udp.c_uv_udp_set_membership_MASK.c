
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_membership ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sockaddr_in*,char const*,int ) ;
 int FUNC_1 (int *,struct sockaddr_in6*,char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_3 (char const*,int ,struct sockaddr_in6*) ;

int FUNC_4(uv_udp_t* VAR_1,
                          const char* VAR_2,
                          const char* VAR_3,
                          uv_membership VAR_4) {
  struct sockaddr_in VAR_5;
  struct sockaddr_in6 VAR_6;

  if (FUNC_2(VAR_2, 0, &VAR_5) == 0)
    return FUNC_0(VAR_1, &VAR_5, VAR_3, VAR_4);
  else if (FUNC_3(VAR_2, 0, &VAR_6) == 0)
    return FUNC_1(VAR_1, &VAR_6, VAR_3, VAR_4);
  else
    return VAR_0;
}
