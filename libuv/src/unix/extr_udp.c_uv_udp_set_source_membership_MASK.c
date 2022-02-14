
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_membership ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sockaddr_in*,char const*,struct sockaddr_in*,int ) ;
 int FUNC_1 (int *,struct sockaddr_in6*,char const*,struct sockaddr_in6*,int ) ;
 int FUNC_2 (char const*,int ,struct sockaddr_in*) ;
 int FUNC_3 (char const*,int ,struct sockaddr_in6*) ;

int FUNC_4(uv_udp_t* VAR_1,
                                 const char* VAR_2,
                                 const char* VAR_3,
                                 const char* VAR_4,
                                 uv_membership VAR_5) {

  int VAR_6;
  struct sockaddr_storage VAR_7;
  struct sockaddr_in* VAR_8;
  struct sockaddr_in6* VAR_9;
  struct sockaddr_storage VAR_10;
  struct sockaddr_in* VAR_11;
  struct sockaddr_in6* VAR_12;

  VAR_8 = (struct sockaddr_in*)&VAR_7;
  VAR_9 = (struct sockaddr_in6*)&VAR_7;
  VAR_11 = (struct sockaddr_in*)&VAR_10;
  VAR_12 = (struct sockaddr_in6*)&VAR_10;

  VAR_6 = FUNC_2(VAR_2, 0, VAR_8);
  if (VAR_6) {
    VAR_6 = FUNC_3(VAR_2, 0, VAR_9);
    if (VAR_6)
      return VAR_6;
    VAR_6 = FUNC_3(VAR_4, 0, VAR_12);
    if (VAR_6)
      return VAR_6;
    return FUNC_1(VAR_1,
                                          VAR_9,
                                          VAR_3,
                                          VAR_12,
                                          VAR_5);
  }

  VAR_6 = FUNC_2(VAR_4, 0, VAR_11);
  if (VAR_6)
    return VAR_6;
  return FUNC_0(VAR_1,
                                        VAR_8,
                                        VAR_3,
                                        VAR_11,
                                        VAR_5);



}
