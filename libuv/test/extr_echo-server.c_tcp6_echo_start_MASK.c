
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_handle_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char*,int,struct sockaddr_in6*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,struct sockaddr const*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(int VAR_8) {
  struct sockaddr_in6 VAR_9;
  int VAR_10;

  FUNC_0(0 == FUNC_2("::1", VAR_8, &VAR_9));

  VAR_4 = (uv_handle_t*)&VAR_7;
  VAR_5 = VAR_1;

  VAR_10 = FUNC_5(VAR_2, &VAR_7);
  if (VAR_10) {

    FUNC_1(VAR_6, "Socket creation error\n");
    return 1;
  }


  VAR_10 = FUNC_4(&VAR_7, (const struct sockaddr*) &VAR_9, 0);
  if (VAR_10) {

    FUNC_1(VAR_6, "IPv6 not supported\n");
    return 0;
  }

  VAR_10 = FUNC_3((uv_stream_t*)&VAR_7, VAR_0, VAR_3);
  if (VAR_10) {

    FUNC_1(VAR_6, "Listen error\n");
    return 1;
  }

  return 0;
}
