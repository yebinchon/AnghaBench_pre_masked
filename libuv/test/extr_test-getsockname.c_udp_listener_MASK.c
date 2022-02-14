
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sockaddr*,char*,int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct sockaddr*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (char*,int ,struct sockaddr_in*) ;
 int FUNC_5 (int *,struct sockaddr const*,int ) ;
 int FUNC_6 (int *,struct sockaddr*,int*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(void) {
  struct sockaddr_in VAR_7;
  struct sockaddr VAR_8;
  int VAR_9;
  int VAR_10;

  FUNC_0(0 == FUNC_4("0.0.0.0", VAR_3, &VAR_7));

  VAR_10 = FUNC_7(VAR_2, &VAR_5);
  if (VAR_10) {
    FUNC_2(VAR_4, "Socket creation error\n");
    return 1;
  }

  VAR_10 = FUNC_5(&VAR_5, (const struct sockaddr*) &VAR_7, 0);
  if (VAR_10) {
    FUNC_2(VAR_4, "Bind error\n");
    return 1;
  }

  FUNC_3(&VAR_8, -1, sizeof VAR_8);
  VAR_9 = sizeof VAR_8;
  VAR_10 = FUNC_6(&VAR_5, &VAR_8, &VAR_9);
  FUNC_0(VAR_10 == 0);
  FUNC_1(&VAR_8, "0.0.0.0", VAR_3, "udp listener socket");
  VAR_1++;

  VAR_10 = FUNC_8(&VAR_5, VAR_0, VAR_6);
  FUNC_0(VAR_10 == 0);

  return 0;
}
