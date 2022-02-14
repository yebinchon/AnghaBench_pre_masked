
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_membership ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,struct sockaddr_in*,char const*,int ) ;
 int FUNC_2 (int *,struct sockaddr_in6*,char const*,int ) ;
 scalar_t__ FUNC_3 (char const*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_4 (char const*,int ,struct sockaddr_in6*) ;

int FUNC_5(uv_udp_t* VAR_4,
                          const char* VAR_5,
                          const char* VAR_6,
                          uv_membership VAR_7) {
  int VAR_8;
  struct sockaddr_in VAR_9;
  struct sockaddr_in6 VAR_10;

  if (FUNC_3(VAR_5, 0, &VAR_9) == 0) {
    VAR_8 = FUNC_0(VAR_4, VAR_0, VAR_3);
    if (VAR_8)
      return VAR_8;
    return FUNC_1(VAR_4, &VAR_9, VAR_6, VAR_7);
  } else if (FUNC_4(VAR_5, 0, &VAR_10) == 0) {
    VAR_8 = FUNC_0(VAR_4, VAR_1, VAR_3);
    if (VAR_8)
      return VAR_8;
    return FUNC_2(VAR_4, &VAR_10, VAR_6, VAR_7);
  } else {
    return VAR_2;
  }
}
