
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_membership ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;


 int FUNC_0 (int *,struct sockaddr_in*,char const*,struct sockaddr_in*,int ) ;
 int FUNC_1 (int *,struct sockaddr_in6*,char const*,struct sockaddr_in6*,int ) ;
 int FUNC_2 (char const*,int ,struct sockaddr_in*) ;
 int FUNC_3 (char const*,int ,struct sockaddr_in6*) ;

int FUNC_4(uv_udp_t* VAR_0,
                                 const char* VAR_1,
                                 const char* VAR_2,
                                 const char* VAR_3,
                                 uv_membership VAR_4) {
  int VAR_5;
  struct sockaddr_storage VAR_6;
  struct sockaddr_in* VAR_7;
  struct sockaddr_in6* VAR_8;
  struct sockaddr_storage VAR_9;
  struct sockaddr_in* VAR_10;
  struct sockaddr_in6* VAR_11;

  VAR_7 = (struct sockaddr_in*)&VAR_6;
  VAR_8 = (struct sockaddr_in6*)&VAR_6;
  VAR_10 = (struct sockaddr_in*)&VAR_9;
  VAR_11 = (struct sockaddr_in6*)&VAR_9;

  VAR_5 = FUNC_2(VAR_1, 0, VAR_7);
  if (VAR_5) {
    VAR_5 = FUNC_3(VAR_1, 0, VAR_8);
    if (VAR_5)
      return VAR_5;
    VAR_5 = FUNC_3(VAR_3, 0, VAR_11);
    if (VAR_5)
      return VAR_5;
    return FUNC_1(VAR_0,
                                          VAR_8,
                                          VAR_2,
                                          VAR_11,
                                          VAR_4);
  }

  VAR_5 = FUNC_2(VAR_3, 0, VAR_10);
  if (VAR_5)
    return VAR_5;
  return FUNC_0(VAR_0,
                                        VAR_7,
                                        VAR_2,
                                        VAR_10,
                                        VAR_4);
}
