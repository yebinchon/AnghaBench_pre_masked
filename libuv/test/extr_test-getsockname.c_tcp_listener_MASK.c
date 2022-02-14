
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sockaddr*,char*,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct sockaddr*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char*,int ,struct sockaddr_in*) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,struct sockaddr const*,int ) ;
 int FUNC_7 (int *,struct sockaddr*,int*) ;
 int FUNC_8 (int *,struct sockaddr*,int*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(void) {
  struct sockaddr_in VAR_8;
  struct sockaddr VAR_9, VAR_10;
  int VAR_11;
  int VAR_12;

  FUNC_0(0 == FUNC_4("0.0.0.0", VAR_5, &VAR_8));

  VAR_12 = FUNC_9(VAR_3, &VAR_7);
  if (VAR_12) {
    FUNC_2(VAR_6, "Socket creation error\n");
    return 1;
  }

  VAR_12 = FUNC_6(&VAR_7, (const struct sockaddr*) &VAR_8, 0);
  if (VAR_12) {
    FUNC_2(VAR_6, "Bind error\n");
    return 1;
  }

  VAR_12 = FUNC_5((uv_stream_t*)&VAR_7, 128, VAR_4);
  if (VAR_12) {
    FUNC_2(VAR_6, "Listen error\n");
    return 1;
  }

  FUNC_3(&VAR_9, -1, sizeof VAR_9);
  VAR_11 = sizeof VAR_9;
  VAR_12 = FUNC_8(&VAR_7, &VAR_9, &VAR_11);
  FUNC_0(VAR_12 == 0);
  FUNC_1(&VAR_9, "0.0.0.0", VAR_5, "server socket");
  VAR_2++;

  VAR_11 = sizeof VAR_9;
  VAR_12 = FUNC_7(&VAR_7, &VAR_10, &VAR_11);
  FUNC_0(VAR_12 == VAR_0);
  VAR_1++;

  return 0;
}
