
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,int,struct sockaddr_in*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,struct sockaddr const*,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(int VAR_4) {
  struct sockaddr_in VAR_5;
  int VAR_6;

  FUNC_0(0 == FUNC_2("0.0.0.0", VAR_4, &VAR_5));

  VAR_6 = FUNC_5(VAR_0, &VAR_2);
  if (VAR_6) {

    FUNC_1(VAR_3, "Socket creation error\n");
    return 1;
  }

  VAR_6 = FUNC_4(&VAR_2, (const struct sockaddr*) &VAR_5, 0);
  if (VAR_6) {

    FUNC_1(VAR_3, "Bind error\n");
    return 1;
  }

  VAR_6 = FUNC_3((uv_stream_t*)&VAR_2, 128, VAR_1);
  if (VAR_6) {

    FUNC_1(VAR_3, "Listen error\n");
    return 1;
  }

  return 0;
}
